#include<iostream>
using namespace std;

int linearSearch(int arr [], int sz, int target){
    for(int i =0; i<sz; i++){
        if (arr[i]== target){
            return i;
        }
        }
        return -1;

}
int main(){
    int arr []={1,-5,0,56,8,89,45};
    int sz = 7;
    int target =0;
    
    cout << linearSearch(arr, sz, target)<<endl;
    return 0;
}