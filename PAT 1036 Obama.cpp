#include<cstdio>
int main()
{
	int row, col;
	char ch;
	int i = 0;
	int k = 0;
	scanf_s("%d", &col);
	getchar();
	scanf_s("%c", &ch);
	if (col % 2 == 0)k = 2;
	else k = 1;
	for (i = 0; i < col; i++)
	{
		if (i == 0 || i == col - k)
		{
			for (int k = 0; k < col; k++)
				printf("%c", ch);
			printf("\n");
		}
		else if (i % 2 == 0) {
			printf("%c", ch);
			for (int k = 1; k < col - 1; k++)
				printf(" ");
			printf("%c", ch);
			printf("\n");
		}
	}
	return 0;
}