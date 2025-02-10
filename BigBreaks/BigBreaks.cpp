// #include "BigBreaks.h"

// BigBreaks::BigBreaks(){
//     _hasBreaks = false;
//     _maxBreak = 0;
//     _breaksCount = 0; 
// }

// BigBreaks::BigBreaks(
//     string name, string value, string rating, bool visible,
//     bool hasBreaks, int maxBreak, int breaksCount
// ): Parameter(name, value, rating, visible) {

//     setHasBreaks(hasBreaks);
//     setMaxBreak(maxBreak);
//     setBreaksCount(breaksCount);

// };

// BigBreaks::BigBreaks(const BigBreaks& bigBreaks){

// };

// void BigBreaks::setHasBreaks(bool hasBreaks){
//     _hasBreaks = hasBreaks;
// };
// void BigBreaks::setMaxBreak(int maxBreak){
//     _maxBreak = maxBreak;
// };
// void BigBreaks::setBreaksCount(int breaksCount){
//     _breaksCount = breaksCount;
// };

// bool BigBreaks::getHasBreaks(){
//     return _hasBreaks;
// };
// int BigBreaks::getMaxBreak(){
//     return _maxBreak;
// };
// int BigBreaks::getBreaksCount(){
//     return _breaksCount;
// };

// BigBreaks::~BigBreaks(){
    
// };

// ostream& operator << (ostream& out, BigBreaks& bigBreaks){
//     return out
//         << "Название параметра: " << bigBreaks.getName() << std::endl
//         << "Значение: " << bigBreaks.getValue() << std::endl
//         << "Оценка: " << bigBreaks.getRating() << std::endl
//         << "Отображение: " << (bigBreaks.getVisible() ? "true" : "false") << std::endl
//         << "Наличие перерывов: " << (bigBreaks.getHasBreaks() ? "есть" : "нет") << std::endl
//         << "Количество больших перерывов: " << bigBreaks.getBreaksCount() << endl
//         << "Максимальный перерыв: " << bigBreaks.getMaxBreak() << endl;
// };