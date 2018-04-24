// Efficient C++ program to sort an array of
// numbers in range from 1 to n.
#include <iostream>
using namespace std;
 
// function for sort array
void sortit(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
 
        // replace this element with it's position
        // while element not get the position
        // swap this element to it's position
        while (i != (arr[i] - 1)) 
            swap(arr[i], arr[arr[i] - 1]);        
    }
}
 
// Driver code
int main()
{
    int arr[] = { 10, 7, 9, 2, 8, 3, 5, 4, 6, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // for sort an array
    sortit(arr, n);
 
    // for print all the element in sorted way
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";    
}
