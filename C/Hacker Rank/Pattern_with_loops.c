#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a = 2 * n - 1; // The number of rows and columns.
  int m, b, c;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      m = i <= a - i ? i - 1 : a - i;
      b = j <= a - j ? j - 1 : a - j;
      c = m <= b ? m : b;
      printf("%d ", n - c);
    }
    printf("\n");
  }
  return 0;
}