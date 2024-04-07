#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Iwektor3D {
private:
    int* data;

public:
    Iwektor3D(int x = 0, int y = 0, int z = 0);
    Iwektor3D(const Iwektor3D& other);
    ~Iwektor3D();

    Iwektor3D& operator=(const Iwektor3D& other);
    Iwektor3D operator+(const Iwektor3D& other) const;
    Iwektor3D operator-(const Iwektor3D& other) const;
    Iwektor3D operator*(int scalar) const;
    friend Iwektor3D operator*(int scalar, const Iwektor3D& vector);
    int operator*(const Iwektor3D& other) const;
    int& operator[](int index);
    const int& operator[](int index) const;
    Iwektor3D operator-() const;

    friend std::ostream& operator<<(std::ostream& os, const Iwektor3D& vector);
};

#endif // VECTOR_H
