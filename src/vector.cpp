#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;  // vec.size() == 0
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8); // vec: {4, 1, 8};  vec.size() == 3

    // Vector specific operations:
    cout << vec[2] << endl;  // 8 (no range check)
    cout << vec.at(2)<< endl;  // 8 (throw range_error exception of out of range)

    for (int i=0; i < vec.size(); i++) {
        cout << vec[i] << " ";
     }
    cout << endl;
    for (vector<int>::iterator itr = vec.begin(); itr!= vec.end(); ++itr)
        cout << *itr << " ";
    cout << endl;
/*    for (it: vec) // C++ 11
        cout << it << " ";
*/
  return 0;
}
