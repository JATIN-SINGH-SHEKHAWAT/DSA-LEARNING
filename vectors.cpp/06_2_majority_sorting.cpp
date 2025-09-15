#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityelement(vector<int> nums){
    int n = nums.size();

    //sorting
    sort(nums.begin(),nums.end());

    //freq count
    int freq =1,ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
         }else{
            freq=1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>nums ={1,1,1,2,0,0,1,7,7,};
    cout <<majorityelement(nums)<<endl;
    return 0;
}