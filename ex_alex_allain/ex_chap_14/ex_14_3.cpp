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

    /* 
    
    How to read memory address:
    - 0x556fbed75708
    - 0x556fbed7570c
    
    A memory address is in hexadecimal form, (16 units: 0 1 2 3 4 5 6 7 8 9 A B C D E F)
    - in deciamal 8 + 4 = 12
    - in hexadecimal 08 + 04 = 0C

    And when you print a line you are printing an array, you were pointing to the first value of the array.
    Each value of the same array has 4 units of difference because the array is int type. In a 64-bit system each int is 4 bytes (32 bits).
    So the memory slot of the array at i and i+1 has 4 byte of difference becasuse the term i takes 4 bytes to be expressed.
    The memory is expressed in bytes
             _ _ _ _ 
            |_|_|_|_| -> this is the memory of an int in the memory (4 bytes).

    The stuff before x it tells us which kind of format is address after:

    - 0b1010: binary
    - 0o52: octal
    - 10: decimal
    - 0: hexadecimal

    */

    for (int i = 0; i < n; i++){
            delete [] p_p_matrix[i];
    }

    delete [] p_p_matrix;

}