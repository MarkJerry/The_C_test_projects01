#include <iostream>
using namespace std;
struct STU
{
	char NO[11];
	char Name[11];
	unsigned short age;
	char sex[3];
};

int DivFunc(int x, int y)
{
	if(y == 0)
	throw "exception have occourred\n";
	return x/y;

}
void setstuage(struct STU &stu, int age)
{
	if(age < 0 || age > 40)
		throw age;
	stu.age = age;
}

int main()
{
 struct STU stu;
 int x,y;
 cin >> x >> y;
 try
 {
 	int z = DivFunc(x,y);
	setstuage(stu,z);
 	
 }
 catch(char *e)
 {
 	cout << e << endl;
 }
 catch(int e)
 {
 	cout << e << endl;
 }
 return 0;
}


