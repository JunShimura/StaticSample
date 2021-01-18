#include <iostream>
#include <string>
using namespace std;

//int count = 0;	//globalならstaticになる
int counter(int a) {
	//int count = 0;	//autoなので消えてしまう
	static int count = 0;	//localだがstaticになる
	count += a;
	return count;
}

int main() {
	const int TIME = 5;
	for (int i = 0; i < TIME; i++) {
		static int n;
		cout << "数を入力";
		cin >> n;
		int ans =counter(n);
		cout << "結果=" << ans << endl;
	}

	return 0;
}