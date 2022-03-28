#include <bits/stdc++.h>
using namespace std;
class proffesion
{
protected:
    int code;
    char name[20];

public:
    void inp(void)
    {
        cout << "\n\nEnter code :-";
        cin >> code;
        cout << "Enter name :-";
        cin >> name;
    }
    void oup(void)
    {
        cout << "\nNAME:" << name;
        cout << "\nCODE:" << code;
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
        cout << "Enter Subject :-";
        cin >> subj;
        cout << "Enter Publication :-";
        cin >> pub;
    }
    void display(void)
    {
        oup();
        cout << "\nSUBJECT   :-" << subj;
        cout << "\nPUBLICATION:-" << pub;
    }
};

class officer : public proffesion
{
    char grade;

public:
    void create(void)
    {
        inp();
        cout << "Enter Grade :-";
        cin >> grade;
    }
    void display(void)
    {
        oup();
        cout << "\nGRADE     :-" << grade;
    }
};

class typist : public proffesion
{
    float speed;

public:
    void typi(void)
    {
        inp();
        cout << "Enter speed (wpm):-";
        cin >> speed;
    }
    void outpi(void)
    {
        oup();
        cout << "\nSPEED:-" << speed;
    }
};

class omk : public typist
{
    float wamge;

public:
    void create(void)
    {
        typi();
        cout << "Enter Daily Wages :-";
        cin >> wamge;
    }
    void display(void)
    {
        outpi();
        cout << "\nDAILY WAGES:-" << wamge;
    }
};

int main()
{
    teacher o1t[10];
    omk o1c[10];
    officer o1o[10];
    int choice, i;
    char test;
    while (1)
    {
        int count;
    start:

        cout << "\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
        cout << "Choose Category of Information\n";
        cout << "1)  Teachers\n";
        cout << "2)  Officer\n";
        cout << "3)  Typist\n";
        cout << "4)  Exit\n";
        cout << "Enter your choice:-";
        cin >> choice;
        switch (choice)
        {
        case 1:
            while (1)
            {
                cout << "\n=====TEACHERS INFORMATION=====\n\n";
                cout << "\nChoose your choice\n";
                cout << "1) Create\n";
                cout << "2) Display\n";
                cout << "3) Jump to Main Menu\n";
                cout << "Enter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        o1t[i].create();
                        count++;
                        cout << endl;
                        cout << "\n\nAre you Interested in entering data\n";
                        cout << "Enter y or n:-";
                        cin >> test;
                        if (test == 'y' || test == 'Y')
                            continue;
                        else
                            goto out1;
                    }
                out1:
                    break;
                case 2:
                    for (i = 0; i < count; i++)
                    {
                        cout << endl;
                        o1t[i].display();
                        cout << endl;
                    }
                    getch();
                    break;
                case 3:
                    goto start;
                default:
                    cout << "\nEnter choice is invalid\ntry again\n\n";
                }
            }
        case 2:
            while (1)
            {
                cout << "\n=====OFFICERS INFORMATION=====\n\n"<< "\nChoose your choice\n"<< "1) Create\n"<< "2) Display\n"<< "3) Jump to Main Menu\n"<< "Enter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        o1o[i].create();
                        count++;
                        cout << endl;
                        cout << "\n\nAre you Interested in entering data\n";
                        cout << "Enter y or n:-";
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
                        o1o[i].display();
                        cout << endl;
                    }
                    break;
                case 3:
                    goto start;
                default:
                    cout << "\nInvalid choice\ntry again\n\n";
                }
            }
        case 3:
            while (1)
            {
                cout << "\n=====TYPIST INFORMATION=====\n\n";
                cout << "\nChoose your choice\n";
                cout << "1) Create\n";
                cout << "2) Display\n";
                cout << "3) Jump to Main Menu\n";
                cout << "Enter your choice:-";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    for (count = 0, i = 0; i < 10; i++)
                    {
                        cout << endl;
                        o1c[i].create();
                        count++;
                        cout << endl;
                        cout << "\n\nAre you Interested in entering data\n";
                        cout << "Enter y or n:-";
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
                        o1c[i].display();
                        cout << endl;
                    }
                    getch();
                    break;
                case 3:
                    goto start;
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
