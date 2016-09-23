#include <iostream>
#include <vector>
#include <algorithm>

template <class InputIterator>
void print(InputIterator begin, InputIterator end)
{
    using namespace std;
    cout << "{";
    --end;
    while(begin!=end)
        cout << *(begin++) << ", ";
    cout << *end << "}\n";
}

    template <typename T>
void printVector(std::vector<T> v)
{
    using namespace std;
    typename vector<T>::const_iterator cbegin=v.begin();
    typename vector<T>::const_iterator cend=v.end();
    print(cbegin, cend);
}

int main()
{
    using namespace std;
    std::vector<int> vec1 = { 4,5};
    std::vector<int> vec2 = {12, 14, 16, 18} ;
    printVector(vec1);
    printVector(vec2);

    vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
    insert_iterator< vector<int> > i_itr(vec2, it);
    copy(vec1.begin(),vec1.end(), // source
         i_itr);        // destination
    printVector(vec2);
    // Other insert iterators: back_insert_iterator, front_insert_iterator

    return 0;
}
