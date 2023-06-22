#include <vector>
using namespace std;
int firstOcc(vector<int> &arr, int si, int ei, int key, int ans = -1)
{

    int mid = si + (ei - si) / 2;

    if (si > ei)
    {
        return ans;
    }
    if (arr[mid] == key)
    {
        ans = mid;
        return firstOcc(arr, si, mid - 1, key, ans);
    }
    else if (key > arr[mid])
    { // Right me jao
        return (arr, mid + 1, ei, key, ans);
    }
    else if (key < arr[mid])
    { // left me jao
        return firstOcc(arr, si, mid - 1, key, ans);
    }
}

int lastOcc(vector<int> &arr, int si, int ei, int key, int ans = -1)
{

    int mid = si + (ei - si) / 2;

      int mid = si + (ei - si) / 2;

    if (si > ei)
    {
        return ans;
    }
    if (arr[mid] == key)
    {
        ans = mid;
        return firstOcc(arr, mid+1, ei, key, ans);
    }
    else if (key > arr[mid])
    { // Right me jao
        return (arr, mid + 1, ei, key, ans);
    }
    else if (key < arr[mid])
    { // left me jao
        return firstOcc(arr, si, mid - 1, key, ans);
    }
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, 0, n, k);
    p.second = lastOcc(arr, 0, n, k);

    return p;
}