#include <iostream>
#include "classes.h"

namespace classes {

    // the demoClass:: at the beggining of the names of these functions
    // tells the compiler that these are methods of the class demoClass
    // rather than regular functions

    // these match up to the declarations in classes.h

    demoClass::demoClass(std::string text, int number) {
        this->setText(text);
        this->setNumber(number);
    }

    // These functions are called getters and setters
    // They are used to see and update private attributes of a class


    // set functions can be used to check values assigned to a attribute of a class for validity
    // this one makes sure that any text set cannot contain numbers
    void demoClass::setText(std::string text) {
        bool containsDigit = false;
        for (int i = 0; i < text.length(); i++) {
            if (isdigit(text[i])) { containsDigit = true; }
        }
        if (containsDigit) {
            throw 0;
        } else {
            this->text = text;
        }
    }

    // this makes any number set to the class positive
    void demoClass::setNumber(int number) {
        if (number >= 0) {
            this->number = number;
        } else {
            this->number = -number;
        }
    }

    // these just return the values of their respective attributes
    std::string demoClass::getText() {
        return text;
    }

    int demoClass::getNumber() {
        return number;
    }

    // This method is so I can output my class using std::cout
    // for more info see this stack overflow page:
    // https://stackoverflow.com/questions/2981836/how-can-i-use-cout-myclass

    // it does this by changing how the << operator works for this class using method overloading/overiding
    // method overloading is where multiple methods or operators have the same name and are selected by the compiler
    // based on the arguments they are being called with
    std::ostream &operator<<(std::ostream &os, demoClass obj) {
        os << "Text: " << obj.getText() << "\nNumber:" << obj.getNumber();
        return os;
    }

}