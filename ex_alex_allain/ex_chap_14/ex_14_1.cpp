#include <iostream>
// using namespace std; //if you would like to not use std::

int main(){

    int n; 
    int** p_p_n; // initializing the pointer to pointer
    std::cout << "please insert a number so you can get a multiplicaiton table: \n";
    std::cin >> n;
    p_p_n = new int* [n]; // setting the pointer to pointer as a new space in the heap that contains address to a pointer
                          // it will point to an address of pointers in the heap (to the first element of the array)
                          // Now each term of the array of pointers needs to be setted to something
    
    for ( int i = 0; i < n; i++ ){
        p_p_n[i] = new int [n]; 
    }

    // now p_p_n can be used just like an array

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++){
            
            p_p_n[i][j] = ( i + 1 ) * ( j + 1 );

        }
    }

    std::cout << std::endl << "Here you have the multiplication table: \n";
    
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++){

            std::cout << p_p_n[i][j] << " ";

        }

        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] p_p_n[i];
    }

    delete[] p_p_n;
}

