#include <bits/stdc++.h>
using namespace std;
int getpivot(vector<int> &arr, int n)
{
    int si = 0;
    int ei = n - 1;
    int mid = si + (ei - si) / 2;
    while (si < ei)
    {
        if (arr[mid] >= arr[0])
        {
            si = mid + 1;
        }
        else
        {
            ei = mid;
        }
        mid = si +(ei - si) / 2;
    }
    return ei;
}
int binarysearch(vector<int> &arr, int s, int e, int key)
{
    int si = s;
    int ei = e;
    int mid = si +(ei - si) / 2;
    while (si <= ei)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key >= arr[mid])
        {
            si = mid + 1;
        }
        else
        {
            ei = mid - 1;
        }
        mid = si + (ei - si) / 2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getpivot(arr, n);
    return pivot;
   /* if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, (n - 1), k);
    }
    else
    {
        return binarysearch(arr, 0, (pivot - 1), k);
    }*/
}

int main()
{
    vector<int> arr = {2, 4, 5, 6, 8, 9, 1};
    int n = 2;
    cout << findPosition(arr, arr.size(), n);
    return 0;
}