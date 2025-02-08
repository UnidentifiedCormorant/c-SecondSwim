#pragma once
#include <iostream>
#include "../Parameter/Parameter.h"

const int MAX_RECORDS = 3;

class Table {
    public:
        Parameter* _records;
        int _lastRecordPosition = 0;
        int _maxRecords = MAX_RECORDS;

    public:
        Table();

        // ~Table();

        void insert(Parameter* parameter);
        void remove(int recordPosition);
        void update(int recordPosition, Parameter* parameter);
        
        int count();

        friend ostream& operator << (ostream& out, Table& table);

        //Перегрузка оператора индексирования
        Parameter& operator[](int position);
};