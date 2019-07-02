#include <iostream>
using namespace std;
int DivFunc(int x, int y)
{
	double ret;
	if(y==0)
	{
	cout << "%n exception happenning!!%n"<<endl;
	throw "excption has occurred!";
	cout << "%n exception!!!%n"<<endl;}
	return x/y;

}
int main()
{
	int a, b,ret;
	cin >> a >> b;
	ret = DivFunc(a,b);
	cout << " " << ret << endl;
	return 0;
}
