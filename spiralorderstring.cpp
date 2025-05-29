#include<iostream>
using namespace std;
int main()
{
     int n,m;
     cin>>n>>m;
     int a[n][m];   
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>a[i][j];

         }
     }
    int rows=0, rowe=n-1,cols=0,cole=m-1;
    //rows=row start rowe=row end cols=column start and cole=colmn end
    while(rows<=rowe && cols<=cole)
    {
         //ROW START
         for(int col=cols;col<=cole;col++)
         {
             cout<<a[rows][col]<<" ";
         }
         rows++;
         //COLUMN END
         for(int row=rows;row<=rowe;row++)
         {
             cout<<a[row][cole]<<" ";
         }
         cole--;
         //ROW END
         for(int col=cole;col>=cols;col--)
         {
             cout<<a[rowe][col]<<" ";
         }
         rowe--;
         //COLUMN StART
         for(int row=rowe;row>=rows;row--)
         {
             cout<<a[row][cols]<<" ";
         }
         cols++;
    
    }
    return 0;
}
