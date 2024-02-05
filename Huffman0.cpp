/* Описание алгоритма:
 * Построить дерево
 *     Очередь с приоритетами
 *         Посчитать частоты символов
 * 1. Подсчет частоты символов
 * 2. Создаем узлы бинарного дерева
 *      Добавляем каждый символ в очередь(по приоритету частоты)
 *      Достаем два эл-та из очереди, связываем и создаем новый узел(два э-та - потомки
 *        приоритет нового узла - сумма их приоритетов)
 *      Добавляем получившийся узел обратно в очередь
 * 3. После прохода по очереди получили дерево.
 * 4. Проходим по дереву и получаем коды для символов
*/

#include "Huffman0.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){

//Открываем файлы для чтения и записи
    ifstream file("file.txt");
    string text((istreambuf_iterator<char>(file)),
                istreambuf_iterator<char>());
    file.close();

    //...code text...

    ofstream out("fileCoded.txt");
    out << text;
    out.close();


    return 0;
}

