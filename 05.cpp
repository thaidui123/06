
#include <iostream>
using namespace std;
int tinhtong (int so1, int so2) {

	return so1 + so2;
}

using namespace std;
int tinhhieu(int so1, int so2) {

	return so1 - so2;
}

using namespace std;
int tinhtich(int so1, int so2) {

	return so1 * so2;
}

using namespace std;
float tinhthuong(float so1, float so2) {

	return so1 / so2;
}


int main() {
	int so1, so2, tong;
	cout << "chuong trinh tinh tong 2so\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu hai:";
	cin >> so2;
	tong = tinhtong(so1, so2);
	cout << so1 << "+" << so2 << " = " << tong << endl;
	tong = tinhhieu(so1, so2);
	cout << so1 << "-" << so2 << " = " << tong << endl;
	tong = tinhtich(so1, so2);
	cout << so1 << "*" << so2 << " = " << tong << endl;
	tong = tinhthuong(so1, so2);
	cout << so1 << "/" << so2 << " = " << tong << endl;
	if (so2 != 0) {
		tong = (float)so1 / so2;
		cout << so1 << "/" << so2 << " = " << tong << endl;
	}
	else
	{
		cout << "khong the chia" << so1 << "cho 0\n"

	}



	return 0;
}
}




