#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool com(int a, int b)
{
    return a>b;
}

int main()
{
    vector<int> vec ={1,2,3,7,5,6};
    vector<int>::iterator iter;

    sort(vec.begin(), vec.end());
    for(x:vec){
        cout << x << endl;
    }

    sort(vec.begin(), vec.end(), com);
    for(iter=vec.begin(); iter<vec.end(); iter++)
        cout << *iter << endl;
    return 0;
}
