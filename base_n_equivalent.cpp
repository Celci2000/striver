#include<iostream>
#include<bits/stdc++.h>

using namespace std;
string toBaseN(int n, int num ){
int i=0,arr[100];
string str="";
    while(num!=0){
        arr[i++]=num%n;
        num=num/n;
    }
    
    for(int j=i-1;j>=0;j--){

        if(arr[j]>=0&& arr[j]<=9){
           str=str+ to_string(arr[j]);

        }
        else if(arr[j]>=10&& arr[j]<=35){
            str=str+(char)(arr[j]-10+65);
        }
    }
    return str;

}
int main(){
    cout<<"enter the base n:";
    int n,num;
    cin>>n;
    cout<<"enter decimal:";
    cin>>num;
    string equi= toBaseN(n,num);
    cout<<equi;

    return 0;
}