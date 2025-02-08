#include <iostream>

class InsertException
{
public: 
    InsertException(): message{"Превышен допустимый размер записей в таблице"}{}
    std::string getMessage() const {return message;}
private:
    std::string message;
};