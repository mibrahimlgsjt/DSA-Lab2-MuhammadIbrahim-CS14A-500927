#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of key in array
vector<int> findAllIndices(int arr[], int size, int key) {
    vector<int> indices; // to store indices

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) { 
            indices.push_back(i); // store index at the end  of the vector
        }
    }

    return indices; //returns the vector carrying indexes
}

int main() {
    // Case 1: Multiple occurrences
    int arr1[] = {1, 3, 7, 3, 5, 3};
    int size1 = 6;
    vector<int> result1 = findAllIndices(arr1, size1, 3);
    cout << "Indices of 3: ";
    if (result1.empty()) cout << "Not found";
    else for (int i = 0; i < result1.size(); i++) cout << result1[i] << " ";
    cout << endl;

    // Case 2: Key not present
    int arr2[] = {10, 20, 30};
    int size2 = 3;
    vector<int> result2 = findAllIndices(arr2, size2, 5);
    cout << "Indices of 5: ";
    if (result2.empty()) cout << "Not found";
    else for (int i = 0; i < result2.size(); i++) cout << result2[i] << " ";
    cout << endl;

    //Case 3: Empty array
    int arr3[] = {}; 
    int size3 = 0;
    vector<int> result3 = findAllIndices(arr3, size3, 1);
    cout << "Indices of 1: ";
    if (result3.empty()) cout << "Not found (array empty)";
    else for (int i = 0; i < result3.size(); i++) cout << result3[i] << " ";
    cout << endl;

    return 0;
}
