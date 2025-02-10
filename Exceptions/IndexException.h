#include <iostream>

class IndexException
{
public: 
    IndexException(): message{"В таблице нет элемента с указанным индексом"}{}
    std::string getMessage() const {return message;}
private:
    std::string message;
};