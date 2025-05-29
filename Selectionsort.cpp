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
for(int i=0;i<=n-2;i++)
{
    for(int j=i;j<=n-1;j++)
    {
        if(a[j]<a[i])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
return 0;
}