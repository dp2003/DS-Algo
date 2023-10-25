#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int flag=0,input,inpre,stkPre;
    char infix[25],postfix[25],stacks[25];
    int top_stack=-1,top_post=-1;
    cout<<"Enter the size of the expression";
    cin>>input;
    cout<<"Enter the infix expression";
    cin>>infix;

    infix[input]=')';
    for(int i=0;i<input;i++)s
    {
        if((infix[i]>'a' && infix[i]<='z')||(infix[i]>='A'&& infix[i]<='Z'))
        {
            top_post++;
            postfix[top_post]=infix[i];
        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^'||infix[i]=='(')
                    {
                        if(infix[i]=='(')
                        {
                            top_post++;
                            postfix[top_post=infix[i]];
                        }
                        else
                        {
                            flag=0;

                        if(infix[i]=='+'||infix[i]=='-')
                        {
                            inpre=1;
                        }

                        else if ((infix[i]=='/')||(infix[i]=='*'))
                        {
                            inpre=2;
                        }
                            else if (infix[i]=='^')
                            {
                                inpre=3;
                            }
                            while(flag==0)
                            {
                                if(stacks[top_stack]=='+'||stacks[top_stack]=='-')
                                {
                                    stkPre=1;
                                }
                                else if (stacks[top_stack]=='/'||stacks[top_stack]=='*')
                                {
                                    stkPre=2;
                                }
                                else if (stacks[top_stack]=='^')
                                {
                                    stkPre=3;
                                }
                                else if(stacks[top_stack]=='(')
                                {
                                    inpre=10;
                                }

                                if(inpre>stkPre)
                                {
                                    top_stack ++;
                                    stacks[top_stack]= infix[i];
                                    flag=1;
                                }
                                else{
                                    top_post ++;
                                    postfix[top_post]= stacks[top_stack];
                                    top_stack--;
                                }
                            }

                    }
    }

                else if (infix[i]=='(')
                        {
                            top_stack ++;
                            stacks[top_stack]=infix[i];
                     }
                     else if(infix[i]==')')
                     {
                         while (stacks[top_stack]!='(')
                         {
                             top_post ++;
                             postfix[top_post]=stacks[top_stack];
                             top_stack --;
                         }
                         top_stack --;
                     }
                    }
                    cout<<"Postfix = ";
                    for(int i=0;i<top_post;i++)
                    {
                        cout<<postfix[i];
                    }
    }


