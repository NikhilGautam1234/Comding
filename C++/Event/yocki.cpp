#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin>>dna;
    int p=0,x=0;
    for(int i=1;i<dna.length();i++){
        while(dna[i-1]==dna[i]){
            p++;
            if(p>x) x=p;
            i++;
        }   
        p=0;
    }
    cout<<x+1<<"\n";
    return 0;
}