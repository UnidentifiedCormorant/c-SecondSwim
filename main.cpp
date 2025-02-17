#include <iostream>

#include "Table/Table.h"
#include "Parameter/Parameter.h"
#include "BigBreaks/BigBreaks.h"
#include "Table/Table.h"

void demonstrateParameter(){
    cout << "Класс Parameter" << endl << endl;

    cout << "Работа конструктора с параметрами" << endl;
    Parameter* parameter = new Parameter("Большие перерывы", "1", "good", true);
    cout << *parameter << endl;

    //TODO: Здесь bool неправильно копируется
    cout << "Работа конструктора копирования" << endl;
    Parameter* parameterCopied = new Parameter(*parameter);
    cout << *parameterCopied << endl;

    cout << "Работа перегруженного оператора присваивания" << endl;
    Parameter* parameterEqual = new Parameter();
    *parameterEqual = *parameterCopied;
    cout << *parameterEqual << endl;

    cout << "Результат изменения значения полей по отдельности" << endl;
    parameterEqual->setName("Эмодзи");
    parameterEqual->setRating("impressive");
    parameterEqual->setValue("есть");
    parameterEqual->setVisible(true);

    cout << "Чтение значения полей по отдельности" << endl;
    cout << "Название параметра: " << parameterEqual->getName() << endl
         << "Значение: " << parameterEqual->getValue() << endl
         << "Оценка: " << parameterEqual->getRating() << endl
         << "Отображение: " << (parameterEqual->getVisible() ? "true" : "false") << endl
         << endl;
    
    cout << "Изменение полей вместе" << endl;
    parameterEqual->set(
        "Частота постинга",
        "часто",
        "good",
        true
    );
    cout << *parameterEqual << endl;
}
        
void demonstrateBigBreaks(){
    cout << "Класс BigBreaks" << endl << endl;

    cout << "Работа конструктора с параметрами" << endl;
    BigBreaks* bigBreak = new BigBreaks(
        "Тру большие",
        "Их многа",
        "good",
        true,

        true,
        69,
        3
    );
    cout << *bigBreak << endl;

    cout << "Работа конструктора копирования" << endl;
    BigBreaks* bigBreakCopierd = new BigBreaks(*bigBreak);
    cout << *bigBreakCopierd << endl;

    cout << "Работа перегруженного оператора присваивания" << endl;
    BigBreaks* bigBreaksEqual = new BigBreaks();
    *bigBreaksEqual = *bigBreakCopierd;
    cout << *bigBreaksEqual << endl;
}

int main()
{
    demonstrateParameter();
    demonstrateBigBreaks();



    // BigBreaks* bigBreakCopied = new BigBreaks(*bigBreak);

    // // *bigBreakCopied = *bigBreak;

    // cout << *bigBreakCopied;
    // Parameter* parameter = new Parameter("Большие перерывы", "значение", "good", true);

    // Parameter* parameterCopied = new Parameter();

    // *parameterCopied = *parameter;

    // cout << *parameterCopied;



    // Table* table = new Table();

    // table->insert(bigBreak);
    // table->insert(new Parameter("Большие перерывы", "1", "good", true));
    // table->insert(new Parameter("Большие перерывы", "2", "good", true));
    // table->insert(new Parameter("Большие перерывы", "3", "good", true));

    // table->update(3, new Parameter("Параметр", "харашо", "good", true));
    
    // table->remove(3);

    // cout << *table;

    // cout << table << endl;
    // demonstrateTable();

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
