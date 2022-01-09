#include<stdio.h>

struct item
{
	int count;
	float price;
	float unitPrice;
	char ref[5];
	char icon[5];
};
//enum state { less, great, verygreat, perfect };

struct variety
{
	int countAll;
	int countSame;
	//enum state varietyState;
};

enum itemType { meat = 'V', vegetables = 'L', fruit = 'F'};


struct variety countArticle(enum itemType itemType_, struct item allItems[], int itemCount)
{
	struct variety output;
	output.countAll = 0;
	output.countSame = 0;
	for (int i = 0; i < itemCount; i++)
	{
		if (allItems[i].ref[0] == itemType_)
		{
			output.countSame = output.countSame +1;
			output.countAll = output.countAll+ allItems[i].count;
		}
	}
	float varietyPercentage = ((float)output.countSame / output.countAll);
	//printf("score %c %f\n", itemType_, varietyPercentage);
	/*if (varietyPercentage < 0.025f)
	{
		printf("perfect");
		output.varietyState = less;
	}
	else if (varietyPercentage < 0.050f)
	{
		printf("verygreat");
		output.varietyState = great;
	}
	else if (varietyPercentage < 0.075f)
	{
		printf("great");
		output.varietyState = verygreat;
	}
	else if(varietyPercentage == 1.0f)
	{
		printf("less");
		output.varietyState = perfect;
	}*/
	return output;
}

int getIndexItemAlreadyExist(struct item allItems[], char itemReference[])
{
	for (int i = 0; i < 20; i++)
	{
		if (strcasecmp(allItems[i].ref, itemReference) == 0)//if same
		{
			return i;
		}
	}
	return -1;
}

void addItemToAllItems(struct item allItems[], char element[5][5][5], int* allItemsCount)
{
	int indexItemAlreadyExists = getIndexItemAlreadyExist(allItems, element[1]);
	if (indexItemAlreadyExists == -1)
	{
		float f;
		sscanf(element[2], "%f", &f);
		allItems[*allItemsCount].count = 1;
		strcpy(allItems[*allItemsCount].icon, element[0]);
		allItems[*allItemsCount].unitPrice = f;
		allItems[*allItemsCount].price = f;
		strcpy(allItems[*allItemsCount].ref, element[1]);
		*allItemsCount = *allItemsCount+1;
	}
	else
	{
		float f;
		sscanf(element[2], "%f", &f);
		allItems[indexItemAlreadyExists].count++;
		allItems[indexItemAlreadyExists].price += f;
	}
}

void sumUp(char basket1[10][3][5], char basket2[10][3][5])
{
	system("clear");
	struct item allItems[20];
	int allItemsCount = 0;
	char element[5][5][5];
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(basket1[i][1], "000"))
		{
			strcpy(element[0], basket1[i][0]);
			strcpy(element[1], basket1[i][1]);
			strcpy(element[2], basket1[i][2]);
			addItemToAllItems(allItems, element, &allItemsCount);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(basket2[i][1], "000"))
		{
			strcpy(element[0], basket2[i][0]);
			strcpy(element[1], basket2[i][1]);
			strcpy(element[2], basket2[i][2]);
			addItemToAllItems(allItems, element, &allItemsCount);
		}
	}
	printf(
		"                                    ╔══════════════════════════════════════════════╗\n"
		"                                    ║        APERCU DU PANIER (%02d article(s))      ║\n"
		"                                    ╠══════════════════════════════════════════════╣\n"
		"                                    ║                                              ║\n",
		getBasketItemCount(basket1) + getBasketItemCount(basket2)
	);
	for (int i = 0; i < allItemsCount; i++)
	{
		printf(
			"                                    ║  ╔════════════════════════════════════════╗  ║\n"
			"                                    ║  ║  %s  %s  #%02d   %04.1f              %04.1f ║  ║\n"
			"                                    ║  ╚════════════════════════════════════════╝  ║\n"
			"                                    ║                                              ║\n"
			, allItems[i].icon, allItems[i].ref, allItems[i].count, allItems[i].unitPrice, allItems[i].price);
	}
	printf("                                    ╚══════════════════════════════════════════════╝\n\n");
	
	struct variety fruitVariety = countArticle(fruit, allItems, allItemsCount);
	struct variety vegetablesVariety = countArticle(vegetables, allItems, allItemsCount);
	struct variety meatVariety = countArticle(vegetables, allItems, allItemsCount);

	printf("Number of meat element: %d, variety of meat: %d\n", meatVariety.countAll, meatVariety.countSame);
	printf("Number of vegetables element: %d, variety of vegetables: %d\n", vegetablesVariety.countAll, vegetablesVariety.countSame);
	printf("Number of fruit element: %d, variety of fruit: %d\n\n", fruitVariety.countAll, fruitVariety.countSame);



	printf("Press any key to continue ...\n");
	getchar();
}
