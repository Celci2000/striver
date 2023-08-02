#include<iostream>
using namespace std;
string replace_char(string str ,char ch1 ,char ch2){
    if(str.length()==0){
        return "";

    }
  
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch1){
            str[i]=ch2;
        }
        else if(str[i]==ch2){
            str[i]=ch1;
        }
        i++;
    }
    return str;
}
int main(){
    char ch1,ch2;
    cout<<"enter two characters";
    cin>>ch1>>ch2;

    string str;
    cin>>str;
    string ans= replace_char( str,  ch1 , ch2);
    cout<<ans;
    return 0;
}