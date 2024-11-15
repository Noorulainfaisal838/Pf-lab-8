#include<iostream>
using namespace std;
int main()
{
    int range;
    cout<<"Enter range of month [1-12]: ";
    cin>>range;
    switch(range)
    {
        case 1:
        cout<<"January: It is Winter";
        break;
        case 2:
        cout<<"Feburary: It is Winter";
        break;
        case 3:
        cout<<"March: It is Spring";
        break;
        case 4:
        cout<<"April: It is Spring";
        break;
        case 5:
        cout<<"May: It is Spring";
        break;
        case 6:
        cout<<"June: It is Summer";
        break;
        case 7:
        cout<<"July: It is Summer";
        break;
        case 8:
        cout<<"August: It is Summer";
        break;
        case 9:
        cout<<"September: It is Autumn";
        break;
        case 10:
        cout<<"October: It is Autumn";
        break;
        case 11:
        cout<<"November: It is Autumn";
        break;
        case 12:
        cout<<"December: It is Winter";
        break;
        default:
        cout<<"Invalid Range";
        break;
    }
}
