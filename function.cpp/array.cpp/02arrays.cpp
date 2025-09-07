#include<iostream>
using namespace std;

int main(){
    int nums[]={5,45,63,89,18,2,-56};
    int size =7;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int  i=0; i<size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);

    }

    cout<< "smallest = "<<smallest <<endl;
    cout<< "largest = "<<largest <<endl;


    return 0;
}