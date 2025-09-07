#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[6]= {12,45,78,96,63,45};
    
    for(int st =0; st<n ; st++){
        for(int end= st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";

        }
        cout << endl;
    }
    return 0;
}  
