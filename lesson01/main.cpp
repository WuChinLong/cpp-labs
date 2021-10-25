#include <iostream>

using namespace std;

void callByValue(int num)
{
    num = 5;
    cout << "in before callByValue: " << &num << endl;
    cout << "in before callByValue: " << num << endl;

}

void callByAddress(int *pnum)
{
    *pnum =5;
    cout << "in before callByAddress: " << pnum << endl;
    cout << "in before callByAddress: " << *pnum << endl;

}

void callByReference(int &num)
{
    num = 9;
    cout << "in before callByReference: " << &num << endl;
    cout << "in before callByReference: " << num << endl;

}

int main()
{
    int num =2;
    cout << "num address: " << &num << endl;

    cout << "before callByValue: " << num << endl;
    callByValue(num);
    cout << "after callByValue: " << num << endl;

    cout << "before callByAddress: " << num << endl;
    callByAddress(&num);
    cout << "after callByAddress: " << num << endl;

    cout << "before callByReference: " << num << endl;
    callByReference(num);
    cout << "after callByReference: " << num << endl;


    return 0;
}


