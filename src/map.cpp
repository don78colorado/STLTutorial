#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<char,int> mymap;
    mymap.insert( pair<char,int>('a',100) );
    mymap.insert( make_pair('z',200) );

    map<char,int>::iterator it = mymap.begin();
    mymap.insert(it, pair<char,int>('b',300)); // "it" is a hint

    it = mymap.find('z'); // O(log(n))

    // showing contents:
    for ( it=mymap.begin(); it != mymap.end(); it++)
        cout << (*it).first << " => " << (*it).second << endl;
    return 0;
}
