#pragma once
#include <iostream>
#include "../Parameter/Parameter.h"

class BigBreaks: public Parameter {
    private:
        bool _hasBreaks;
        int _maxBreak, _breaksCount;

    public:
        BigBreaks(): _hasBreaks(false), _maxBreak(0), _breaksCount(0) {};

        BigBreaks(
            const char* name, 
            const char* value, 
            const char* rating, 
            bool visible,

            bool hasBreaks, 
            int maxBreak, 
            int breaksCount
        );

        BigBreaks(const BigBreaks& bigBreaks);

        void setHasBreaks(bool hasBreaks);
        void setMaxBreak(int maxBreak);
        void setBreaksCount(int breaksCount);

        void set(
            const char* name, 
            const char* value, 
            const char* rating, 
            bool visible,

            bool hasBreaks, 
            int maxBreak, 
            int breaksCount
        );

        bool getHasBreaks();
        int getMaxBreak();
        int getBreaksCount();

        ~BigBreaks();

        friend ostream& operator << (ostream& out, BigBreaks& bigBreaks);

        const BigBreaks& operator=(const BigBreaks& bigBreaks);
};