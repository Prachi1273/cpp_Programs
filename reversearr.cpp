//1st approach

//output : 5 6 2 3 4 1 

// C++ Program to reverse an array using temporary array

#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
    int n = arr.size();
    
    // Temporary array to store elements in reversed order
    vector<int> temp(n);
  
    // Copy elements from original array to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}

//2nd 
// C++ Program to reverse an array using Two Pointers

#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
  
    // Initialize left to the beginning and right to the end
    int left = 0, right = arr.size() - 1;
  
    // Iterate till left is less than right
    while(left < right) {
      
        // Swap the elements at left and right position
        swap(arr[left], arr[right]);
      
        // Increment the left pointer
        left++;
      
        // Decrement the right pointer
        right--;
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}

//3rd
// C++ Program to reverse an array by swapping elements

#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
    int n = arr.size();
    
    // Iterate over the first half and for every index i,
    // swap arr[i] with arr[n - i - 1]
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
//4th
// C++ Program to reverse an array using Recursion

#include <iostream>
#include <vector>
using namespace std;

// recursive function to reverse an array from l to r
void reverseArrayRec(vector<int> &arr, int l, int r) {
    if(l >= r)
        return;
  
    // Swap the elements at the ends
    swap(arr[l], arr[r]);
  
    // Recur for the remaining array
    reverseArrayRec(arr, l + 1, r - 1);
}

// function to reverse an array
void reverseArray(vector<int> &arr) {
    int n = arr.size();
    reverseArrayRec(arr, 0, n - 1);
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
//5th
// C++ Program to reverse an array using inbuilt methods

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
