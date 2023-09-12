#include <iostream>
#include <fstream>
#include "function.h"
using namespace std;



int main() {

    // input file
    ifstream fin("file.txt");

    int arr[1000];
    int currMaxPos = 100;

    int i = 0;
    int nums;
    while (!fin.eof()) {
        fin >> nums;
        arr[i] = nums;
        i++;
    }

    menu();

    int input;

    cout << "\nPlease input a number: ";
    cin >> input;
    while (input > 5 || input < 1) {
        cout << "\nError: Invalid input" << endl;
        cout << "Please input a number: ";
        cin >> input;
    }


    if (input == 1) {

        int num;
        cout << "\nEnter a number to find the position it exists in: ";
        cin >> num;

        // finds index of the # including all its positions if there are duplicates
        cout << "The number " << num << " exists at index(es):" << endl;
        findIndex(arr, num);
    }


    if (input == 2) {
        int index;
        int val;
        cout << "\nEnter an index of the value you would like to modify: ";
        cin >> index;
        cout << "\nWhat would you like to change the value to? ";
        cin >> val;

        valChange(arr, index, val);
        printArray(arr, currMaxPos);

    }


    if (input == 3) {
        int newVal;
        cout << "Enter the new integer would you like to add to the array: ";
        cin >> newVal;

        addInt(arr, currMaxPos, newVal);
        currMaxPos++;
        printArray(arr, currMaxPos);
    }



    if (input == 4) {
        int index2;
        cout << "Enter the index of the value you would like to replace with zero?: ";
        cin >> index2;

        valToZero(arr, index2);

        cout << "\nNew Array: " << endl;
        printArray(arr, currMaxPos);
    }


}