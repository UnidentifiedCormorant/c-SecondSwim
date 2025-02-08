#include <iostream>
#include "Table/Table.h"
#include "Parameter/Parameter.h"
  
void demonstrateTable(){
    Table table;
    
    table.insert(new Parameter("Большие перерывы", "0", "good", true));
    table.insert(new Parameter("Большие перерывы", "1", "bad", true));
    table.insert(new Parameter("Большие перерывы", "2", "bad", true));
    table.insert(new Parameter("Большие перерывы", "3", "bad", true));

    cout << table[1];
}

int main()
{
    demonstrateTable();

    // delete &table;

    // table.remove(2);
    // cout << "После первого удоления" << endl;
    // for(int i = 0; i < 4; i++){
    //     cout << table._records[i] << endl;
    // }

    // table.remove(1);
    // cout << "После второго удоления" << endl;
    // for(int i = 0; i < 4; i++){
    //     cout << table._records[i] << endl;
    // }

    // table.update(
    //     1,
    //     new Parameter("Огромные перерывы", "3", "bad", true)
    // );

}
