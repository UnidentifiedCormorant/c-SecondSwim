#include <iostream>
#include "Table.h"
#include "../Exceptions/IndexException.h"

Table::Table(){
    _records = new Parameter[MAX_RECORDS];
}

// Table::~Table(){
//     delete[] _records;
// }

void Table::insert(Parameter* parameter){
    _lastRecordPosition++;

    if(_lastRecordPosition > MAX_RECORDS - 1){

        _maxRecords++;

        Parameter* recordsAdvanced = new Parameter[_maxRecords];
        for(int i = 0; i <= _maxRecords - 2; i++){
            *recordsAdvanced++ = *_records++;
        }

        //Присваиваем сразу со сдвигом указателя массива в начало 
        _records = recordsAdvanced - (_maxRecords - 1);
    }

    _records[_lastRecordPosition] = *parameter;
}

void Table::remove(unsigned recordPosition){
    if(_lastRecordPosition < recordPosition){
        throw IndexException();
    }
    
    for(int i = recordPosition; i < 0; i++){
        _records[i] = _records[i + 1];
    }

    _lastRecordPosition--;
}

void Table::update(unsigned recordPosition, Parameter* parameter){
    if(_lastRecordPosition < recordPosition){
        throw IndexException();
    }

    _records[recordPosition] = *parameter;
}

ostream& operator << (ostream& out, Table& table){
    for(int i = 0; i <= table._lastRecordPosition; i++){
        out << table._records[i] << endl;
    }

    return out;
}

Parameter& Table::operator[](int position){
    return _records[position];
}

