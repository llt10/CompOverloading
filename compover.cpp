#include <iostream> 
#include <vector>
#include <string>


class Complex {
    private: 
    double real;
    double imaginary;

    public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    void display() const {
        std::cout << real << "+" <<imaginary << "i" << std::endl;
    }

    double mag() const {
        return sqrt(real * real + imaginary * imaginary);
    }
};




