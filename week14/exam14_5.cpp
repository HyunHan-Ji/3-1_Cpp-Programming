/*#include <iostream>
#include <fstream>
using namespace std;

int main() {
	struct Score {
		int number;
		char name[30];
		int score;
	} grades[] = { {20200001,"홍길동",100},
					{20200002,"김유신",90},
					{20200003,"강감찬",80} };
	ofstream os;
	os.open("test.dat", ofstream::binary);
	if (os.fail())
	{
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}
	os.write((char *)&grades, sizeof(grades));
	os.close();
	return 0;
}
*/