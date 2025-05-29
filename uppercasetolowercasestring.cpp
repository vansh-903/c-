#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "asnasvasv";
    for(int i=0;i<str.size();i++)
    {
         if(str[i]>='a'&&str[i]<='z')
         {
             str[i]-=32;
         }

    }
    cout<<str;
    // or
    // transform(s.begin(), s.end, s.begin(), ::toupper)
    //cout<<str;

return 0;
}