/*#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("student2.txt");
	if (!fin) {
		cout << "student2.txt. ���� ����" << endl;
		return 0;
	}

	char buf[81];
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}

	fin.close();
}
*/