#include <iostream>
using namespace std;

void menu()
{
    cout << "****************Menu****************" << endl;
    cout << "1.Check balance" << endl;
    cout << "2.Deposite" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4.Transfer" << endl;
    cout << "5.Quit" << endl;
    cout << "************************************" << endl;
}

int main()
{
    int acc, option, history, withdraw, deposit, transfer;
    string transactionHistory;
    char quit;
    int bal = 1000;
    int id, pin;

    do
    {
        cout << "********************** Welcome to atm **********************" << endl;
        cout << "Enter your id: ";
        cin >> id;
        cout << "Enter your pin: ";
        cin >> pin;
        if (id == 7977 && pin == 8041)
        {
            cout << "Welcome dear customer.";
        }
        else
        {
            cout << "Wrong id and password.";
            break;
        }

        menu();
        cout << "Please choose an option: ";
        cin >> option;

        switch (option)
        {

        case 1:
            cout << "Balance is: " << bal << "Rs" << endl;
            break;

        case 2:
            cout << "Deposite amount: ";
            cin >> deposit;
            bal += deposit;
            cout << "Current balance is: " << bal << "Rs" << endl;
            transactionHistory += "Deposited: " + to_string(deposit) + " Rs";
            break;

        case 3:
            cout << "Withdraw amount: ";
            cin >> withdraw;
            if (withdraw <= bal)
            {
                bal -= withdraw;
            }
            else
            {
                cout << "You dont have enough money." << endl;
            }
            cout << "Current balance is: " << bal << "Rs" << endl;
            break;

        case 4:
            cout << "Transfer amout: ";
            cin >> transfer;
            cout << "Account number: ";
            cin >> acc;
            if (transfer <= bal)
            {
                bal -= transfer;
                cout << "Amount of " << transfer << "has been successfully transfered to account number " << acc << endl;
            }
            else
            {
                cout << "You dont have enough money to transfer." << endl;
            }
            break;

        case 5:
            cout << "Do you want to quit?(y/n))";
            cin >> quit;
            if (quit == 'y' || quit == 'Y')
            {
                break;
            }
            // else if (quit == 'n' || quit == 'N'){
            //     continue;
            // }
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    } while (true);

    return 0;
}
