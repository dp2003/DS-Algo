#include<iostream>
int stack[10];
int top=-1;
using namespace std;
void push()
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;

    if(top==9)
    {
       cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top]=data;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        item = stack[top];
        top--;
        cout<<item<<endl;
    }
}
void display()
{
    int i;
    for (i=top;i>=0;i--)
    {
        cout<<stack[i]<<" | ";
    }
}
int main()
{
    int choice;

    while(true)
    {
        cout<<"Enter choice :"<<endl;
        cout<<"1- Push\n2- Pop\n3- Display"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: push();
            break;

            case 2:pop();
            break;

            case 3:display();
            break;

            default: cout<<"Invalid Input";
        }
    }
}























