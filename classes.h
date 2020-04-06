//
// Created by Harry Hall on 06/04/2020.
//

#pragma once
namespace classes {
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

    std::ostream &operator<<(std::ostream &os, demoClass obj);
}

