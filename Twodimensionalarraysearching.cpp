#include<iostream>
using namespace std;
int main()
{
     int n,m;
     cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     cout<<"THe matrix is:";
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     int x;
     cin>>x;
     bool flag =false;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(arr[i][j]==x)
             { 
                cout<<i<<j;
                flag=true;
             }
         }
     }
     if(flag==true)
     {
        cout<<"element found";
     }
     else cout<<"Not found";
}

