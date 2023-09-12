#include "function.h"
#include <iostream>
using namespace std;


// function 1
// loops through the all the numbers in the array and if the number in the array equals the number inputted then its position is outputted
// if number is not present, it will output that the index is not found
void findIndex(int arr[], int num) {
    int j = 0;
    int pos;
    int present = 0;
    while (j < 100) {
        if (arr[j] == num) {
            pos = j;
            present = 1;
            cout << pos << endl;
        }
        j++;
    }

    if (!present) {
        cout << "Number is not present. Cannot find index" << endl;
    }

}

// function 2
// finds the old value and then replaces it with the new user inputted value
void valChange(int arr[], int index, int val) {
    int oldVal = arr[index];
    arr[index] = val;
    int newVal = arr[index];

    cout << "\nThe old value at index " << index << " was: " << oldVal << endl;
    cout << "The new value at index " << index << " is: " << newVal << endl;
}

// adds user inputted value to the end of array
void addInt(int arr[], int currMax, int val) {
    arr[currMax] = val;
}

// uses user inputted index to replace the value at that position with 0
void valToZero(int arr[], int index) {
    arr[index] = 0;
}




// prints for menu
void menu() {
    cout << "\n\n1 - Check if an interger exists and return its index" << endl;
    cout << "2 - Modify value by inputting an index" << endl;
    cout << "3 - Add integer to end of array" << endl;
    cout << "4 - Replace value with zero by inputting an index" << endl;
}

// prints the array
void printArray(int arr[], int maxPos) {
    for (int i = 0; i < maxPos; i++) {
        cout << arr[i] << " ";
    }
}