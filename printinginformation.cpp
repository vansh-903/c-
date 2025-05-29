#include<iostream>
#include<string>
using namespace std;

class student 
{
    public:
    string name;
    int age;
    bool gender;

    void printinfo{

    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++)
    {
         cin>>arr[i].name;
         cin>>arr[i].age;
         cin>>arr[i].gender;
                 
    }
        cout<<printinfo();
return 0;
}