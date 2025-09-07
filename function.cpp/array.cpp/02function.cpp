 #include <iostream>
 #include <vector>

 using namespace std;

 int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(84);
    vec.push_back(40);
    vec.push_back(46);

    cout <<"after push back size = " << vec.size() << endl;
    vec.pop_back();

    cout <<vec.back() <<endl;
    return 0;

 }