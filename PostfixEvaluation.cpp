#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char postfix[25];
    int stacks[10];
    cout<<"Enter he postfix expression :";
    cin>>postfix;
    int n=strlen(postfix),temp;
    int i=0,top_stk=-1;
    postfix[n]=')';

    while(postfix[i]!=')')
    {
        if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='^')
        {
            switch(postfix[i])
            {
                case '+': temp =((int)stacks[top_stk-1]-48)+((int)stacks[top_stk]=-48);
                          stacks[--top_stk]=temp;
                          break;

                 case '-': temp=((int)stacks[top_stk-1]-48)-((int)stacks[top_stk]=-48);
                          stacks[--top_stk]=temp;
                          break;

                 case '*': temp=((int)stacks[top_stk-1]-48)*((int)stacks[top_stk]=-48);
                          stacks[--top_stk]=temp;
                          break;

                 case '/': temp=((int)stacks[top_stk-1]-48)/((int)stacks[top_stk]=-48);
                          stacks[--top_stk]=temp;
                          break;

                 case '^': temp=((int)stacks[top_stk-1]-48)^((int)stacks[top_stk]=-48);
                          stacks[--top_stk]=temp;
                          break;
            }
        }
        else
        {
            top_stk++;
            stacks[top_stk]=(int)postfix[i];
        }
        i++;

    }

    cout<<"Answer :"<<stacks[top_stk];
}
