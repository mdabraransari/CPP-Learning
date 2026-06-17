#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int max_time)
{
    int painter = 1, time = 0;
    for(int i = 0; i < n; i++){
        if(time + arr[i] <= max_time){
            time += arr[i];
        }
        else {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m ? true : false;
}

int min_time(vector<int>& arr, int n , int m){
    int max_value = *max_element(arr.begin(), arr.end());
    int start = max_value;
    int end = accumulate(arr.begin(), arr.end(), 0);
    // int sum = 0, maxVal = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     sum += arr[i];
    //     maxVal = max(maxVal, arr[i]);
    // }
    // int start = maxVal, end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;  
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
    
}

int main() {

   vector<int> arr = {40, 30, 10, 20};
   int n = 4, m = 2;
   cout << min_time(arr, n, m) << endl;
   return 0;
}