#include "bits/stdc++.h"
using namespace std;

class temst{
    int zoro;
public:
    temst(){
        zoro=0;
    }
    temst(int x){
        zoro=x;
    }
    temst operator ++(){
        ++zoro;
        return temst(zoro);
    }
    temst operator ++(int){
        temst t(zoro);
        ++zoro;
        return t;
    }
    void display(){
        cout<<"Number: "<<zoro<<endl;
    }
};

int main(void){
    cout<<"Nikhil\n21BCS9434\n";
    int x,y;
    cout<<"Enter the value for a: ";
    cin>>x;
    cout<<"Enter the value for b: ";
    cin>>y;
    temst a(x),b(y),c;
    ++a;
    a.display();
    b++;
    b.display();
    c.display();
    c=b++;
    b.display();
    c.display();
}