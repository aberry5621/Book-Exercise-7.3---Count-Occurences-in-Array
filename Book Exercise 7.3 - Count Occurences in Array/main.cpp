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
    
    
    
    cout << "TEST Enter an integer: ";
    
    int test_input = 0;
    
    cin >> test_input;
    
    test_input = static_cast<int>(test_input);

    cout << "TEST input is : " << test_input << endl;
    bool is_a_digit = isdigit(test_input);
    bool is_a_alpha = isalpha(test_input);
    cout << "AND TEST input is a digit?: " << is_a_digit << endl;
    cout << "AND TEST input is alpha?: " << is_a_alpha << endl;
    
    cout << "hold on ";
    cout << "wait a minnit! " << endl;
    
    
    
    cout << "Enter integers between 1 and 100: ";
    
    int input_array[NUM_MAX_INPUTS];
    int count_array[NUM_COUNTABLE_DIGITS];
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {
        int current_input_digit = 2;
        cin >> current_input_digit;
        if (isdigit(current_input_digit) && current_input_digit > 0) {
            input_array[i] = current_input_digit;
        } else {
            break;
        }
    }
    
    for (int i = 0; i < NUM_MAX_INPUTS ; i++) {
        
        cout << input_array[i] << endl;

        
    }

    

    
    return 0;
}