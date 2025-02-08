#include <iostream>

class GetRecordException
{
public: 
    GetRecordException(): message{"Выход за границы таблицы"}{}
    std::string getMessage() const {return message;}
private:
    std::string message;
};