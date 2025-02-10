// #pragma once
// #include <iostream>
// #include "../Parameter/Parameter.h"

// using namespace std;

// class BigBreaks: public Parameter {
//     private:
//         bool _hasBreaks;
//         int _maxBreak, _breaksCount;

//     public:
//         BigBreaks();

//         BigBreaks(
//             string name, string value, string rating, bool visible,
//             bool hasBreaks, int maxBreak, int breaksCount
//         );

//         BigBreaks(const BigBreaks& bigBreaks);

//         void setHasBreaks(bool hasBreaks);
//         void setMaxBreak(int maxBreak);
//         void setBreaksCount(int breaksCount);

//         bool getHasBreaks();
//         int getMaxBreak();
//         int getBreaksCount();

//         ~BigBreaks();

//         friend ostream& operator << (ostream& out, BigBreaks& bigBreaks);

//         const BigBreaks& operator=(const BigBreaks& bigBreaks) {
            
//             if (&bigBreaks == this){
//                 return *this;
//             }

//             //TODO: Дописать реализацию

//             return *this;
//         }
// };