#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i = 1 ; i <= 5 ; ++i)
        v.push_back(i);
    cout<<"First Element of vector = " << v.front() <<endl;
    return 0;
}
