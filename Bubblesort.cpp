#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    int didswap=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            didswap=1;
        }
    } 
    if(didswap==0)
    {
        break;
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
return 0;
}