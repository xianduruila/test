#define  _CRT_SECURE_NO_WARNINGS
int main()
{
	static int a[6][6];
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i <= 5; i++)
	{
		for (k = 0; k < 10 - 2 * i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

			}
			printf(" ");
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}