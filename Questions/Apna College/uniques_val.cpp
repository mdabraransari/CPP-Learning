#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {1,2,3,1,2,3,4};
    bool uniqueness = true;
    int size = sizeof(nums)/ nums[0];
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            if(nums[i] == nums[j]){
               break;
            }
           
        }

    }

   return 0;
}