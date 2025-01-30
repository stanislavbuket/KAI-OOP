#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
    double x1, y1;
    double x2, y2;
    double x3, y3;

public:
    // Конструктори
    Triangle();
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    // Сетери
    void setCoordinates(double x1, double y1, double x2, double y2, double x3, double y3);

    // Гетери
    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
    double getX3() const;
    double getY3() const;

    // Методи обчислення
    double getPerimeter() const;
    double getArea() const;
};

#endif // TRIANGLE_H
