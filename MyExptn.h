#pragma once
#include <exception>

using namespace std;

class bad_lenght: public exception
{
    public:
        virtual const char*what() const noexcept override {return "Длинна массива не может быль равна ";};

};

class bad_range: public exception
{
    public:
        virtual const char*what() const noexcept override {return " елемент находится за пределами массива";};

};
