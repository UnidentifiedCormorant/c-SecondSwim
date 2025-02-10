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
    _name = new char;
    _name[0] = '\0';

    _value = new char;
    _value[0] = '\0';

    _rating = new char;
    _rating[0] = '\0';

    setName(name);
    setValue(value);
    setRating(rating);
    setVisible(visible);
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
        << "Отображение: " << (parameter.getVisible() ? "true" : "false") << std::endl;
}

// //Реализация перегрузки операции присваивания
// const Parameter& Parameter::operator= (const Parameter& parameter){
            
//     if (&parameter == this){
//         return *this;
//     }

//     setName(parameter._name);
//     setValue(parameter._value);
//     setRating(parameter._rating);
//     setVisible(parameter._visible);

//     return *this;
// }