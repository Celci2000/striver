#include<iostream>
using namespace std;
int operations(char*str){
 
    if(str==NULL){
        return -1;
    }
    int a=*str-'0';
    str++;

    while(*str!='\0'){
      char  p =*str;
      str++;
    if(p=='A'){
        a&=(*str-'0');

    }
    else if(p=='B'){
        a|=(*str -'0');
    }
    else if(p=='C'){
        a^=(*str-'0');
    }
    str++;

    }
    return a;
}
int main(){
    cout<<"enter  a string:";
    string str;
    cin>>str;

    char*s= &str[0];

   
    int ans=operations(s);
    cout<<ans;

    return 0;
}