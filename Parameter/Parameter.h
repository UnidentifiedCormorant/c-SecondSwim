#pragma once
#include <iostream>

using namespace std;

class Parameter 
{
    private:
        string _name, _value, _rating;
        bool _visible;
    
    public:
        //Конструктор по умолчанию
        Parameter(): _name("Пустой параметр"), _value("none"), _rating("empty"), _visible(false) {};

        //Параметрический конструктор
        Parameter(
            string name, 
            string value, 
            string rating, 
            bool visible = true
        );

        //Конструктор копирования
        Parameter(const Parameter& parameter);

        //Сеттеры
        void setName(string name);
        void setValue(string value);
        void setRating(string rating);
        void setVisible(bool visible);

        //Геттеры
        string getName();
        virtual string getValue();
        string getRating();
        bool getVisible();

        //Деструктор
        ~Parameter();

        //Перегрузка операции вывода
        friend ostream& operator << (ostream& out, Parameter& parameter);

        //Перегрузка операции присваивания
        const Parameter& operator=(const Parameter& parameter);
};