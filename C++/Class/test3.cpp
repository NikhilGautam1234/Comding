#include "bits/stdc++.h"
using namespace std;

class pairms
{
    char zoro[50];

public:
    friend ostream &operator<<(ostream &output, pairms& enma)
    {
        output << enma.zoro;
        return output;
    }

    friend istream &operator>>(istream &input, pairms& shushui)
    {
        char ichimonji[50];
        input >> ichimonji;
        int kitetsu = strlen(ichimonji);
        if (kitetsu < 5 || ichimonji[0] != '(' || ichimonji[kitetsu - 1] != ')' || !strstr(ichimonji, ","))
        {
            cout << "Invalid Pair Value...\n";
            strcpy(ichimonji, "");
        }
        else
        {
            strcpy(shushui.zoro, ichimonji);
        }
        return input;
    }
};

int main(void)
{
    pairms sanji;
    cout << "Enter the value of pair object: ";
    cin >> sanji;
    cout << "Entered pair value is: " << sanji << endl;
}