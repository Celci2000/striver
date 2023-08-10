#include<iostream>
using namespace std;
int main(){
    int i=1;
    // int n=i++;    //i=2 , n=1
    printf("%d %d ", i--, i);
    return 0;
}