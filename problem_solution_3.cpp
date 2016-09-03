//
//  problem_solution_3.cpp
//  AssignmentNo1
//
//
//  ******** problem_solution_3.cpp **********
//
//  Created by Asif Raza on 03/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//

#include "problemsolutions.hpp"

void problem3(){
    int const SIZE_ROWsnCOLs = 8;   // Size of 2D array
    char queen = 'Q';               // Queen symbol
    char symbol = '*';              // char symbol
    char tab = '\t';                // escape sequences for format the output
    int queenPositions[8] = {0, 3,
                             4, 0,
                             0, 7,
                             6, 7}; // Place of Queen in Columns
    std::string
        cheesBoard[SIZE_ROWsnCOLs]
                  [SIZE_ROWsnCOLs]; // 2D Array of Strings
    
    
    //Loop depends of size of Array
    for (int i = 0; i < SIZE_ROWsnCOLs; i++) {
        cheesBoard[i][queenPositions[i]] = queen;
    }
    
    
    // Loop for OUTPUT
    std::cout << "OUTPUT:" << std::endl << std::endl;
    for (int i = 0; i < SIZE_ROWsnCOLs; i++) {
        for (int j = 0; j < SIZE_ROWsnCOLs; j++) {
            if(cheesBoard[i][j] == "Q")
                std::cout<< queen << tab;
            else
                std::cout<< symbol << tab;
        }
        std::cout << std::endl;
    }
    
    
    
}