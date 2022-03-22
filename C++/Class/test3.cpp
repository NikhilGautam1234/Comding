#include <bits/stdc++.h>
using namespace std;

class luffy{
    int a,b,c;
    string robin={"<3"};
    public:
    luffy(){
        cout<<"\n"<<robin<<endl;
        cout<<"Enter the values: ";
    }
    luffy(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    long calc();
    void show(){
        cout<<"The volume of cuboid is: "<<calc()<<"\n\n";
    }
    ~luffy(){
        cout<<"Destroying the constructor :(\n";
    }
};

long luffy :: calc(){
    long volume =a*b*c;
    return volume;
}

int main(void)
{
    int x,y,z;
    luffy sanji;
    cin>>x>>y>>z;
    luffy zoro(x,y,z);
    zoro.show();
}