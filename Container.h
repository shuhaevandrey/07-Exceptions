#pragma once

class IntArray
{
    private:
        int m_lenght{};
        int* m_data{};
    public:
        IntArray() = default;   // 1.1. ����������� ������� �� ���������
        IntArray(int lenght);   // 1.2. ����������� ������� �������� ������
        ~IntArray();            // 1.3. ���������� �� ���������
        void erese();           // 1.4. ������� �������� ������ � �������
        void reallocate(int newLenght); // 1.5. ������� ��������� ������� ������� � ��������������� ��������� ������
        void ressize(int newLenght); // 1.6. ������� ��������� ������� ������� ��� �������� ������
        void replacement(int value, int index); // 1.7. ������� ��������� �������� ��������.
        void showElement(int index); // 1.8. ������� ������ �������� ��������.
        void showAll(); // 1.9. ������� ������ ���� �������q ��������� �������.
        void InputErese();

};
