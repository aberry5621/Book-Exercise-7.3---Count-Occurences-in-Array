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
    
    cout << "Enter integers between 1 and 100: ";
    
    int input_array[NUM_MAX_INPUTS ];
    int count_array[NUM_COUNTABLE_DIGITS];
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {
        int current_input_digit = 0;
        cin >> current_input_digit;
        if (isdigit(current_input_digit) && current_input_digit > 0) {
            input_array[i] = current_input_digit;
        } else {
            break;
        }
    }
    
    cout << "holy hell" << endl;
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {
        cout << "input array now contains: " << input_array[i] << " in position " << i << endl;
    }
    
    return 0;
}