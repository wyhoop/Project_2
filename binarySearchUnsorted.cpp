#include <iostream>
#include <ctime>
using namespace std;

int binarySearchUnsorted(int array[], int low, int high, int target) {
     //Repeat until the low and high variables meet each other
     while(low <= high) {
          int middle = low + (high - low) / 2;

	  if(array[middle] == target) {
	       return middle;
	  }

	  if(array[middle] < target) {
	       low = middle + 1;
	  }

	  else {
	       high = middle - 1;
	  }
     }
     
     //This algorithm returns -1 in the event that the target is not found
     return -1;
}

int main(){
    int array[];
    int arraySize = 0;

    cout << "Enter the size of the array to be generated: ";
    cin >> arraySize;
    cout << endl;

    for(int i = 0; i < arraySize; i++) {
        array[i] = rand() % arraySize;
	cout << array[i] << endl;
    }


    return 0;
}
