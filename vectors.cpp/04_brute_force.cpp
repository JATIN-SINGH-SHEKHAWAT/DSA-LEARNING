#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5]= {12,45,78,96,63,};
    int maxSum = INT_MAX;
    
    for(int st =0; st<n ; st++){
        int currSum = 0;
        for(int end= st; end<n; end++){

            currSum += arr[end];
            maxSum = max(maxSum, currSum);

        }

        cout << "max subarray sum = "<< maxSum << endl;
    }
    return 0;
}  
