#include <iostream>
#include <string>
using namespace std;

//int count = 0;	//global�Ȃ�static�ɂȂ�
int counter(int a) {
	//int count = 0;	//auto�Ȃ̂ŏ����Ă��܂�
	static int count = 0;	//local����static�ɂȂ�
	count += a;
	return count;
}

int main() {
	const int TIME = 5;
	for (int i = 0; i < TIME; i++) {
		static int n;
		cout << "�������";
		cin >> n;
		int ans =counter(n);
		cout << "����=" << ans << endl;
	}

	return 0;
}