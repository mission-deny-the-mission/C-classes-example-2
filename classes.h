// This line ensures that the contents of the header file is only processed once by the compiler
// sometimes a header file can include other header files, this can sometimes lead to one or more header files being
// included more than once. The #pragma once statement mitigates this
// see this video for more information: https://www.youtube.com/watch?v=9RJTQmK0YPI
#pragma once


// this is the header file for my class
// this contains the class decleration including the attributes
// and declarations for the methods
// the methods are not implemented in this file
// instead they are implemented in classes.cpp

// a declaration of a method or function includes it's return type and arguments but does not include
// it's body

// a decleration can be made by copying the functions or methods header and replacing the body with a semicolon

// Most libraries in C++ (including the standard library) are incased in a namespace like this
// Items in a namespace are accessed using the :: operator.

// Interestingly a class implicitly creates a namespace of it's own,
// which is why the demoClass:: trick works in classes.cpp

// Namespaces can also be placed inside other namespaces as is evidenced whenever a namespace contains a class

namespace classes {
    // demoClass declaration
    class demoClass {
    private:
        std::string text;
        int number;
    public:
        demoClass(std::string text, int number);

        void setText(std::string text);

        void setNumber(int number);

        std::string getText();

        int getNumber();
    };

    // decleration for the function that prints out our class
    std::ostream &operator<<(std::ostream &os, demoClass obj);
}

