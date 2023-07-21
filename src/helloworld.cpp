#include <iostream>
/*        \______/
              |
               \ Headerfile containing functions for
                 basic in-/output operations.
*/

// Beginning of main program.
int main() {
    /* <- Beginning of multi-line commment

      / "standard"
     |     / "character output"
     |    |    / "Output", something to display will follow
     |    |   |          / Target output
     |    |   |         |                / End-line, same as '\n' but flushes output buffer
     |    |_  |    _____|_____       ___|___
    / \  /  \ /\ /             \    /       \     End of multi-line comment -> */
    std::cout << "I like pizza!" << std::endl;
    
    std::cout << "It's really good!" << std::endl;
    
    // If 0 is returned, program finished with no problems (1 would be an error)
    return 0;
}
