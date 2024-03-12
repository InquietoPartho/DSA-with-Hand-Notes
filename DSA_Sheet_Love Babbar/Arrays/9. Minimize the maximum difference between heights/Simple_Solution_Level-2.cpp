#include <iostream>
#include<algorithm>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    // Step - 1 => Sort the array
    sort(arr, arr + n);
    // Intitial setup
    int mini = arr[0];
    int maxi = arr[n - 1];
    int diff = maxi - mini;
    // Iterate the array => i = 1 to n
    for (int i = 1; i < n; i++)
    {
        // Extra condition for level - 2
        if (arr[i] - k < 0)
        {
            continue; // Skip the iteration
        }
        // Step - 2 => Update mini (Trying to find new minimum)
        mini = min(arr[0] + k, arr[i] - k);
        // Step - 3 => Update maxi (Trying to find new maximum)
        maxi = max(arr[i - 1] + k, arr[n - 1] - k);
        // Step - 4 => Update diff i.e. answer
        diff = min(diff, maxi - mini);
    }
    return diff;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 6, 7, 10};
    int n = 10;
    int k = 5;
    int ans = getMinDiff(arr,n,k); 
    cout<<"Answer = "<<ans;
    return 0;
}