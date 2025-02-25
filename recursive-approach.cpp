#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> array, int array_size){
    //base case
    if (array_size <= 1){
        return true;
    }

    //check if current and previous elements are in order (ascending)
    return (array[array_size - 1] >= array[array_size - 2]) 
    && (isSorted(array, array_size - 1));
}

int main(){
    //example of sorted array (asc order)
    vector<int> arrayA = {1, 2, 3, 4, 5};

    //example of unsorted array
    vector<int> arrayB = {5, 3, 4, 1, 2};

    cout << endl;
    cout << "Array A is sorted: " << isSorted(arrayA, arrayA.size());

    cout << endl;
    cout << "Array B is sorted: " << isSorted(arrayB, arrayB.size());

    return 0;
}