#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int maxL=0;
    int cl=0;
    int i=0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='/o')
        {
             if(cl>maxL)
             {
                 maxL=cl;
             }
             cl=0;
        }     
             else
             cl++;
        
        if(a[i]=='\0')
        
            break;
            i++;
        
    }
            
return 0;
}