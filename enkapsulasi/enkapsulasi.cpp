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

int main()
{
	remotlampu lampurumah;

	lampurumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampurumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampurumah.setSaklarNo(2, "Lampu Kamar Tidur");
	lampurumah.setSaklarNo(3, "Lampu Dapur");

	cout << lampurumah.getSaklarNO(0) << endl;
	cout << lampurumah.getSaklarNO(1) << endl;
	cout << lampurumah.getSaklarNO(2) << endl;
	cout << lampurumah.getSaklarNO(3) << endl;

	return 0;
}
