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
    
    int const NUM_INPUTS = 5;
    
    cout << "Enter 3 numbers: ";
    
    int input_array[NUM_INPUTS];
    
    for (int i = 0; i < NUM_INPUTS; i++) {
        cin >> input_array[i];
    }
    
    for (int i = 0; i < NUM_INPUTS; i++) {
        cout << "WTF " << input_array[i] << endl;
    }
    
    return 0;
}