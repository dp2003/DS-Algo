#include<iostream>
using namespace std;
main()
{
    int arr[10],size,i,num,pos;
    cout<<"Enter the array size:"<<endl;
    cin>>size;

    cout<<"Enter elements of array"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     cout<<"Elements in array are :"<<endl;
    for(i=0;i<size;i++)
    {



        cout<<arr[i]<<" | ";

    }
  while(true){

    int choice;
    cout<<"\nEnter your choice"<<endl;
    cout<<"1-Insertion \n 2-Deletion\n";
    cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter the number and position of the number you want to enter"<<endl;
                    cin>>num>>pos;

                    if(pos<=0 || pos>size+1)
                    {
                        cout<<"Invalid Position";
                    }
                    else{
                            for(i=size-1;i>=pos-1;i--)
                                {
                                    arr[i+1]= arr[i];
                                }
                                arr[pos-1]=num;
                                size++;
                                }
                                cout<<"Elements in array are :"<<endl;
                    for(i=0;i<size;i++)
                    {
                        cout<<arr[i]<<" | ";
                    }
                break;
            case 2: cout<<"From which position you want to delete"<<endl;
                cin>>pos;

                if(pos<=0 || pos>size)
                {
                    cout<<"Invalid Position";
                }
                else
                {
                    for(i=pos-1;i<size-1;i++)
                    {
                        arr[i]=arr[i+1];

                    }
                    size--;
                }
                cout<<"Elements in array are :"<<endl;
                for(i=0;i<size;i++)
                {
                    cout<<arr[i]<<" | ";
                }
                break;
            case 3 : cout<<"Invalid Input";
        }
        continue;
}
}
