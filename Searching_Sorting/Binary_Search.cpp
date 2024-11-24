// Binary Search work on Monotonic function
#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;  // imp
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target) // left
        {
            e = mid - 1;
        }
        else if (arr[mid] < target) // Right
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    auto it = BinarySearch(arr, target);
    cout << "ans :" << it;

    return 0;
}