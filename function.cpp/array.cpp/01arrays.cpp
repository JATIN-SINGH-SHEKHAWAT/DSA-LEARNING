#include <iostream>
 using namespace std;
 
 int main(){
     int marks[5]={45,15,12,78,95};
     marks[0]=101;
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
     

     // for loops in array
     int size = 5;
     int marks[size];
     
      for (int i=0; i<size; i++){
          cin >> marks[i];
      }
      // loops : 0 to size-1
      for (int i=0; i<size; i++){
          cout<< marks[i]<<endl;
      }

     return 0;
     
     
     
     
 }
  