#include<iostream>
using namespace std;
int main()
{
    int balance=10000,deposit,withdraw,option;
    cout<<"Enter your option: \n1. Deposit\n2. Withdraw\n3. Check balance\n4. Exit"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
        cout<<"Enter deposit amount: ";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"New balance: "<<balance;
        break;
        case 2:
        cout<<"Enter withdrawal amount: ";
        cin>>withdraw;
        if(withdraw>balance){
        cout<<"Insufficient balance";}
        balance=balance-withdraw;
        cout<<"New balance: "<<balance;
        break;
        case 3:
        cout<<"Current balance: "<<balance;
        break;
        case 4:
        exit;
        default:
        cout<<"Invalid option";
        break;
    }
}
