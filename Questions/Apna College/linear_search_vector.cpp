#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find(vector<int>& nums, int size, int target){
         for(int i = 0; i < size; i++){
            if(nums[i] == target){
                return i;
            }
         }
         return -1;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int size = vec.size();
    int target = 4;
    cout << find(vec, size, target) << endl;
}