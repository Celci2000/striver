#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findDistinct(string str){
    int len= str.size();
    int sum=0;
    set <char> st;
    for(int i=0;i<len;i++){
        sum+=str[i]-'0';
        st.insert(str[i]);
    }
    if(sum!=len){
        return 0;
    }
    else{
        return st.size();
    }
}
int main(){
     string str;
     cin>>str;
     int ans = findDistinct(str);
     cout<<ans;
      
    return 0;
}