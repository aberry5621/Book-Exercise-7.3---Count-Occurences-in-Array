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
    
    int const NUM_MAX_INPUTS = 100;
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
    
    cout << "Enter the integers between 1 and 100: ";
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {

        cin >> integer_input;
        // cast input to integer
        input_array[i] = static_cast<int>(integer_input);
        
        if (input_array[i] > 0) {
            // cout << "TRUE > 0!" << endl;
        } else if  (input_array[i] == 0) {
            // cout << "must be 0!" << endl;
            break;
        }
        
    }
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {
        
        // cout << "input array position " << i << " is " << input_array[i] << endl;
        if (input_array[i] > 0) {
            count_array[input_array[i]]++;
        }
        
    }
    
    for (int i = 0; i < NUM_COUNTABLE_DIGITS; i++) {
        
        // cout << "count array position " << i << " is " << count_array[i] << endl;
        
        if (count_array[i] == 1) {
            cout << i << " occurs " << count_array[i] << " time " <<  endl;
        } else if (count_array[i] > 1) {
            cout << i << " occurs " << count_array[i] << " times" <<  endl;
        }
        
    }
    
    return 0;
}