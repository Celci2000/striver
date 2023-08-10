
#include<iostream>
using namespace std;
int count_freq(string str, char ch){
    int i=0, count=0;
     for(int i=0;i<str.length();i++){
                if(str[i]==ch){
                    count++;
                }
                
     }
     return count;
}
int main(){
    string str;
    char ch;
    cin>>str;
    cin>>ch;
    int num = count_freq(str,ch);
    cout<<num;
    return 0;

}
