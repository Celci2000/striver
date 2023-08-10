
#include <iostream>
using namespace std;

// Base(parent/super) class
class Rectangle
{ 
  // protected data members
  protected:
    int height;
};

// Derived(child/sub) class
class Square : public Rectangle
{
  public:
    void setHeight(int h){
     
        
        // Child class is able to access 
        // the inherited protected data members (height)
        // of base class
        height = h;
    }

    void displayHeight(){
        cout << "Height is: " << height << endl;
    }
};

int main() {

    Square square1;

    // member function of derived class can
    // access the protected data members of base class
  
    square1.setHeight(10);
    square1.displayHeight();
    
    return 0;
}