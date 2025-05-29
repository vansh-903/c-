#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch='A';
        int bp=(2*i+1)/2;
        //space
        for(int j=0;j<n-i-1;j++)
        cout<<" ";
        //alpha
        for(int j=0;j<2*i+1;j++)
        {
            cout<<ch;
            if(j<bp)
            ch++;
            else
            ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++)
        cout<<" ";

        cout<<endl;
    }
return 0;
}