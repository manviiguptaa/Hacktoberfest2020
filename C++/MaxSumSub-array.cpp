/*
Using KADANE's Algorithm :
Initialize :
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array :
  * max_ending_here = max_ending_here + a[i]
  * if(max_so_far < max_ending_here)
         max_so_far = max_ending_here
  * if(max_ending_here < 0)
         max_ending_here = 0
return max_so_far
*/

// C++ program to print Maximum contiguous array sum 
#include <iostream> 
#include <climits> 
using namespace std; 
  
int MaxSumSubArray(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
// Driver program to test MaxSumSubArray
int main() 
{ 
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
} 
