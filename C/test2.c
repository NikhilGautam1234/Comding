#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char a[11], b[11];
		int p1, p2;
		scanf("%s%d%s%d", &a, &p1, &b, &p2);
		int h = strlen(a) + p1;
		int j = strlen(b) + p2;

		if (h > j) printf(">\n");
		else if (j > h) printf("<\n");
		else
		{
			if (strcmp(a, b) > 0) printf(">\n");
			else if (strcmp(b, a) > 0) printf("<\n");
			else printf("=\n");
		}
	}
	return 0;
}