#include<iostream>
using namespace std;
template <typename T>
void findMin(T a, T b)
{
    if(a < b)
	{
    	cout<<a<<" is minimum"<<endl;
	}
	else{
		cout<<b<<" is minimum"<<endl;
	}
}
int main()
{
    findMin(5, 10);
    findMin(3.14, 2.71);
    findMin('z', 'f');
    return 0;
}
