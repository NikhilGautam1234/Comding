#include <bits/stdc++.h>
using namespace std;
class proffesion
{
protected:
    int code = 0;
    char name[20] = "Null";

public:
    void inp(void)
    {
        cout << "\n\nEnter code: ";
        cin >> code;
        cout << "Enter name: ";
        cin >> name;
    }
    void oup(void)
    {
        cout << "\nNAME: " << name;
        cout << "\nCODE: " << code;
    }
};

class teacher : public proffesion
{
    char subj[20];
    char pub[20];

public:
    void create(void)
    {
        inp();
        cout << "Enter Subject: ";
        cin >> subj;
        cout << "Enter Publication: ";
        cin >> pub;
    }
    void display(void)
    {
        oup();
        cout << "\nSUBJECT: " << subj;
        cout << "\nPUBLICATION: " << pub;
    }
};

class officer : public proffesion
{
    char grade;

public:
    void create(void)
    {
        inp();
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void display(void)
    {
        oup();
        cout << "\nGRADE: " << grade;
    }
};

class typist : public proffesion
{
    float speed;

public:
    void typi(void)
    {
        inp();
        cout << "Enter speed (wpm): ";
        cin >> speed;
    }
    void outpi(void)
    {
        oup();
        cout << "\nSPEED: " << speed;
    }
};

class omk : public typist
{
    float wamge;

public:
    void create(void)
    {
        typi();
        cout << "Enter Daily Wages : ";
        cin >> wamge;
    }
    void display(void)
    {
        outpi();
        cout << "\nDAILY WAGES: " << wamge;
    }
};

int main()
{
    teacher T[10];
    omk C[10];
    officer O[10];
    int choice, i;
    char test;
    while (1)
    {
        int count;
    again:

        cout << "\n*******EDUCATION INSTITUTION DATABASE*******\n\n\n";
        cout << "Choose Category of Information\n1)  Teachers\n2)  Officer\n3)  Typist\n4)  Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            while (1)
            {
                cout << "\n-------TEACHERS INFORMATION-------\n\n\nChoose your choice\n1) Create\n2) Display\n3) Jump to Main Menu\nEnter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        T[i].create();
                        count++;
                        cout << "\n\n\nAre you Interested in entering more data\nEnter y or n:-";
                        cin >> test;
                        if (test == 'y' || test == 'Y')
                            continue;
                        else
                            goto out;
                    }
                out:
                    break;
                case 2:
                    for (i = 0; i < count; i++)
                    {
                        cout << endl;
                        T[i].display();
                        cout << endl;
                    }
                    break;
                case 3:
                    goto again;
                default:
                    cout << "\nEnter choice is invalid\ntry again\n\n";
                }
            }
        case 2:
            while (1)
            {
                cout << "\n-------OFFICERS INFORMATION-------\n\n\nChoose your choice\n1) Create\n2) Display\n3) Jump to Main Menu\nEnter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        O[i].create();
                        count++;
                        cout << "\n\n\nAre you Interested in entering data\nEnter y or n:-";
                        cin >> test;
                        if (test == 'y' || test == 'Y')
                            continue;
                        else
                            goto out2;
                    }
                out2:
                    break;
                case 2:
                    for (i = 0; i < count; i++)
                    {
                        cout << endl;
                        O[i].display();
                        cout << endl;
                    }
                    break;
                case 3:
                    goto again;
                default:
                    cout << "\nInvalid choice\ntry again\n\n";
                }
            }
        case 3:
            while (1)
            {
                cout << "\n-------TYPIST INFORMATION-------\n\n\nChoose your choice\n1) Create\n2) Display\n3) Jump to Main Menu\nEnter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        C[i].create();
                        count++;
                        cout << "\n\n\nAre you Interested in entering data\nEnter y or n:-";
                        cin >> test;
                        if (test == 'y' || test == 'Y')
                            continue;
                        else
                            goto out3;
                    }
                out3:
                    break;
                case 2:
                    for (i = 0; i < count; i++)
                    {
                        cout << endl;
                        C[i].display();
                        cout << endl;
                    }
                    break;
                case 3:
                    goto again;
                default:
                    cout << "\nInvalid choice\ntry again\n\n";
                }
            }
        case 4:
            goto end;
        }
    }
end:
    return 0;
}
