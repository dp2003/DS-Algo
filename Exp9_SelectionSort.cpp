#include <iostream>
using namespace std;
int main()
{
int a[100], n, i, j, position, swap;
cout<<"Enter number of elements";
cin>>n;
cout<<"Enter "<<n<<" Numbers";
for (i = 0; i < n; i++)
{
    cin>>a[i];
}
for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
cout<<"Sorted Array:";
for(i = 0; i < n; i++)
{
cout<<a[i]<<" ";
}
return 0;
}
