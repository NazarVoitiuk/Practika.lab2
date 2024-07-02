#include "pch.h" // Додаємо цю директиву на початку файлу
#include <iostream>
#include "WorkerAnt.h"
#include "WarriorAnt.h"

int main() {
    WorkerAnt worker(10, 10, 1);  // Мураха-робочий з початковими координатами (10, 10) та швидкістю 1
    WarriorAnt warrior(5, 5, 1, 10); // Мураха-воїн з початковими координатами (5, 5), швидкістю 1 та радіусом 10

    for (int i = 0; i < 20; ++i) {
        worker.move();
        warrior.move();
        std::cout << "WorkerAnt: (" << worker.getX() << ", " << worker.getY() << ")\n";
        std::cout << "WarriorAnt: (" << warrior.getX() << ", " << warrior.getY() << ")\n";
    }

    return 0;
}
