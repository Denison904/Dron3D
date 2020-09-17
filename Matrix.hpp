#pragma once 
#include "Glob.hpp"

class Matrix{
public:
    Matrix(int row,int col);
    Matrix(const Matrix& copy);
    void zero();
    void identity();
    
    Matrix Transp();

    


    ~Matrix();
private:
    int size;
    int row;
    int col;
    std::vector<float> value;
};
