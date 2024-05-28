#include <iostream>
using namespace std;

class remotlampu
{
private:
	string saklarNo[10];

public:
	void setSaklarNo(int i, string value)
	{
		saklarNo[i] = value;
	}
	string getSaklarNO(int i)
	{
		return saklarNo[i];
	}
};
