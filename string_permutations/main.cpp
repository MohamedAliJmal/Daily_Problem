#include <bits/stdc++.h>

using namespace std;


void get_combination(char &c,string &str,vector<string> res)
{
    
}

vector<string> permutation(string S)
    {
        //Your code here
        vector<string> res;
        for(auto i:S)
            get_combination(i,S,res);


    }

int main()
{
    string str;
    cin>>str;
    for(auto i:permutation(str))
        cout<<i<<" ";
    cout<<'\n';
}