#include "bits/stdc++.h"
#include "fstream"
using namespace std;

int main(void){
    char mane[23];
    cout<<"Enter a string: ";
    cin>>mane;
    int lem=strlen(mane);
    fstream boa("Luffy",ios::in|ios::out|ios::app);
    fstream pudding("Sanji",ios::in|ios::out|ios::app);
    for(int i=0;i<lem;i++){
        boa.put(mane[i]);
        boa<<"\n";
    }
    boa.seekg(0);
    char k;
    while (boa)
    {
        boa.get(k);
        pudding.put(k);
        pudding<<k<<"\n";
    }
}