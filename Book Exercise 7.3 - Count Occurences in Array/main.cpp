//
//  main.cpp
//  Book Exercise 7.3 - Count Occurences in Array
//
//  Created by ax on 10/5/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>

using namespace std;

int main() {
    
    int const NUM_MAX_INPUTS = 3;
    int const NUM_COUNTABLE_DIGITS = 100;
    int input_array[NUM_MAX_INPUTS];
    int count_array[NUM_COUNTABLE_DIGITS];
    int integer_input = 0;
    
    // initialize array containers
    for (int i = 0; i < NUM_MAX_INPUTS; i++) {
        input_array[i] = 0;
    }
    
    for (int i = 0; i < NUM_COUNTABLE_DIGITS; i++) {
        count_array[i] = 0;
    }
    
    cout << "Enter integers between 1 and 100: ";
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {

        cin >> integer_input;
        input_array[i] = static_cast<int>(integer_input);
        
    }
    
    cout << "what we got?: " << endl;
    
    for (int j = 0; j < NUM_MAX_INPUTS ; j++) {
        
        cout << "input array position " << j << " is " << input_array[j] << endl;
        
        
    }
    

    return 0;
}