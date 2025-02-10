#pragma once
#include <iostream>
#include "../Parameter/Parameter.h"

const int MAX_RECORDS = 3;

class Table {
    public:
        Parameter* _records;
        int _lastRecordPosition = -1; //Соответствует индексу элемента в массиве
        int _maxRecords = MAX_RECORDS;

    public:
        Table();

        // ~Table();

        void insert(Parameter* parameter);
        void remove(unsigned recordPosition);
        void update(unsigned recordPosition, Parameter* parameter);
        
        int count();

        friend ostream& operator << (ostream& out, Table& table);

        //Перегрузка оператора индексирования
        Parameter& operator[](int position);
};