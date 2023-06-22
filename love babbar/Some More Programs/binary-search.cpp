#include <bits/stdc++.h>
using namespace std;
bool binarySerach(int *arr, int s, int li, int hi)
{
    int mid = li + (hi - li) / 2;
    if (arr[mid] == s)
        return true;
    if (li > hi)
        return false;
    if (arr[mid] > s)
        return binarySerach(arr, s, li, mid - 1);
    else
        return binarySerach(arr, s, mid + 1, hi);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int s;
    cin >> s;
    if (binarySerach(arr, s, 0, n - 1))
        cout << "Element exists" << endl;
    else
     
        cout << "Doest not exists";
}