#include<stdio.h>
struct item
{
	int count;
	float price;
	float unitPrice;
	char ref[5];
	char icon[5];

};

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

int sumUp(char basket1[10][3][5], char basket2[10][3][5])
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
		"╔══════════════════════════════════════════════╗\n"
		"║        APERCU DU PANIER (%02d article(s))      ║\n"
		"╠══════════════════════════════════════════════╣\n"
		"║                                              ║\n",
		getBasketItemCount(basket1) + getBasketItemCount(basket2)
	);
	for (int i = 0; i < allItemsCount; i++)
	{
		printf(
			"║  ╔════════════════════════════════════════╗  ║\n"
			"║  ║  %s  %s  #%02d   %04.1f              %04.1f ║  ║\n"
			"║  ╚════════════════════════════════════════╝  ║\n"
			"║                                              ║\n"
			, allItems[i].icon, allItems[i].ref, allItems[i].count, allItems[i].unitPrice, allItems[i].price);
	}
	printf("╚══════════════════════════════════════════════╝\n");
	printf("Press any key to continue ...");
	getchar();
	return 0;
}
