#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);

     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<"\t";
     }
    //  vector<int>::iterator it for iteration in a vector

    // or we can use for(auto : vector name)
    cout<<endl;

    v.erase(v.begin()+1,v.end()-1);
    for (auto it: v)
    {
        cout<<it<<"\t";
    }
    
    // for(auto it: v){
    //     cout<<it<<"\t";
    // }

}