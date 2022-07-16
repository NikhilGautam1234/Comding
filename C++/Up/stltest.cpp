#include "bits/stdc++.h"
using namespace std;

void setDemo()
{
    int n;cin>>n;
    set<int> s;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
        //print all element
    for(auto x: s) cout<<x<<" ";
    cout<<"\n";
    
        //find an element and print it
    auto it = s.find(23);
    cout<< *it<<"\n";

        //size of set
    cout<< *s.end() << "\n";

        //get the index of element to find it
    int index=1;
    cout<<"Enter the element to find: ";
    cin>>a;
    for(auto x: s)
    {
        if(x==a)
        {
            cout<<"Index: "<<index<<"\n";
            break;
        }
        index++;
    }

        //get greater than or equal to a certain number in set
    auto it2 = s.lower_bound(23);
    cout<< *it2 <<"\n";

        //get strictly grater than a certain number
    auto it3 = s.upper_bound(23);
    cout<< *it3 <<"\n";

        //remove an element 
    s.erase(23); //the element 23 will get removed from set... if 23 does not exist in set it will remain unaffected

        //remove an element from certain index
    int ind;cin>>ind;
    int i=0,p;
    for(auto x:s){
        if(i==ind) p=x;
        i++;
    }
    cout<<p<<"\n";
    s.erase(p);

}

int main(void){

    setDemo();    

}