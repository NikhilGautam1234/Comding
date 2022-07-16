#include "bits/stdc++.h"
using namespace std;

class recormds
{
    int amge;
    string name;

public:
    recormds(){};
    recormds(string x, int y) : name(x), amge(y) {}
    recormds elder(recormds doge)
    {
        return (doge.amge > amge) ? doge : *this;
    }
    void show()
    {
        cout << "Eldest person is: " << name << " with an age of " << amge << endl;
    }
};
int main(void)
{
    int age, n;
    string name;
    recormds person[3], goldva, temp;
    cout << "Nikhil\n21BCS9434\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Person " << i + 1 << "\nEnter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "\n";
        person[i] = recormds(name, age);
    }
    for (int i = 0; i < 1; i++)
    {
        goldva = person[i].elder(person[i + 1]);
    }
    goldva.show();
}
