#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int a, b, c, p, q, r;
		scanf("%d%d%d%d%d%d", &a, &b, &c, &p, &q, &r);
		float win=(p+q+r)/2.0;
		if (p+b+c>win||a+q+c>win||a+b+r>win) printf("Yes\n");
		else printf("NO\n");
	}
	return 0;
}