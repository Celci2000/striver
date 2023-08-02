#include<iostream>
using namespace std;
int cal_sum(int a, int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        if(i%3==0 && i%5==0){
            sum+=i;
        }

    }
    return sum;
}
int main(){

    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int sum = cal_sum(a,b);
    cout<<sum;
    return 0;

}