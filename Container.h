#pragma once

class IntArray
{
    private:
        int m_lenght{};
        int* m_data{};
    public:
        IntArray() = default;   // 1.1. Конструктор массива по умолчанию
        IntArray(int lenght);   // 1.2. Конструктор массива заданной длинны
        ~IntArray();            // 1.3. Деструктор по умолчанию
        void erese();           // 1.4. Функция стирания данных в массиве
        void reallocate(int newLenght); // 1.5. Функция изменения размера массива с предварительным удалением данных
        void ressize(int newLenght); // 1.6. Функция изменения размера массива без удаления данных
        void replacement(int value, int index); // 1.7. Функция изменения значения элемента.
        void showElement(int index); // 1.8. Функция вывода значения элемента.
        void showAll(); // 1.9. Функция вывода всех значениq элементов массива.
        void InputErese();

};
