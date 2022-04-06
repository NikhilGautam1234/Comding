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
    temst a(11),b(11),c;
    ++a;
    a.display();
    b++;
    b.display();
    c.display();
    c=b++;
    b.display();
    c.display();
}