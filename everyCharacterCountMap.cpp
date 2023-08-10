#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cin>>str;
    map <char , int> d;

    for(auto  i: str){
        d[i]++;
    }
    for(char i:str){
        if(d[i]!=0){
            cout<<i<<" "<< d[i]<<endl;
            d[i]=0;
        }
    }
    return 0;
}