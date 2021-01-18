#include <iostream>
#include <string>
using namespace std;

class Counter {
private:
	static int count;
public:
	int countAdd(int a) {
		count += a;
		return count;
	}
	Counter() {
		count = 0;
	}
};
int Counter::count = 0;


int main() {
	const int TIME = 5;
	Counter counterA;
	Counter counterB;

	for (int i = 0; i < TIME; i++) {
		int n,ans;
		cout << "A‚É”‚ğ“ü—Í";
		cin >> n;
		ans = counterA.countAdd(n);
		cout << "A=" << ans << endl;
		cout << "B‚É”‚ğ“ü—Í";
		cin >> n;
		ans = counterB.countAdd(n);
		cout << "B=" << ans << endl;
	}

	return 0;
}