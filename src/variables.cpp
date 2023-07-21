#include <iostream>

int main() {
    // Variables need to consist of a data type and what its name would be
    //  - names range from 1 to 255 chars
    //  - all names must begin with a letter or '_'
    //  - names are case sensitive
    //  - no spaces or special characters ('_' being one exception)
    //  - no reserved words (c++ keywords) as name

    /*

      / data type
     |    / variable name
     |   |     / Value of data type
    / \ / \   /\
    int age = 18;
    |     | |   |
     \___/   \_/
       |       \ Assignement
        \ Declaration
    
    */

    // integer (whole number)
    int age = 18;
    int year = 2023;

    // double (number including decimal)
    double price = 19.99;
    double temperature = 32.3;

    // char (sincle character)
    char grade = 'A';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool powered = false;

    // string (objects that represents a sequence of text)
    std::string name = "Chad";
    std::string food = "Pizza";


    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";

    return 0;
}
