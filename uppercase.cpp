#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     string str = "hbasdkvankslc";
     transform(str.begin(),str.end(),str.begin(),::toupper);
     cout<<str;
}