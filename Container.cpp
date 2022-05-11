#include <iostream>
#include "Container.h"
#include "MyExptn.h"

using namespace std;

IntArray::IntArray(int lenght)  // 1.2. ����������� ������� �������� ������
{
    try
    {
        if (lenght <= 0)
        {
            throw bad_lenght();
        }

        m_lenght = lenght;
        m_data = new int [lenght];
        for (int index = 0; index < m_lenght; ++index)
        {
            m_data[index] = index + 1;
        }
    }
    catch (exception &exp)
    {
        cout << "�������� �������� �������: "<< exp.what() << lenght <<endl;
    }
}

IntArray::~IntArray()            // 1.3 ���������� �� ���������
{
    delete[] m_data;
    cout << "������ ���� '������' ������" << endl;
}

void IntArray::erese()           // 1.4. ������� �������� ������ � �������
{
    m_data = nullptr;
    m_lenght = 0;
}


void IntArray::reallocate(int newLenght) // 1.5. ������� ��������� ������� ������� � ��������������� ��������� ������
{
    erese();
    try
    {
        if(newLenght <= 0)
        {
            throw bad_lenght();
        }

        m_data = new int[newLenght];
        m_lenght = newLenght;

    }
    catch (exception &exp)
    {
        cout << "��������� ������� ������� � ��������������� ��������� ������: "<< exp.what() << newLenght <<endl;
    }
}

void IntArray::ressize(int newLenght) // 1.6. ������� ��������� ������� ������� ��� �������� ������
{


    try
    {
        if(newLenght <= 0)
        {
            throw bad_lenght();
        }
        int* data = new int [newLenght];
        if(m_lenght < newLenght)
        {
            int elementsToCopy = m_lenght;
            for (int index = 0; index < elementsToCopy; ++index)
            {
                data[index] = m_data[index];
            }

        }
        if(m_lenght > newLenght)
        {
            int elementsToCopy = newLenght;
            for (int index = 0; index < elementsToCopy; ++index)
            {
                data[index] = m_data[index];
            }

        }
        delete[] m_data;

        m_data = data;
        m_lenght = newLenght;


    }

    catch(exception &exp)
    {
        cout << "��������� ������� ������� ��� �������� ������: "<< exp.what() << newLenght <<endl;
    }

}

void IntArray::replacement(int value, int index) // 1.7. ������� ��������� �������� ��������.
{
    try
    {
        if(index < 0 || index >= m_lenght)
        {
            throw bad_range();
        }


        m_data[index] = value;

    }

    catch (exception &exp)
    {
        cout << "��������� �������� �������� ������� : "<< index << exp.what() <<endl;
    }
}

void IntArray::showElement(int index) // 1.8. ������� ������ �������� ��������.
{
    try
    {
        if(index < 0 || index >= m_lenght)
        {
            throw bad_range();
        }


        cout << "�������� �������� # " << index << " = " << m_data[index] << endl;

    }

    catch (exception &exp)
    {
        cout << "����� �������� ������� : "<< index << exp.what() <<endl;
    }
}

void IntArray::showAll() // 1.9. ������� ������ ���� �������q ��������� �������.
{
    for (int index = 0; index < m_lenght; ++index)
    {
        cout << "�������� �������� # " << index << " = " << m_data[index] << endl;
    }
}

