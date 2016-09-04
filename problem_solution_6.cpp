//
//  problem_solution_6.cpp
//  AssignmentNo1
//
//
//  ******** problem_solution_6.cpp **********
//
//  Created by Asif Raza on 03/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//

#include "problemsolutions.hpp"

void problem6(){
    unsigned const int SIZE_ROWsnCOLs = 8;   // Size of 2D array
    char queen = 'Q';                        // Queen symbol
    char symbol = '*';                       // char symbol
    char tab = '\t';                         // escape sequences for format the output
    bool flag = false;                       // counter
    short queenPosition[8] = {1, 1,
        1, 1,
        1, 0,
        1, 1};                               // Place of Queen in Columns
    std::string
    cheesBoard[SIZE_ROWsnCOLs]
    [SIZE_ROWsnCOLs]; // 2D Array of Strings
    
    
    //Loop depends of size of Array
    for (int i = 0; i < SIZE_ROWsnCOLs; i++) {
        cheesBoard[queenPosition[i]][i] = queen;
    }
    
    
    // Loop to check 'Queen' duplicate
    for (int i = 0; i < SIZE_ROWsnCOLs; i++) {
        for (int j = 0; j < SIZE_ROWsnCOLs; j++) {
            if(cheesBoard[i][j]== "Q" && j > 0){
                if(cheesBoard[i+1][j-1] == "Q"|| cheesBoard[i+1][j+1] == "Q"){
                    i = SIZE_ROWsnCOLs;
                    flag = true;
                    break;
                }
            }
        }
    }
    
    
    // Loop for OUTPUT
    std::cout << "OUTPUT:" << std::endl << std::endl;
    for (int i = 0; i < SIZE_ROWsnCOLs; i++) {
        for (int j = 0; j < SIZE_ROWsnCOLs; j++) {
            (cheesBoard[i][j] == "Q") ? std::cout<< queen << tab :  std::cout<< symbol << tab;
        }
        std::cout << std::endl;
    }
    
    // Result:
    flag? std::cout << "\nNot Good\n": std::cout << "\nOK\n";
    
    std::cout << "\n\t***** Because ******\n"
    << "Makes Diagonal."
    << std::endl;
}