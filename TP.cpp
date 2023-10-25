#include<iostream>
using namespace std;
main()
{
int a,b,result=0;
cout<<"Enter the values of a and b for Arithmetic calculations: "<<endl;
cin>>a>>b;
int choice;
while(true)
{
    cout<<"Enter choice"<<endl;
    cout<<"1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Remainder\n"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        result=a+b;
        cout<<"Addition :"<<result<<endl;
        break;

    case 2:
        result=a-b;
        cout<<"Subtraction :"<<result<<endl;
        break;

    case 3:
        result=a*b;
        cout<<"Multiplication :"<<result<<endl;
         break;

    case 4:
        result=a/b;
        cout<<"Division :"<<result<<endl;
         break;

    case 5:
        result=a%b;
        cout<<"Remainder :"<<result<<endl;
        cout<<"Subtraction :"<<result<<endl;

         break;

    default:cout<<"INVALID INPUT";

    }
    continue;
}
}
