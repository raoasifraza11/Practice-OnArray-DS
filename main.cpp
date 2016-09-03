//
//  main.cpp
//  AssignmentNo1 : Practics Problem on Array
//
//  ******** main.cpp **********
//
//  Created by Asif Raza on 02/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//

#include "problemsolutions.hpp"

int main(int argc, const char * argv[]) {
    
    try {
        
        /**
         * UNCOMMENT the require problem to run
         * the OUTPUT of the Prboblem.
         *
         * Default is 'problem1()';
         */
        
        problem1();
        //problem2();
        //problem3();
        //problem4();
        //problem5();
        //problem6();

    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    
    // Program ended with exit code 0
    return EXIT_SUCCESS;
}
