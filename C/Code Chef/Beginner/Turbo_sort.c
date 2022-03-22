#include <stdio.h>
int a[1000001]={0};
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i=0; i < t; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i=0; i < t; i++)
	{
		for (int j=0; j < t-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
