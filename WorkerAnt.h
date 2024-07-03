// WorkerAnt.h
#pragma once
#include <cstdlib>
#include <ctime>

class WorkerAnt {
public:
    WorkerAnt(int x, int y, int speed) : x(x), y(y), speed(speed) {
        std::srand(std::time(0)); // инициализация генератора случайных чисел
    }
    void move() {
        int direction = std::rand() % 4;
        switch (direction) {
        case 0: x += speed; break; // вправо
        case 1: x -= speed; break; // влево
        case 2: y += speed; break; // вверх
        case 3: y -= speed; break; // вниз
        }
    }
    int getX() const { return x; }
    int getY() const { return y; }
private:
    int x, y, speed;
};
