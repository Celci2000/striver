#include<iostream>
using namespace std;
int count (int n){
int c=0;
while(n!=0&& n%2==0){
    c++;
    n=n/2;

}
return c;
}
int maxexpo(int a ,int b ){
    int max=0,num=0;
    for(int i=a;i<=b;i++){
      int c= count(i);
      if(c>max){
        max=c;
        num=i;
      }

}
return num;
}
int main(){
    int a ,b;
    cout<< "enter two numbers";
    cin>>a>>b;
    cout<<maxexpo(a,b);
    

    return 0;
}