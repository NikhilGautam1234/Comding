#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    char c;
    for (int i = 0; i < n; i++)
    {
      c = (97 + (i % 26));
      printf("%c",c);      
    }
    printf("\n"); 
  }
  return 0;
}