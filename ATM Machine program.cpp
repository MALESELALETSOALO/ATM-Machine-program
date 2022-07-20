// ATM Machine program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

    // Private variables used inside class
private:
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;

    // Public variables
public:
    // Function to set the person's data
    void setvalue()
    {
        cout << "Enter name " << endl;
        cin.ignore();

        // To use space in string


        cout << "Enter Account number " << endl;
        cin >> accnumber;
        cout << "Enter Account type " << endl;
        cin >> type;
        cout << "Enter Balance " << endl;
        cin >> tot;
    }

    // Function to display the required data
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Account type:" << type << endl;
        cout << "Balance:" << tot << endl;
    }

    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "Enter amount to be Deposited " << endl;
        cin >> amount;
    }

    // Function to show the balance amount
    void showbal()
    {
        tot = tot + amount;
        cout << "Total balance is: " << tot << endl;
    }

    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw " << endl;
        cin >> a;
        avai_balance = tot - a;
        cout << "Available Balance is" << avai_balance;
    }
};


int main() {
    // Object of class
    Bank b;

    int choice;

    // Infinite while loop to choose
    // options everytime
    while (1) {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~"
            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
            << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            << "~~~~~~~~~" << endl;
        cout << "Enter Your Choice " << endl;
        cout << "\t1. Enter name, Account "
            << "number, Account type " << endl;
        cout << "\t2. Balance Enquiry" << endl;
        cout << "\t3. Deposit Money " << endl;
        cout << "\t4. Show Total balance " << endl;
        cout << "\t5. Withdraw Money " << endl;
        cout << "\t6. Cancel " << endl;
        cin >> choice;

        // Choices to select from
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "Invalid choice " << endl;
        }
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
