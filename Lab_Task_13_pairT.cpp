#include<iostream>
#include<string>
using namespace std;
template <typename T>
class Pair
{
private:
T first;
T second;

    /* data */
public:
T getFirst()
{
    return first;
   
}
T getSecond()
{
    return second;
}
Pair()
{
    first = T();
    second = T();
}
Pair(T a, T b)
{
    first = a;
    second = b;
}
};
int main()
{
    Pair<int> p1(11, 22);
    Pair<double> p2(8.3, 4.9);
    Pair<string> p3("Hello", "World");

    cout<<p1.getFirst()<<" and "<<p1.getSecond()<<endl;
    cout<<p2.getFirst()<<" and "<<p2.getSecond()<<endl;
    cout<<p3.getFirst()<<" and "<<p3.getSecond()<<endl;

    return 0;
}


