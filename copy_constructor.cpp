#include <iostream>
using namespace std;
class Demo 
{ 
   private: 
    int a, b; 
    public: 
    Demo()
    { }
    Demo(int a1, int b1) { 
     a = a1; 
     b = b1; 
    } 
    // Copy constructor example here
    Demo(const Demo &d2) 
    {
        a = d2.a; 
        b = d2.b;
   } 

    int getA()            
    {  
        return a; 

    } 
    int getB()            
    {  
        return b; 

    } 
}; 

int main() 
{ 
    Demo d1(5000, 6000); 
    
    // We have called a copy constructor 
    Demo d2 = d1; 

    // We have called a copy constructor     
    Demo d3(d1);
    Demo d4;

    // Assignment operation happens there is no call to copy constructor
    d4 = d1;

    // displaying values for both constructors 
    cout << "d1.a = " << d1.getA() << ", d1.b = " << d1.getB();
    cout << "\nd2.a = " << d2.getA() << ", d2.b = " << d2.getB(); 

    cout << "\nd3.a = " << d3.getA() << ", d3.b = " << d3.getB(); 
    cout << "\nd4.a = " << d4.getA() << ", d4.b = " << d4.getB(); 
    return 0; 
}