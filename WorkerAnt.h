#ifndef WORKERANT_H
#define WORKERANT_H

#include "Ant.h" // Включаємо базовий клас
#include <cmath>

class WorkerAnt : public Ant {
private:
    double homeX, homeY; // Початкова позиція мурахи
    bool returning;      // Чи повертається мураха додому

public:
    WorkerAnt(double x, double y, double V) : Ant(x, y, V), homeX(x), homeY(y), returning(false) {}

    void move() override {
        if (!returning) {
            if (x > 0) x -= V;
            if (y > 0) y -= V;
            if (x <= 0 && y <= 0) returning = true; // Досяг кута [0,0]
        }
        else {
            if (x < homeX) x += V;
            if (y < homeY) y += V;
        }
    }
};

#endif // WORKERANT_H
