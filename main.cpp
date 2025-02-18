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

    cout << "Результат изменения полей по отдлеьности" << endl;
    bigBreaksEqual->setName("Перерывы");
    bigBreaksEqual->setRating("impressive");
    bigBreaksEqual->setValue("есть");
    bigBreaksEqual->setVisible(true);
    bigBreaksEqual->setHasBreaks(true);
    bigBreaksEqual->setMaxBreak(96);
    bigBreaksEqual->setBreaksCount(2);

    cout << "Чтение значения полей по отдельности" << endl;
    cout << "Название параметра: " << bigBreaksEqual->getName() << std::endl
         << "Значение: " << bigBreaksEqual->getValue() << std::endl
         << "Оценка: " << bigBreaksEqual->getRating() << std::endl
         << "Отображение: " << (bigBreaksEqual->getVisible() ? "true" : "false") << std::endl
         << "Наличие перерывов: " << (bigBreaksEqual->getHasBreaks() ? "есть" : "нет") << std::endl
         << "Количество больших перерывов: " << bigBreaksEqual->getBreaksCount() << endl
         << "Максимальный перерыв: " << bigBreaksEqual->getMaxBreak() << endl << endl;

    cout << "Изменение полей вместе" << endl;
    bigBreaksEqual->set(
        "Огромные перерывы",
        "Много-премного",
        "belissimo",
        true,

        true,
        2,
        100
    );
    cout << *bigBreaksEqual << endl;
}

void demonstrateTable(){
    cout << "Класс Table" << endl << endl;

    Table* table = new Table();
    table->insert(new Parameter("Параметр", "0", "good", true));
    table->insert(
        new BigBreaks(
            "Тру большие",
            "1",
            "good",
            true,
    
            true,
            69,
            3
        )
    );
    table->insert(new Parameter("Другой параметр", "2", "good", true));
    
    cout << "Содержимое таблицы: " << endl;
    cout << "Количество записей: " << table->count() << endl;
    cout << *table;

    cout << "Изменение записей" << endl;
    table->update(0, new Parameter("Другой параметр", "0", "updated", false));
    cout << *table;

    cout << "Удаление записей" << endl;
    table->remove(1);
    cout << *table;

    cout << "Вывод одной записи, используя перегруженную операцию индексирования" << endl;
    cout << (*table)[1];
}

int main()
{
    demonstrateParameter();
    demonstrateBigBreaks();
    demonstrateTable();
}
