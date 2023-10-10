#include <iostream>
#include <ctime>
using namespace std;

int binarySearchUnsorted(int array[], int low, int high, int target) {
    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (array[middle] == target) {
            return middle;
        }

        if (array[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    return -1;
}

int main() {
    //srand(time(0));
    int arraySize;
    int target;

    cout << "Enter the size of the array to be generated: ";
    cin >> arraySize;
    cout << endl;
	
	cout << "What would you like to search for: ";
	cin >> target;
	cout << endl;
	
    int* array = new int[arraySize];

    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % arraySize;
        cout << array[i] << endl;
        //array[i] = i;
        //cout << array[i] << endl;
    }
    
    int result = binarySearchUnsorted(array, 0, arraySize-1, target);
    
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    delete[] array; // Don't forget to release the memory when done.

    return 0;
}
