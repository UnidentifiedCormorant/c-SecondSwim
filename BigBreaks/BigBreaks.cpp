#include "BigBreaks.h"

BigBreaks::BigBreaks(
    const char* name, 
    const char* value, 
    const char* rating, 
    bool visible,

    bool hasBreaks, 
    int maxBreak, 
    int breaksCount
): Parameter(name, value, rating, visible) {

    setHasBreaks(hasBreaks);
    setMaxBreak(maxBreak);
    setBreaksCount(breaksCount);

};

BigBreaks::BigBreaks(const BigBreaks& bigBreak){
    Parameter parameter = (Parameter)bigBreak;
    setName(parameter.getName());
    setValue(parameter.getValue());
    setRating(parameter.getRating());
    setVisible(parameter.getVisible());

    _hasBreaks = bigBreak._hasBreaks;
    _maxBreak = bigBreak._maxBreak;
    _breaksCount = bigBreak._breaksCount;
};

void BigBreaks::setHasBreaks(bool hasBreaks){
    _hasBreaks = hasBreaks;
};
void BigBreaks::setMaxBreak(int maxBreak){
    _maxBreak = maxBreak;
};
void BigBreaks::setBreaksCount(int breaksCount){
    _breaksCount = breaksCount;
};

void BigBreaks::set(
    const char* name, 
    const char* value, 
    const char* rating, 
    bool visible,

    bool hasBreaks, 
    int maxBreak, 
    int breaksCount
){
    setName(name);
    setValue(value);
    setRating(rating);
    setVisible(visible);

    setHasBreaks(hasBreaks);
    setMaxBreak(maxBreak);
    setBreaksCount(breaksCount);
};

bool BigBreaks::getHasBreaks(){
    return _hasBreaks;
};
int BigBreaks::getMaxBreak(){
    return _maxBreak;
};
int BigBreaks::getBreaksCount(){
    return _breaksCount;
};

ostream& operator << (ostream& out, BigBreaks& bigBreaks){
    return out
        << "Название параметра: " << bigBreaks.getName() << std::endl
        << "Значение: " << bigBreaks.getValue() << std::endl
        << "Оценка: " << bigBreaks.getRating() << std::endl
        << "Отображение: " << (bigBreaks.getVisible() ? "true" : "false") << std::endl
        << "Наличие перерывов: " << (bigBreaks.getHasBreaks() ? "есть" : "нет") << std::endl
        << "Количество больших перерывов: " << bigBreaks.getBreaksCount() << endl
        << "Максимальный перерыв: " << bigBreaks.getMaxBreak() << endl;
};

const BigBreaks& BigBreaks::operator= (const BigBreaks& bigBreak){
    if (&bigBreak == this){
        return *this;
    }

    Parameter parameter = (Parameter)bigBreak;
    setName(parameter.getName());
    setValue(parameter.getValue());
    setRating(parameter.getRating());
    setVisible(parameter.getVisible());

    setHasBreaks(bigBreak._hasBreaks);
    setMaxBreak(bigBreak._maxBreak);
    setBreaksCount(bigBreak._maxBreak);

    return *this;
}