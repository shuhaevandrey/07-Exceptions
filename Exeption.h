#pragma once

class Exeption      //абстрактный класс обработки ошибок
{
    protected:
        int num;    //переменная кода ошибки
        char* str;  //переменная вывода информации об ошибке
    public:
        virtual void display () = 0;
};
