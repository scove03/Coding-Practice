#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	string s;

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> s;
		cout << s.front() << s.back() << "\n";
	}
}