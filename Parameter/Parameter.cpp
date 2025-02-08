#include "Parameter.h"

//Конструктор по умолчанию
Parameter::Parameter(string name, string value, string rating, bool visible){
    setName(name);
    setValue(value);
    setRating(rating);
    setVisible(visible);
}

//Сеттеры
void Parameter::setName(string name){
    _name = name;
}

void Parameter::setValue(string value){
    _value = value;
}

void Parameter::setRating(string rating){
    _rating = rating;
}

void Parameter::setVisible(bool visible){
    _visible = visible;
}


//Геттеры
string Parameter::getName(){
    return _name;
}

string Parameter::getValue(){
    return _value;
}

string Parameter::getRating(){
    return _rating;
}

bool Parameter::getVisible(){
    return _visible;
}

//Деструктор
Parameter::~Parameter(){
    // delete &_name;
}

//Реализация перегрузки операции вывода
ostream& operator << (ostream& out, Parameter& parameter){
    return out 
        << "Название параметра: " << parameter.getName() << std::endl
        << "Значение: " << parameter.getValue() << std::endl
        << "Оценка: " << parameter.getRating() << std::endl
        << "Отображение: " << (parameter.getVisible() ? "true" : "false") << std::endl;
}

//Реализация перегрузки операции присваивания
const Parameter& Parameter::operator= (const Parameter& parameter){
            
    if (&parameter == this){
        return *this;
    }

    setName(parameter._name);
    setValue(parameter._value);
    setRating(parameter._rating);
    setVisible(parameter._visible);

    return *this;
}