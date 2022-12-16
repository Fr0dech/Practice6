#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector; // Выделение памяти под вектор

    for (size_t i = 2; i <= 5; i++) {
            vector.push_back(i); // Добавить элемент в конец
        }

    vector.erase(vector.begin(), vector.begin() + 5); // "Стереть" элементы от и до

    vector.insert(vector.begin() + 5, 1); // Добавить элемент на позицию [i]

    vector.emplace_back(1); // Как push_back но старше и создает элемент без копирования и временных объектов

    vector.resize(5); // Меняет количество элементов

    vector.reserve(16); // Меняет вместимость массива

    vector.shrink_to_fit(); // Изменение вместимости под кол-во элементов

    std::cout <<"Capacity: " << vector.capacity(); // Возвращает вместимость массива

    vector.clear(); // Удаление всех элементов
    

    for (size_t i = 0; i < vector.size(); i++) 
    {
        std::cout << vector[i] << std::endl; // Вывод
        vector[i] = -1; // Присваивание
    }

}