#include "Parameter.h"
#include "../Helpers/StringHelper.h"

//Конструктор по умолчанию
Parameter::Parameter(){
    _name = new char;
    _name[0] = '\0';

    _value = new char;
    _value[0] = '\0';

    _rating = new char;
    _rating[0] = '\0';

    _visible = false;
}

//Параметрический конструктор
Parameter::Parameter(
    const char* name, 
    const char* value, 
    const char* rating, 
    bool visible
){
    setName(name);
    setValue(value);
    setRating(rating);
    setVisible(visible);
}

//Конструктор копирования
Parameter::Parameter(const Parameter& parameter){
    _name = copyString(_name, parameter._name);
    _value = copyString(_value, parameter._value);
    _rating = copyString(_rating, parameter._rating);
    _visible = parameter._visible;
}

//Сеттеры
void Parameter::setName(const char* name){
    _name = copyString(_name, name);
}

void Parameter::setValue(const char* value){
    _value = copyString(_value, value);
}

void Parameter::setRating(const char* rating){
    _rating = copyString(_rating, rating);
}

void Parameter::setVisible(bool visible){
    _visible = visible;
}

//Геттеры
const char* Parameter::getName(){
    return _name;
}

const char* Parameter::getValue(){
    return _value;
}

const char* Parameter::getRating(){
    return _rating;
}

bool Parameter::getVisible(){
    return _visible;
}

void Parameter::set(
    const char* name, 
    const char* value, 
    const char* rating, 
    bool visible
){
    setName(name);
    setValue(value);
    setRating(rating);
    setVisible(visible);
}

//Деструктор
Parameter::~Parameter(){
    delete[] _name;
    delete[] _value;
    delete[] _rating;
}

//Реализация перегрузки операции вывода
ostream& operator << (ostream& out, Parameter& parameter){
    return out 
        << "Название параметра: " << parameter.getName() << std::endl
        << "Значение: " << parameter.getValue() << std::endl
        << "Оценка: " << parameter.getRating() << std::endl
        << "Отображение: " << (parameter.getVisible() ? "Отображается" : "Не отображается") << std::endl;
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

void Parameter::print(){
    cout << *this << endl;
}