#ifndef WARRIORANT_H
#define WARRIORANT_H

#include "Ant.h" // Включаємо базовий клас
#include <cmath>

class WarriorAnt : public Ant {
private:
    double R;    // Радіус кола
    double angle; // Поточний кут

public:
    WarriorAnt(double x, double y, double V, double R) : Ant(x, y, V), R(R), angle(0) {}

    void move() override {
        angle += V / R;
        x = R * cos(angle);
        y = R * sin(angle);
    }
};

#endif // WARRIORANT_H
