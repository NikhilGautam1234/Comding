#include <stdio.h>
#include <string.h>

void count(char s[10001]){
    int v=0,c=0,sp=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U') v++;
        else if(s[i]==' '||s[i]=='b'||s[i]=='B') sp++;
        else c++;
    }
    printf("%d\n%d\n%d\n",v,c-1,sp);
}

int main(void){
    char sen[10001];
    fgets(sen,10001,stdin);
    count(sen);
}