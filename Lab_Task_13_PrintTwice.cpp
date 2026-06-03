#include<iostream>
using namespace std;
template <typename T>
void printTwice(T a)
{
    cout<<a<<endl<<a<<endl;
}
int main()
{
    printTwice(5);
    printTwice(3.14);
    printTwice("Hello");
    return 0;
}
