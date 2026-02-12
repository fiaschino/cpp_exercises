#include <iostream>

int main(){

    int** p_p_matrix;
    int n;
    std::cout << "insert here the dimension of the matrix:" << std::endl;
    std::cin >> n;
    p_p_matrix = new int*[n];

    for (int i = 0; i < n; i++){

        p_p_matrix[i] = new int[n];

        std::cout << "address of the " << i+1 << "-th row: ";
            
        for (int j = 0; j < n; j++){
            std::cout  << p_p_matrix[i] + j << "  "; // OR: std::cout << &(p_p_matrix[i][j]) << "  ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++){
            delete [] p_p_matrix[i];
    }

    delete [] p_p_matrix;

}