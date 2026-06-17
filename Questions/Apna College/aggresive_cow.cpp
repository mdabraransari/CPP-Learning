#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isValid(vector<int>& arr, int n, int c, int min_distance){
    int cows = 1, last_pos = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i]-last_pos >= min_distance){
            cows++;
            last_pos = arr[i];
        } 
        if(cows == c){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int>& arr, int n , int cow){
    sort(arr.begin(), arr.end());
    int start = 1, end = arr[n-1] - arr[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/ 2;
        if(isValid(arr,n,cow,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
    
}



int main() {
    int n = 5, cow = 3;
    vector<int> arr= {1, 2, 8, 4, 9};
    cout << getDistance(arr, n, cow);
   return 0;
}