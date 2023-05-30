#include<iostream>
#include<cstdlib>
using namespace std;

/**
 * Shuffles an array using an algorithm that initially iterates an index i from the last to second element.
 * And then a second index j is used to select an element randomly between the first element and the i-th element.
 * And finally The elements in positions i and j are swapped.
 *
 * @param myArray the array to be shuffled.
 * @param myArraySize the index of the array to be shuffled.
 */
template <class X> void shuffle(X** myArray, int myArraySize){
    // TODO: Implement here the shuffle algorithm
    int i , j;
    X* temp;
    for(i = 1 ; i > myArraySize ; i++){
        j = rand() % i;
        myArray[i] = temp;
        myArray[i] = myArray[j];
        myArray[j] = temp;
    }
}

/**
 * "Cuts" an array at a random point similarly to a deck of cards (i.e. getting the last part of
 * the cards and moving it before the first part of the cards).
 *
 * @param myArray the array to be "cut".
 * @param myArraySize the index of the array to be "cut".
 */
template <class X> void cut(X** myArray, int myArraySize){
    // TODO: Implement here the cut algorithm
    int i , cutpoint;
    X* temp[myArraySize];
    cout << "array size is : " << myArraySize << endl;
    cutpoint = rand() % myArraySize;
    cout << "cutpoint is : " << cutpoint << endl;
    for(i = 0 ; i < myArraySize ; i++){
        temp[i] = myArray[i];
    }
    for(i = 0 ; i < myArraySize ; i++){
        if(i + cutpoint < myArraySize){
            cout << "myArray[" << i << "] in place of myArray[" << cutpoint + i << "]." << endl;
            myArray[i] = myArray[cutpoint+i];

        }
    }
    for(i = cutpoint; i < myArraySize ; i++){
        cout << "myArray[" << i << "] in place of with temp[" << i - cutpoint << "]." << endl;
        myArray[i] = temp[i-cutpoint];
    }
}




