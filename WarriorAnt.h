#ifndef WARRIORANT_H
#define WARRIORANT_H

#include "Ant.h" // �������� ������� ����
#include <cmath>

class WarriorAnt : public Ant {
private:
    double R;    // ����� ����
    double angle; // �������� ���

public:
    WarriorAnt(double x, double y, double V, double R) : Ant(x, y, V), R(R), angle(0) {}

    void move() override {
        angle += V / R;
        x = R * cos(angle);
        y = R * sin(angle);
    }
};

#endif // WARRIORANT_H
