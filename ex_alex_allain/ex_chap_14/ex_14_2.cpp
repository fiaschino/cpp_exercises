#include <iostream>

int main(){

    int*** p_p_p_n;
    int L, W, H;
    std::cout << "please write three integer numbers that represent the sizes" << std::endl;
    std::cin >> L;
    std::cin >> W;
    std::cin >> H;
    p_p_p_n = new int** [L];

    //now make each pointer store the address to a pointer of pointers (to a 2D matrix)

    for (int i = 0; i < L; i++){

        p_p_p_n [i] = new int*[W];
        
    }

    //now make each pointer store the address to the array

   for (int i = 0; i < L; i++){

        for (int j = 0; j < W; j++){ // this for loop could also be 

            p_p_p_n [i][j] = new int[H];

        }

    }
  
    for (int i = 0; i < L; i++){

        for (int j = 0; j < W; j++){

            for (int k = 0; k < H; k++){

            p_p_p_n[i][j][k] = (i + 1) * (j + 1) * (k + 1);

            }
        }
    }

    for (int i = 0; i < L; i++){

        for (int j = 0; j < W; j++){

            for (int k = 0; k < H; k++){

                std::cout << p_p_p_n[i][j][k] << " ";
            
            }

            std::cout << std::endl;

        }

        std::cout << std::endl;


    }

    for (int i = 0; i < L; i++){

        for (int j = 0; j < W; j++){

            delete [] p_p_p_n[i][j];
        
        }

        delete[] p_p_p_n[i];

    }
    
    delete [] p_p_p_n;


}