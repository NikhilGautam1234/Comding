#include "bits/stdc++.h"
using namespace std;
class mewcomstruct
{
public:
    mewcomstruct()
    {
        cout << "Constructor Used" << endl;
    }
    ~mewcomstruct()
    {
        cout << "Destructor Used" << endl;
    }
};
int main()
{
    cout << "Name: Nikhil\nUID: 21BCS9434\n";
    mewcomstruct *Sanji = new mewcomstruct[4];
    delete[] Sanji;
}
