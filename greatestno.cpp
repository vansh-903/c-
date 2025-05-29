#include<iostream>  
#include<string>
#include<algorithm>
using namespace std;
int main(){ 
    // FORM THE BIGGEST NO FROM NUMERIC STRING
    string s= "87325298";

    sort(s.begin(), s.end(), greater<int>());

    cout<<s;
return 0;
}