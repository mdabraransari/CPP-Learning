#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < nums[minIndex])
            minIndex = i;
        if (nums[i] > nums[maxIndex])
            maxIndex = i;
    }

    swap(nums[minIndex], nums[maxIndex]);

    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";
}
