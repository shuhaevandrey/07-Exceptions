#pragma once

class Exeption      //����������� ����� ��������� ������
{
    protected:
        int num;    //���������� ���� ������
        char* str;  //���������� ������ ���������� �� ������
    public:
        virtual void display () = 0;
};
