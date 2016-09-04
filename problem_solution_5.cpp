//
//  problem_solution_5.cpp
//  AssignmentNo1
//
//
//  ******** problem_solution_5.cpp **********
//
//  Created by Asif Raza on 03/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//

#include "problemsolutions.hpp"

void problem5(){
    unsigned const int MAXROWsnCOLs = 8;    // Size of 2D array
    char queen = 'Q';                       // Queen symbol
    char symbol = '*';                      // char symbol
    char tab = '\t';                        // escape sequences for format the output
    short counter = 0;                        // counter
    short queenPosition[8] = {0, 0,
                            1, 2,
                            3, 4,
                            5, 6};          // Place of Queen in Columns
    std::string
    cheesBoard[MAXROWsnCOLs]
                [MAXROWsnCOLs];             // 2D Array of Strings
    
    
    //Loop depends of size of Array
    for (int i = 0; i < MAXROWsnCOLs; i++) {
        cheesBoard[queenPosition[i]][i] = queen;
    }
    
    
    // Loop to check 'Queen' duplicate
    for (int i = 0; i < MAXROWsnCOLs; i++) {
        for (int j = 0; j < MAXROWsnCOLs; j++) {
            if(cheesBoard[i][j]== "Q"){
                counter++;
                if(counter == 2){
                    i = MAXROWsnCOLs;
                    break;
                }
            }
        }
        
        // Reset the counter depends on conditoin
        (counter < 2) ? counter = 0 : counter ;
    }
    
    
    // Loop for OUTPUT
    std::cout << "OUTPUT:" << std::endl << std::endl;
    for (int i = 0; i < MAXROWsnCOLs; i++) {
        for (int j = 0; j < MAXROWsnCOLs; j++) {
            (cheesBoard[i][j] == "Q") ? std::cout<< queen << tab :  std::cout<< symbol << tab;
        }
        std::cout << std::endl;
    }
    
    // Result:
    (counter == 2)? std::cout << "\nNot Good\n": std::cout << "\nOK\n";
    
    std::cout << "\n\t***** Because ******\n"
              << "Place the queen in one row two times."
              << std::endl;
}