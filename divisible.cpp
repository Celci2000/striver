#include<iostream>
using namespace std;
int difference(int n, int m){
    int sum_not_div = 0;
    int sum_div=0;
    for(int i=1;i<=m;i++){
        if(i%n!=0){
            sum_not_div+=i;
        }
        else{
            sum_div+=i;
        }
    }
    return abs(sum_not_div - sum_div);
}
int main(){


    int n, m;
     cout << "enter two integers";
     cin>>n>>m;
     int diff =difference(n,m);
     cout<<diff;
     return 0;
}