#include<iostream>
using namespace std;
int findDistinct(string str){
    int len=str.length();
    int count_dist=0;
    string output;
    int count[100]={0};
    if(len==0){                ///tc= n^2
    
        return 0;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
           if(str[j]-'0'==i){
            count[i]++;
        }
        }
         output+=to_string(count[i]);
    }
    cout<<output;
    if(output==str){
        for(int i=0;i<len;i++){
            if(count[i]!=0){
                count_dist++;
            }
        }
        return count_dist;
    }
    else{
        return 0;
    }
}
int main(){
    string str;

    cout<<"enter a string  of numbers:";
    cin>>str;
    int ans = findDistinct(str);
    printf("\n");
    cout<< ans;

    return 0;
}