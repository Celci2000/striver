#include<iostream>
#include<math.h>
using namespace std;
int distance(int a,int b ,int c ,int d){
    int del_x=abs(c-a);
    int del_y=abs(d-b);
    int dist= sqrt(pow(del_x,2)+pow(del_y,2));
    return dist;
}

int main(){
    int x1=1, y1=1,x2=2,y2=5, x3=3, y3=6;
    int ab=distance(x1,y1,x2,y2);
    int bc=distance(x2,y2,x3,y3);
    int ac=distance(x1,y1,x3,y3);
    cout<<ab<<" "<<bc<<" "<< ac;
    return 0;
}