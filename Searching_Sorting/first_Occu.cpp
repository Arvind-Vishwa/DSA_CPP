// find first occurrence
// we use store and compute
#include <iostream>
using namespace std;

void firstOccurrence(int arr[], int size, int target, int &ansIndex)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid; // store and compute
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    cout << "ans:" << ansIndex;
}
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40};
    int size = 6;
    int target = 20;
    int ansIndex = -1;
    firstOccurrence(arr, size, target, ansIndex);
}