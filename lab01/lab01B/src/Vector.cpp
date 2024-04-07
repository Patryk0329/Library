#include "Vector.h"

Iwektor3D::Iwektor3D(int x, int y, int z) {
    data = new int[3];
    data[0] = x;
    data[1] = y;
    data[2] = z;
}

Iwektor3D::Iwektor3D(const Iwektor3D& other) {
    data = new int[3];
    for (int i = 0; i < 3; ++i) {
        data[i] = other.data[i];
    }
}

Iwektor3D::~Iwektor3D() {
    delete[] data;
}

Iwektor3D& Iwektor3D::operator=(const Iwektor3D& other) {
    if (this != &other) {
        delete[] data;
        data = new int[3];
        for (int i = 0; i < 3; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

Iwektor3D Iwektor3D::operator+(const Iwektor3D& other) const {
    Iwektor3D result;
    for (int i = 0; i < 3; ++i) {
        result.data[i] = data[i] + other.data[i];
    }
    return result;
}

Iwektor3D Iwektor3D::operator-(const Iwektor3D& other) const {
    Iwektor3D result;
    for (int i = 0; i < 3; ++i) {
        result.data[i] = data[i] - other.data[i];
    }
    return result;
}

Iwektor3D Iwektor3D::operator*(int scalar) const {
    Iwektor3D result;
    for (int i = 0; i < 3; ++i) {
        result.data[i] = data[i] * scalar;
    }
    return result;
}

Iwektor3D operator*(int scalar, const Iwektor3D& vector) {
    return vector * scalar;
}

int Iwektor3D::operator*(const Iwektor3D& other) const {
    int result = 0;
    for (int i = 0; i < 3; ++i) {
        result += data[i] * other.data[i];
    }
    return result;
}

int& Iwektor3D::operator[](int index) {
    return data[index];
}

const int& Iwektor3D::operator[](int index) const {
    return data[index];
}

Iwektor3D Iwektor3D::operator-() const {
    Iwektor3D result;
    for (int i = 0; i < 3; ++i) {
        result.data[i] = -data[i];
    }
    return result;
}

std::ostream& operator<<(std::ostream& os, const Iwektor3D& vector) {
    os << "(" << vector.data[0] << ", " << vector.data[1] << ", " << vector.data[2] << ")";
    return os;
}
