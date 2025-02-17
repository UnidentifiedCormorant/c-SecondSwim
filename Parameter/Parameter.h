#pragma once
#include <iostream>

using namespace std;

class Parameter 
{
    private:
        char* _name;
        char* _value;
        char* _rating;
        bool _visible;
    
    public:
        //Конструктор по умолчанию
        Parameter();

        //Параметрический конструктор
        Parameter(
            const char* name, 
            const char* value, 
            const char* rating, 
            bool visible
        );

        //Конструктор копирования
        Parameter(const Parameter& parameter);

        //Сеттеры
        void setName(const char* name);
        void setValue(const char* value);
        void setRating(const char* rating);
        void setVisible(bool visible);

        //Метод для изменения всех полей вместе
        void set(
            const char* name, 
            const char* value, 
            const char* rating, 
            bool visible
        );

        //Геттеры
        const char* getName();
        const char* getValue();
        const char* getRating();
        bool getVisible();

        //Деструктор
        ~Parameter();

        //Перегрузка операции вывода
        friend ostream& operator << (ostream& out, Parameter& parameter);

        //Перегрузка операции присваивания
        const Parameter& operator=(const Parameter& parameter);
};