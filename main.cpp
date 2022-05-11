#include <iostream>
#include "Container.h"

using namespace std;

main()
{
    setlocale(LC_ALL,"");

    IntArray* arr = new IntArray(3); //создание массива с ошибкой

    arr -> showAll();

    arr -> ressize(-3);
    arr -> ressize(6);

    arr -> showElement(8);
    arr -> showElement(-1);
    arr -> showElement(5);
    arr -> replacement(20, 12);
    arr -> replacement(9, 5);
    arr -> showAll();

    arr -> erese();

    arr -> reallocate(10);

    arr -> showAll();




    delete arr;


    return 0;
}
