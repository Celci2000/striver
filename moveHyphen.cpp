#include<iostream>
using namespace std;
#include<bits/stdc++.h>
string moveHyphen(string str){
    if(str.length()==0){
        return "";
    }
    int i=0;
    string out;
    while(str[i]!='\0'){
        if(str[i]=='-'){
            out=out+str[i];

        }
        i++;
    }
    int j=0;
    while(str[j]!='\0'){
  if(str[j]!='-'){
    out+=str[j];
  }
  j++;
    }

    return out;
}

int main(){
    string str;
    cin>>str;
    int len= str.length(); 
    string res= moveHyphen(str);
    cout<<res ;


    return 0;

}