#include<iostream>
using namespace std;
template <typename T>
class Calculator
{
    private:
    T a;
    T b;
    public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add(T a, T b)
    {
        return a + b;
    }
    T subtract(T a, T b)
    {
        return a - b;
    }
    T multiply(T a, T b)
    {
        return a * b;
    }
};
int main()
{
    Calculator<int> calc1(10, 5);

    cout<<"Addition: "<<calc1.add(10, 5)<<endl;
    cout<<"Subtraction: "<<calc1.subtract(10, 5)<<endl;
    cout<<"Multiplication: "<<calc1.multiply(10, 5)<<endl;

    Calculator<double> calc2(6.76, 5.45);
    cout<<"Addition: "<<calc2.add(6.76, 5.45)<<endl;
    cout<<"Subtraction: "<<calc2.subtract(6.76, 5.45)<<endl;
    cout<<"Multiplication: "<<calc2.multiply(6.76, 5.45)<<endl;

    return 0;
}