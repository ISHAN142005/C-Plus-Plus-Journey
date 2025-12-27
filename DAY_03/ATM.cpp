#include <iostream>
using namespace std;
double balance = 500;

void Checkbalance();
void Deposit();
void Withdraw();

void Checkbalance()
{
    cout << "Your balance is:$" << balance << endl;
}
void Deposit()
{
    double credit;
    cout << "Enter amount you want to Deposit:";
    cin >> credit;
    balance = (balance + credit);
    cout << "Deposited Successfully." << endl
         << "Current Balance:$" << balance << endl;
}
void Withdraw()
{
    double debit;
    cout << "Enter amount you want to Withdraw:";
    cin >> debit;
    if (debit <= balance)
    {
        balance = (balance - debit);
        cout << "Withdrawn Successfully." << endl
             << "Current Balance:$" << balance << endl;
    }
    else
    {
        cout << "INSUFFICIENT BALANCE!" << endl;
    }
}

void showmenu()
{

    cout << "Check balance(c)" << endl
         << endl
         << "Deposit(d)" << endl
         << endl
         << "Withdraw(w)" << endl
         << endl
         << "Exit(e)" << endl
         << endl;
}

int main()
{

    char key;

    cout << "************WELCOME TO ATM************" << endl;
    do
    {
        showmenu();
        cout << "Enter the key to continue:";
        cin >> key;
        switch (key)
        {
        case 'c':
            Checkbalance();
            break;
        case 'd':

            Deposit();
            break;
        case 'w':

            Withdraw();

            break;
        case 'e':
            cout << "GOODBYE!" << endl;
            break;
        default:
            cout << "INVALID INPUT" << endl;
            break;
        }
    }

    while (key != 'e')

        ;
    return 0;
}



/*
Setup: Create a global variable double balance = 500; before main() so all functions can access it.

Step 1: Create a function void showMenu() that prints these options:

Check Balance

Deposit

Withdraw

Exit

Step 2: Create separate functions for the logic:

checkBalance(): Simply prints the current money.

deposit(): Asks for an amount, adds it to balance.

withdraw(): Asks for an amount. Check if amount > balance first. If it is, print "Error." If not, subtract the money.

Step 3: In main(), use a do-while loop to keep the ATM running.

Inside the loop, show the menu and ask for the user's choice.

Use a switch statement to call the correct function based on the input.

Step 4 (The Exit): The loop should continue running while the user's choice is NOT 4.

If they pick 4, print "Goodbye!" and the loop ends.
*/