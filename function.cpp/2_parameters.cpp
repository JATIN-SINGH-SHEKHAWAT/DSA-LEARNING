#include <iostream>
using namespace std;

//sum of 2 number
int sum(int a ,int b){
    int s =a+b;
    return s;
}
// minimum of two number
int min(int a ,int b){
    if(a<b){
        return a;
    }else {
        return b;
    }
}
int main(){
    cout << sum( 10,80)<<endl; // arguments :actual value that passed
    cout << min ( 10,80)<< endl;

    return 0;
}