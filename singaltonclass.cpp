#include<iostream>

using namespace std;

class demo
{
public :
	static demo obj;

	static demo& getref()
	{
		return obj;
	}

private:
	demo()
	{
		cout<<"Inside constructor";
	}
};

demo demo::obj;
int main()
{
	demo var = demo::getref();
	demo obj;
	return 0;
}

