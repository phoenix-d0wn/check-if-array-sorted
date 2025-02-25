#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &array){
    for (int i = 0; i < array.size(); i++){
        if (array[i - 1] > array[i]){
            return false;   //return 0 if array is not sorted asc order
        }
    } 

    return true;    //return 1 if array is sorted asc order
}

int main(){
    //example of sorted array (asc order)
    vector<int> arrayA = {1, 2, 3, 4, 5};
    
    //example of unsorted array
    vector<int> arrayB = {5, 3, 4, 1, 2};

    cout << endl;
    cout << "Array A is sorted: " << isSorted(arrayA);

    cout << endl;
    cout << "Array B is sorted: " << isSorted(arrayB);

    return 0;
}