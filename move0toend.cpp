//1st approach
// output : 1 2 4 3 5 0 0 0
// C++ Program to move all zeros to end using temporary array

#include <bits/stdc++.h>
using namespace std;

// function to move all zeros to the end
void pushZerosToEnd(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

    // to keep track of the index in temp[]
    int j = 0;

    // Copy non-zero elements to temp[]
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    // Fill remaining positions in temp[] with zeros
    while (j < n) {
        temp[j++] = 0;
    }

    // Copy all the elements from temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}

//2nd approach
// Java Program to move all zeros to end using two traversals

class GfG {

    // Function which pushes all zeros to end of an array
    static void pushZerosToEnd(int[] arr) {
        
        // Count of non-zero elements
        int count = 0;  

        // If the element is non-zero, replace the element at
        // index 'count' with this element and increment count
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0)
                arr[count++] = arr[i];
        }

        // Now all non-zero elements have been shifted to
        // the front. Make all elements 0 from count to end.
        while (count < arr.length)
            arr[count++] = 0;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 0, 4, 3, 0, 5, 0};
        pushZerosToEnd(arr);
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}

//3rd approach
// C++ Program to move all zeros to end using one traversal

#include <bits/stdc++.h>
using namespace std;

// Function which pushes all zeros to end of array
void pushZerosToEnd(vector<int>& arr) {
  
    // Pointer to track the position for next non-zero element
    int count = 0;
     
    for (int i = 0; i < arr.size(); i++) {

        // If the current element is non-zero
        if (arr[i] != 0) {
          
            // Swap the current element with the 0 at index 'count'
            swap(arr[i], arr[count]);
            // Move 'count' pointer to the next position
            count++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}

// 4th 
// C++ Program to move zeros to the end using Library Methods

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void pushZerosToEnd(vector<int> &arr) {
    stable_partition(arr.begin(), arr.end(), [](int n) { 
                                       return n != 0; });
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int i : arr)
        cout << i << ' ';
    return 0;
}
