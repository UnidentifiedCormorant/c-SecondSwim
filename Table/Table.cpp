#include <iostream>
#include "Table.h"
#include "../Exceptions/InsertException.h"
#include "../Exceptions/GetRecordException.h"

Table::~Table(){
    delete [] &_records;
}

void Table::insert(Parameter* parameter){
    if(_lastRecordPosition > MAX_RECORDS - 1){
        throw InsertException();
    }

    this->_records[this->_lastRecordPosition] = *parameter;
    this->_lastRecordPosition++;
}

void Table::remove(int recordPosition){
    for (int i = recordPosition; i < MAX_RECORDS - 1; i++) {
        _records[i] = _records[i + 1];
    }

    this->_lastRecordPosition--;
}

void Table::update(int recordPosition, Parameter* parameter){
    this->_records[recordPosition] = *parameter;
}

int Table::count(){
    return this->_lastRecordPosition;
}

ostream& operator << (ostream& out, Table& table){
    for(int i = 0; i < table._lastRecordPosition; i++){
        out << table._records[i];
    }

    return out;
}

Parameter& Table::operator[](int position){
    if(position > _lastRecordPosition){
        throw GetRecordException();
    }

    return _records[position];
}

