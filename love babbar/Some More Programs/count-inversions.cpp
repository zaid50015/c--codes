#include <bits/stdc++.h>
using namespace std;
long long merge(long long *arr, int s, int mid, int e)
{
    long long inv = 0;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int si = s;
    for (int i = 0; i < len1; i++)
        arr1[i] = arr[si++];
    for (int i = 0; i < len2; i++)
        arr2[i] = arr[si++];
    int index1 = 0;
    int index2 = 0;
    si = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] > arr2[index2])
        {
            inv += len1 - index1;
            arr[si++] = arr2[index2++];
        }
        else
        {
            arr[si++] = arr1[index1++];
        }
    }
    while (index1 < len1)
        arr[si++] = arr1[index1++];
    while (index2 < len2)
        arr[si++] = arr2[index2++];
    delete[] arr1;
    delete[] arr2;
    return inv;
}
long long solve(long long *arr, int s, int e)
{
    long long inv = 0;
    int mid = s + (e - s) / 2;
    if (s < e)
    {
        inv += solve(arr, s, mid);
        inv += solve(arr, mid + 1, e);
        inv += merge(arr, s, mid, e);
    }
    return inv;
}

long long getInversions(long long *arr, int n)
{
    // Write your code here.
    return solve(arr, 0, n - 1);
}
int main()
{

    int n;
    cin >> n;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getInversions(arr, n);
    delete[] arr;
}