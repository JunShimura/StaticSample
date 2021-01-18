#include <iostream>
#include <string>
using namespace std;

//int count = 0;	//global‚È‚çstatic‚É‚È‚é
int counter(int a) {
	//int count = 0;	//auto‚È‚Ì‚ÅÁ‚¦‚Ä‚µ‚Ü‚¤
	static int count = 0;	//local‚¾‚ªstatic‚É‚È‚é
	count += a;
	return count;
}

int main() {
	const int TIME = 5;
	for (int i = 0; i < TIME; i++) {
		static int n;
		cout << "”‚ğ“ü—Í";
		cin >> n;
		int ans =counter(n);
		cout << "Œ‹‰Ê=" << ans << endl;
	}

	return 0;
}