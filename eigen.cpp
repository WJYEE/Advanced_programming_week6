#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::Matrix<double, 3, 2> A;
    A << 1, 2,
        3, 4,
        5, 6;
    Eigen::Matrix<double, 2, 3> B;    
    B << 7, 8, 9,
        10, 11, 12;
    
    Eigen::Matrix<double, 3, 3> output = A * B; // 행렬곱셈
    std::cout <<"output A*B: " << output << std::endl;
    return 0;
}
// g++ -I /WJY/include/eigen3 eigen.cpp -o eigen -std=c++11