#include <iostream>

int main() {
    /*
    const = Specifies a that a variable's value is constant.
            Tells the compiler to prevent anything from modifying it.
            (fancy for read-only)

       / Prefix to make var read-only
      |      / Declaration of data type
      |     |     / Declaration of name 
      |     |    |       / Assignement
     _|_   _|__  |   ___|___
    /   \ /    \ /\ /       \   */
    const double PI = 3.14159;
    // PI = 69 would raise an error now.
    
    // Other examples where constant would make sense
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}
