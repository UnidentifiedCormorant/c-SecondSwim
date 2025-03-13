#include <iostream>
#include "Table.h"
#include "../Exceptions/IndexException.h"

Table::Table(){
    _records = new Parameter*[_maxRecords];
}

Table::~Table(){
    delete[] _records;
}

void Table::insert(Parameter* parameter){
    _lastRecordPosition++;

    if(_lastRecordPosition > _maxRecords - 1){

        _maxRecords++;

        Parameter** recordsAdvanced = new Parameter*[_maxRecords];
        for(int i = 0; i <= _maxRecords - 2; i++){
            recordsAdvanced[i] = _records[i];
        }

        delete[] _records;
        _records = recordsAdvanced;
    }

    _records[_lastRecordPosition] = parameter;
}

void Table::remove(unsigned recordPosition){
    if(_lastRecordPosition < recordPosition){
        throw IndexException();
    }

    delete _records[recordPosition];
    _maxRecords--;

    for(int i = recordPosition; i <= _maxRecords; i++){
        _records[i] = _records[i + 1];
    }

    _lastRecordPosition--;
}

void Table::update(unsigned recordPosition, Parameter* parameter){
    if(_lastRecordPosition < recordPosition){
        throw IndexException();
    }

    delete _records[recordPosition];
    _records[recordPosition] = parameter;
}

int Table::count(){
    return _lastRecordPosition + 1;
}

ostream& operator << (ostream& out, Table& table){
    for(int i = 0; i <= table._lastRecordPosition; i++){
        out << *table._records[i] << endl;
    }

    return out;
}

Parameter* Table::operator[](int position){
    return _records[position];
}
