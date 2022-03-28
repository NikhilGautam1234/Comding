#include <bits/stdc++.h>
#define MAX_SIZE 50
using namespace std;

class Guest
{
public:
    char nmae[50];
    int seatno;
};
class Hall
{
public:
    int front=0, rear=0;
    static Guest allGuest[MAX_SIZE];
    static int allotSeat()
    {
        if (rear == (MAX_SIZE - 1))
        {
            cout << "Hall is full!";
        }
        return 0;
    }
    rear++;
    cout << "Enter the guest name:";
    cin >> allGuest[rear].name;
    allGuest[rear].seatno = rear + 1;
    return 0;

    static void listGuest()
    {
        while (++front <= rear)
        {
            cout << "\nGuest" << allGuest[front].name << " is seated on seats " << allGuest[front].seatno << ".";
        }
        rear = front = -1;
    }
};
int Hall::front = -1;
int Hall::rear = -1;
Guest Hall::allGuest[MAX_SIZE] = {};
int main()
{
    Hall::allotSeat();
    Hall::allotSeat();
    Hall::allotSeat();
    Hall::allotSeat();
    Hall::listGuest();
    return 0;
}
