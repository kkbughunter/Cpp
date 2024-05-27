#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4};
    cout << "Length: " << v.size() << endl;
    cout << "Length/2: " << v.size() / 2 << endl;

    v.push_back(5);
    cout << "Length: " << v.size() << endl;
    cout << "Length/2: " << v.size() / 2 << endl;

    return 0;
}