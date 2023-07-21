#include <iostream>
#include <vector>


/*
    / typedef keyword
   |          / original data type
   |         |         / new identifier, usually ends with '_t' for type
 __|__   ____|____   _|__
/     \ /         \ /    \     */
typedef std::string text_t;
typedef int num_t;

int main() {
    // typedef =   reserved keyword used to create an additional name
    //            (alias) for another data type.
    //            New identifier for an existing type
    //
    //            Helps with readability and reduces typos.
    //            Use when there is a clear benefit.
    //            Replaced with 'using' (works better w/ templates)
    
    /*
       / New identifier
      |             / standard variable declaration
     _|__   _______|________
    /    \ /                \                                    */
    text_t firstName = "Chad";
    
    num_t age = 18;

    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}
