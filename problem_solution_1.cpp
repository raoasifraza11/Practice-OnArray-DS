//
//  problem_solution_1.cpp
//  AssignmentNo1
//
//  ******** problem_solution_1.cpp **********
//
//  Created by Asif Raza on 03/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//

#include "problemsolutions.hpp"

void problem1() {
    
    int const SIZE_OF_ARRAY = 10;   // Length of Array
    int const LIMIT_RANGE = 100;    // Control the limit of auto Generate int
    int sum = 0;                    // Compute Variable
    int avg = 0;                    // Avg store
    int count = 0;                  // count the number of sums
    
    // An Array
    int arr[SIZE_OF_ARRAY];
    
    // Intro
    std::cout << "Problem 1 Solution" << std::endl << std::endl;
    
    
    // Loop depends on size of Array
    
    for (int i = 0; i < SIZE_OF_ARRAY; i++) {
        
        /**
         * Uncommenct these lines for user input.
         */
        //std::cout << "Enter an element at Index "<< i <<" :";
        //std::cin >> arr[i] = ;
        
        // Reset in all itreations
        int randomvalue = rand() % LIMIT_RANGE; // Auto Generate int Vlaues range 0 - 99;
        
        std::cout << "Entered Auto Generated int at Index "<< i <<": " << randomvalue << std::endl;
        arr[i] = randomvalue;
        
        // Calculate compute
        sum+=arr[i];
    }
    avg = sum / SIZE_OF_ARRAY;
    std::cout << std::endl <<  "The Average is : " << avg << std::endl << std::endl;
    
    
    
    // Then -> Compute the numbers grater then 'X' and find final average;
    std::cout << "Grater then 'X' Elements :" << std::endl;
    
    // Rest sum with 0
    sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++) {
        if(arr[i] > avg){
            
            std::cout << "Value at index " << i << " :" << arr[i] << std::endl;
            sum+= arr[i];
            ++count;                   // increment by one;
        }
    }
    
    // Get Avg
    avg = sum / count;
    std::cout << std::endl <<  "The Final Average is : " << avg << std::endl << std::endl;
    
    
}
