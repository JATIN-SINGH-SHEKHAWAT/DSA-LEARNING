// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more 
// than ⌊n / 2⌋ times. You may assume that the majority
//  element always exists in the array.

#include <iostream>
#include <vector>
using namespace std;

int majorityelement(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int freq =0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
         
        }
         if(freq > n/2){
            return val;
            }
    }
}
int main(){
    vector<int>nums = {1,1,2,2,2,2,1};
    cout<<majorityelement(nums)<<endl;
    return 0;
}