#include <stdio.h>
#include <string.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

void printCustomForm(char fruits[15][3][5], char legumes[15][3][5], char viandes[15][3][5], char caisseMsgs[3][32], char basket1[10][3][5], char basket2[10][3][5], int closeMsg)
{
	printf("\n");
	if (closeMsg)
	{
		printf(
			"                                                       ╔═══════════════════════════════╗\n"
			"                                                       ║  BIENVENUE CHEZ INF1031--LIB  ║\n"
			"╔══════════════════════════════════════════════════════╩═══════════════════════════════╩══════════════════════════════════════════════════════╗\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║         ╔═════════════════════════════════╗         ╔═════════════════════════════════╗         ╔═════════════════════════════════╗         ║\n"
			"║         ║             FRUITS              ║         ║             LEGUMES             ║         ║             VIANDES             ║         ║\n"
			"║         ╠═════════════════════════════════╣         ╠═════════════════════════════════╣         ╠═════════════════════════════════╣         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s   %s   %s    %s     %s   ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ╚═════════════════════════════════╝         ╚═════════════════════════════════╝         ╚═════════════════════════════════╝         ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                        ╔╗          ╔╗    ╔╗          ╔╗                                                     ║\n"
			"║                                                        ╚╣          ╠╝    ╚╣          ╠╝              ╔═════════════════════════════════╗    ║\n"
			"║         ╔════════════════════════════════╗              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║         ║ SAISIR LE CODE :               ║              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║         ╚════════════════════════════════╝              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║                   CHOIX ARTICLE                         ╚══════════╝      ╚══════════╝               ╚═════════════════════════════════╝    ║\n"
			"║                                                            PANIER 1         PANIER 2                               CAISSE                   ║\n"
			"║                                             ╔══════════════════════════════════════════════════╗                                            ║\n"
			"║                                             ║ VOS COURSES SONT PRETES ET MERCI DE VOTRE VISITE ║                                            ║\n"
			"╚═════════════════════════════════════════════╩══════════════════════════════════════════════════╩════════════════════════════════════════════╝\n",

			fruits[0][0], fruits[1][0], fruits[2][0], fruits[3][0], fruits[4][0],
			legumes[0][0], legumes[1][0], legumes[2][0], legumes[3][0], legumes[4][0],
			viandes[0][0], viandes[1][0], viandes[2][0], viandes[3][0], viandes[4][0],

			fruits[0][1], fruits[1][1], fruits[2][1], fruits[3][1], fruits[4][1],
			legumes[0][1], legumes[1][1], legumes[2][1], legumes[3][1], legumes[4][1],
			viandes[0][1], viandes[1][1], viandes[2][1], viandes[3][1], viandes[4][1],

			fruits[0][2], fruits[1][2], fruits[2][2], fruits[3][2], fruits[4][2],
			legumes[0][2], legumes[1][2], legumes[2][2], legumes[3][2], legumes[4][2],
			viandes[0][2], viandes[1][2], viandes[2][2], viandes[3][2], viandes[4][2],




			fruits[5][0], fruits[6][0], fruits[7][0], fruits[8][0], fruits[9][0],
			legumes[5][0], legumes[6][0], legumes[7][0], legumes[8][0], legumes[9][0],
			viandes[5][0], viandes[6][0], viandes[7][0], viandes[8][0], viandes[9][0],

			fruits[5][1], fruits[6][1], fruits[7][1], fruits[8][1], fruits[9][1],
			legumes[5][1], legumes[6][1], legumes[7][1], legumes[8][1], legumes[9][1],
			viandes[5][1], viandes[6][1], viandes[7][1], viandes[8][1], viandes[9][1],

			fruits[5][2], fruits[6][2], fruits[7][2], fruits[8][2], fruits[9][2],
			legumes[5][2], legumes[6][2], legumes[7][2], legumes[8][2], legumes[9][2],
			viandes[5][2], viandes[6][2], viandes[7][2], viandes[8][2], viandes[9][2],




			fruits[10][0], fruits[11][0], fruits[12][0], fruits[13][0], fruits[14][0],
			legumes[10][0], legumes[11][0], legumes[12][0], legumes[13][0], legumes[14][0],
			viandes[10][0], viandes[11][0], viandes[12][0], viandes[13][0], viandes[14][0],

			fruits[10][1], fruits[11][1], fruits[12][1], fruits[13][1], fruits[14][1],
			legumes[10][1], legumes[11][1], legumes[12][1], legumes[13][1], legumes[14][1],
			viandes[10][1], viandes[11][1], viandes[12][1], viandes[13][1], viandes[14][1],

			fruits[10][2], fruits[11][2], fruits[12][2], fruits[13][2], fruits[14][2],
			legumes[10][2], legumes[11][2], legumes[12][2], legumes[13][2], legumes[14][2],
			viandes[10][2], viandes[11][2], viandes[12][2], viandes[13][2], viandes[14][2],

			basket1[0][0], basket1[1][0], basket1[2][0], basket2[0][0], basket2[1][0], basket2[2][0], caisseMsgs[0],
			basket1[3][0], basket1[4][0], basket1[5][0], basket2[3][0], basket2[4][0], basket2[5][0], caisseMsgs[1],
			basket1[6][0], basket1[7][0], basket1[8][0], basket2[6][0], basket2[7][0], basket2[8][0], caisseMsgs[2]

		);
	}
	else
	{
		printf(
			"                                                       ╔═══════════════════════════════╗\n"
			"                                                       ║  BIENVENUE CHEZ INF1031--LIB  ║\n"
			"╔══════════════════════════════════════════════════════╩═══════════════════════════════╩══════════════════════════════════════════════════════╗\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║         ╔═════════════════════════════════╗         ╔═════════════════════════════════╗         ╔═════════════════════════════════╗         ║\n"
			"║         ║             FRUITS              ║         ║             LEGUMES             ║         ║             VIANDES             ║         ║\n"
			"║         ╠═════════════════════════════════╣         ╠═════════════════════════════════╣         ╠═════════════════════════════════╣         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s   %s   %s    %s     %s   ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║     %s    %s    %s    %s    %s  ║         ║\n"
			"║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║   %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║€  %s   %s   %s   %s   %s   ║         ║\n"
			"║         ║                                 ║         ║                                 ║         ║                                 ║         ║\n"
			"║         ╚═════════════════════════════════╝         ╚═════════════════════════════════╝         ╚═════════════════════════════════╝         ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                        ╔╗          ╔╗    ╔╗          ╔╗                                                     ║\n"
			"║                                                        ╚╣          ╠╝    ╚╣          ╠╝              ╔═════════════════════════════════╗    ║\n"
			"║         ╔════════════════════════════════╗              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║         ║ SAISIR LE CODE :               ║              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║         ╚════════════════════════════════╝              ║ %s %s %s ║      ║ %s %s %s ║               ║ %s ║    ║\n"
			"║                   CHOIX ARTICLE                         ╚══════════╝      ╚══════════╝               ╚═════════════════════════════════╝    ║\n"
			"║                                                            PANIER 1         PANIER 2                               CAISSE                   ║\n"
			"║                                                                                                                                             ║\n"
			"║                                                                                                                                             ║\n"
			"╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n",

			fruits[0][0], fruits[1][0], fruits[2][0], fruits[3][0], fruits[4][0],
			legumes[0][0], legumes[1][0], legumes[2][0], legumes[3][0], legumes[4][0],
			viandes[0][0], viandes[1][0], viandes[2][0], viandes[3][0], viandes[4][0],

			fruits[0][1], fruits[1][1], fruits[2][1], fruits[3][1], fruits[4][1],
			legumes[0][1], legumes[1][1], legumes[2][1], legumes[3][1], legumes[4][1],
			viandes[0][1], viandes[1][1], viandes[2][1], viandes[3][1], viandes[4][1],

			fruits[0][2], fruits[1][2], fruits[2][2], fruits[3][2], fruits[4][2],
			legumes[0][2], legumes[1][2], legumes[2][2], legumes[3][2], legumes[4][2],
			viandes[0][2], viandes[1][2], viandes[2][2], viandes[3][2], viandes[4][2],




			fruits[5][0], fruits[6][0], fruits[7][0], fruits[8][0], fruits[9][0],
			legumes[5][0], legumes[6][0], legumes[7][0], legumes[8][0], legumes[9][0],
			viandes[5][0], viandes[6][0], viandes[7][0], viandes[8][0], viandes[9][0],

			fruits[5][1], fruits[6][1], fruits[7][1], fruits[8][1], fruits[9][1],
			legumes[5][1], legumes[6][1], legumes[7][1], legumes[8][1], legumes[9][1],
			viandes[5][1], viandes[6][1], viandes[7][1], viandes[8][1], viandes[9][1],

			fruits[5][2], fruits[6][2], fruits[7][2], fruits[8][2], fruits[9][2],
			legumes[5][2], legumes[6][2], legumes[7][2], legumes[8][2], legumes[9][2],
			viandes[5][2], viandes[6][2], viandes[7][2], viandes[8][2], viandes[9][2],




			fruits[10][0], fruits[11][0], fruits[12][0], fruits[13][0], fruits[14][0],
			legumes[10][0], legumes[11][0], legumes[12][0], legumes[13][0], legumes[14][0],
			viandes[10][0], viandes[11][0], viandes[12][0], viandes[13][0], viandes[14][0],

			fruits[10][1], fruits[11][1], fruits[12][1], fruits[13][1], fruits[14][1],
			legumes[10][1], legumes[11][1], legumes[12][1], legumes[13][1], legumes[14][1],
			viandes[10][1], viandes[11][1], viandes[12][1], viandes[13][1], viandes[14][1],

			fruits[10][2], fruits[11][2], fruits[12][2], fruits[13][2], fruits[14][2],
			legumes[10][2], legumes[11][2], legumes[12][2], legumes[13][2], legumes[14][2],
			viandes[10][2], viandes[11][2], viandes[12][2], viandes[13][2], viandes[14][2],

			basket1[0][0], basket1[1][0], basket1[2][0], basket2[0][0], basket2[1][0], basket2[2][0], caisseMsgs[0],
			basket1[3][0], basket1[4][0], basket1[5][0], basket2[3][0], basket2[4][0], basket2[5][0], caisseMsgs[1],
			basket1[6][0], basket1[7][0], basket1[8][0], basket2[6][0], basket2[7][0], basket2[8][0], caisseMsgs[2]
		);
	}
}

int countSameArticle(char basket[10][3][5], char itemReference[32])
{
	int sameArticleCount = 0;
	for (int i = 0; i < 10; i++)
	{
		if (strcasecmp(basket[i][1], itemReference) == 0)
		{
			sameArticleCount++;
		}
	}
	return sameArticleCount;
}

void getBalance(char basket1[10][3][5], char basket2[10][3][5], char caisseMsgsTemplate[3][64], char caisseMsgs[3][32])
{
	int basketItemCount = 0;
	float allFloat = 0.000f;

	for (int i = 0; i < 10; i++)
	{
		if (strcmp(basket1[i][1], "000") != 0)//if not empty
		{
			float f;
			sscanf(basket1[i][2], "%f", &f);
			allFloat += f;
			basketItemCount++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(basket2[i][1], "000") != 0)//if not empty
		{
			float f;
			sscanf(basket2[i][2], "%f", &f);
			allFloat += f;
			basketItemCount++;
		}
	}
	char buff[64];
	snprintf(buff, sizeof(buff), caisseMsgsTemplate[0], allFloat);
	strcpy(caisseMsgs[0], buff);
}

void cpyBasketItem(char basketDest[10][3][5], char basketSource[10][3][5],  int destIndex, int srcIndex)
{
	strcpy(basketDest[destIndex][0], basketSource[srcIndex][0]);
	strcpy(basketDest[destIndex][1], basketSource[srcIndex][1]);
	strcpy(basketDest[destIndex][2], basketSource[srcIndex][2]);

}

void clearBasketElementAtIndex(char basket[10][3][5], int index)
{
	char element[3][5] = { " .", "000", "000" };
	strcpy(basket[index][0], element[0]);
	strcpy(basket[index][1], element[1]);
	strcpy(basket[index][2], element[2]);

}

void deleteElement(char basket1[10][3][5], char basket2[10][3][5], char itemReference[4], int basketIndex, char caisseMsgs[3][32], char caisseMsgsTemplate[3][64],
	int* basketsFull)
{
	int deletedElementIndex = -1;
	if (basketIndex == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (strcasecmp(basket1[i][1], itemReference) == 0)
			{
				clearBasketElementAtIndex(basket1, i);
				deletedElementIndex = i;
				break;
			}
		}
		if (deletedElementIndex != -1)
		{
			for (int i = deletedElementIndex; i < 10 - 1; i++)
			{
				cpyBasketItem(basket1, basket1, i, i+1);

			}
			if (getBasketItemCount(basket2) > 0)
			{
				cpyBasketItem(basket1, basket2, getBasketItemCount(basket1), 0);

				clearBasketElementAtIndex(basket2, 0);

				for (int i = 0; i < 10 - 1; i++)
				{
					cpyBasketItem(basket2, basket2, i, i + 1);
				}
			}
		}

	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (strcasecmp(basket2[i][1], itemReference) == 0)
			{
				clearBasketElementAtIndex(basket2, i);
				deletedElementIndex = i;
				break;
			}
		}
		if (deletedElementIndex != -1)
		{
			for (int i = deletedElementIndex; i < 10 - 1; i++)
			{
				cpyBasketItem(basket2, basket2, i, i + 1);
			}
		}
	}

	getBalance(basket1, basket2, caisseMsgsTemplate, caisseMsgs);
	if (deletedElementIndex != -1) { *basketsFull =0; }
}


void AddItemToBasketAndgetEmojiByReference(char fruits[15][3][5], char legumes[15][3][5], char viandes[15][3][5], char ref[32], char basket1[10][3][5], char basket2[10][3][5],
	char caisseMsgs[3][32], char caisseMsgsTemplate[3][64], int* basketsFull)
{
	char element[5][5][5];
	int found;
	switch (toupper(ref[0]))
	{
	case 'L':;
		for (int i = 0; i < 15; i++)
		{
			if (strcasecmp(legumes[i][1], ref) == 0)//if same
			{
				strcpy(element[0], legumes[i][0]);
				strcpy(element[1], legumes[i][1]);
				strcpy(element[2], legumes[i][2]);
				found = 1;
			}
		}
		break;

	case 'F':;
		for (int i = 0; i < 15; i++)
		{
			if (strcasecmp(fruits[i][1], ref) == 0)//if same
			{
				strcpy(element[0], fruits[i][0]);
				strcpy(element[1], fruits[i][1]);
				strcpy(element[2], fruits[i][2]);
				found = 1;
			}
		}
		break;

	case 'V':;
		for (int i = 0; i < 15; i++)
		{
			if (strcasecmp(viandes[i][1], ref) == 0)//if same
			{
				strcpy(element[0], viandes[i][0]);
				strcpy(element[1], viandes[i][1]);
				strcpy(element[2], viandes[i][2]);
				found = 1;
			}
		}
		break;
	}

	int itemTotal = getBasketItemCount(basket1) + getBasketItemCount(basket2);
	if (!((itemTotal > 17) | (countSameArticle(basket1, element[1]) + countSameArticle(basket2, element[1]) > 2)) && found)
	{
		if (getBasketItemCount(basket1) > 8)
		{
			int basket1ItemCount = getBasketItemCount(basket2);
			strcpy(basket2[basket1ItemCount][0], element[0]);
			strcpy(basket2[basket1ItemCount][1], element[1]);
			strcpy(basket2[basket1ItemCount][2], element[2]);

		}
		else
		{
			int basket2ItemCount = getBasketItemCount(basket1);
			strcpy(basket1[basket2ItemCount][0], element[0]);
			strcpy(basket1[basket2ItemCount][1], element[1]);
			strcpy(basket1[basket2ItemCount][2], element[2]);
		}
	}
	else
	{
		printf("No add total basket count: %d | ", itemTotal);
	}
	if (getBasketItemCount(basket1) + getBasketItemCount(basket2) > 17)
	{
		printf("All baskets are full | ");
		*basketsFull = 1;
	}
	getBalance(basket1, basket2, caisseMsgsTemplate, caisseMsgs);
}

int getBasketItemCount(char basket[10][3][5])
{
	int basketItemCount = 0;
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(basket[i][1], "000") != 0)//if not empty
		{
			basketItemCount++;
		}
	}
	return basketItemCount;
}

int main()
{

	char caisseMsgsTemplate[3][64] =
	{
		"TOTAL A PAYER: %04.1f            ",
		"SAISIR VOTRE MONTANT: %04.1f   ",
		"MONNAIE: %04.1f                "
	};

	char caisseMsgs[3][32] =
	{
		"TOTAL A PAYER: 00.0            ",
		"SAISIR VOTRE MONTANT: 00.0     ",
		"MONNAIE: 00.0                  "
	};

	int basketsFull = 0;
	char fruits[15][3][5] =
	{
		{"🍓", "F00", "3.4"},
		{"🍇", "F01", "4.1"},
		{"🍹", "F02", "2.9"},
		{"🍎", "F03", "2.2"},
		{"🍐", "F04", "002"},
		{"🍊", "F05", "3.1"},
		{"🍋", "F06", "001"},
		{"🍌", "F07", "2.5"},
		{"🍉", "F08", "3.8"},
		{"🍈", "F09", "2.5"},
		{"🍒", "F10", "002"},
		{"🍑", "F11", "1.6"},
		{"🥥", "F12", "1.8"},
		{"🍍", "F13", "3.7"},
		{"🥝", "F14", "1.5"},
	};

	char legumes[15][3][5] =
	{
		{"🍃", "L00", "2.4"},
		{"🍆", "L01", "2.1"},
		{"🍏", "L02", "1.9"},
		{"🍎", "L03", "2.8"},
		{"🍐", "L04", "1.7"},
		{"🥗", "L05", "2.1"},
		{"🥕", "L06", "2.9"},
		{"🥔", "L07", "1.9"},
		{"🍊", "L08", "1.9"},
		{"🥑", "L09", "3.1"},
		{"🍀", "L10", "2.1"},
		{"🥜", "L11", "2.5"},
		{"🧅", "L12", "2.8"},
		{"🌰", "L13", "2.3"},
		{"🥬", "L14", "2.7"},
	};

	char viandes[15][3][5] =
	{
		{"🍗", "V00", "2.4"},
		{"🍖", "V01", "2.1"},
		{"🥩", "V02", "1.9"},
		{"🥓", "V03", "2.8"},
		{"🥯", "V04", "1.7"},
		{"🥞", "V05", "2.1"},
		{"🦐", "V06", "2.9"},
		{"🦑", "V07", "1.9"},
		{"🍱", "V08", "1.9"},
		{"🦀", "V09", "3.1"},
		{"🦪", "V10", "2.1"},
		{"🍤", "V11", "2.8"},
		{"🍥", "V12", "2.3"},
		{"🍢", "V13", "2.7"},
		{"🍟", "V14", "2.7"},
	};

	char basket1[10][3][5] =
	{
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"}
	};

	char basket2[10][3][5] =
	{
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"},
		{" .", "000", "000"}
	};

	char aStrgArray[32];
	char c;
	printCustomForm(fruits, legumes, viandes, caisseMsgs, basket1, basket2, basketsFull);
	while (strcasecmp(aStrgArray, "FIN"))
	{
		system("clear");
		printCustomForm(fruits, legumes, viandes, caisseMsgs, basket1, basket2, basketsFull);
		gotoxy(30, 30);
		scanf("%31[0-9a-zA-Z ]", &aStrgArray);

		if (strcasecmp(aStrgArray, "FIN") != 0)
		{
			if (toupper(aStrgArray[0]) == 'S' && toupper(aStrgArray[1]) == 'U' && toupper(aStrgArray[2]) == 'P')
			{
				int basketIndex = aStrgArray[4] - '0';
				char basketReference[4];
				basketReference[0] = aStrgArray[6];
				basketReference[1] = aStrgArray[7];
				basketReference[2] = aStrgArray[8];

				deleteElement(basket1, basket2, basketReference, basketIndex, caisseMsgs, caisseMsgsTemplate, &basketsFull);
			}
			else
			{
				AddItemToBasketAndgetEmojiByReference(fruits, legumes, viandes, aStrgArray, basket1, basket2, caisseMsgs, caisseMsgsTemplate, &basketsFull);
			}
		}

		do
		{
			c = (char)getchar();
		} while (c != '\n');
	}
	system("clear");

	return 0;
}

