#include <iostream>

using namespace std;

int main()
{
    int n, m, p;
    int fact = 1;
    cout << "Enter the first value: ";
    cin >> n;
    cout << "Enter the second value: ";
    cin >> m;

    while (1)
    {
        cout << "\nWhat do you want to perform?\n\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Factorial\n\t6. Exit\n\nEnter your choice: ";
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "The addition is "<<n + m << endl;
            break;
        case 2:
            cout << "The subtraction is "<< n - m << endl;
            break;
        case 3:
            cout << "The multiplication is " << n * m << endl;
            break;
        case 4:
            cout << "The division is " << n / m << endl;
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                fact *= n - i;
            }
            cout << "The factorial is " << fact << endl;
            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Invalid Input\n";
            break;
        }
    }
    return 0;
}