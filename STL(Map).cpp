#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>hash;
    hash["Saurabh"]=1;
    hash["programming"]=2;
    hash["Deep"]=3;

    //to get the key individually
    // cout<<"The value of Gagan in the hashtable is: "<<hash["Gagan"];

    //to get all the keys together 

    for(auto.j=hash.begin();j!=hash.end();j++)
    {
        cout<<"The key will be "<<j->first<<"The key value in the key will be "<<j->second<<endl;
    }

}
