#pragma once
#include <iostream>
#include "../Parameter/Parameter.h"

const int MAX_RECORDS = 3; //По факту 5

class Table {
    public:
        Parameter _records[MAX_RECORDS];
        int _lastRecordPosition = 0;

    public:
        Table() {};

        ~Table();

        void insert(Parameter* parameter);
        void remove(int recordPosition);
        void update(int recordPosition, Parameter* parameter);
        
        int count();

        friend ostream& operator << (ostream& out, Table& table);

        //Перегрузка оператора индексирования
        Parameter& operator[](int position);
};