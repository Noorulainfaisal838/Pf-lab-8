#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter status of light [R, Y, G]: ";
    cin>>a;
    switch (a)
    {
        case 'R':
        cout<<"Stop";
        break;
        case 'Y':
        cout<<"Slow down";
        break;
        case 'G':
        cout<<"Go";
        break;
        default:
        cout<<"Invalid status";
        break;
    }
}
