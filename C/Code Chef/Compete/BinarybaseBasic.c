#include <stdio.h>
int main(void){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, k, x = 0;
        char s[1001];
        scanf("%d%d%s", &n, &k, &s);
        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - i - 1]) x++;
        if (k - x < 0) printf("No\n");
        else if ((k-x==0||(k-x>0 && (k-x)%2==0))&&n%2==0) printf("Yes\n");
        else if ((k-x == 0 || k-x > 0)&&n%2!=0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}