#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, sum;
	vector <int> v;

	while (1) {
		cin >> n;

		if (n == -1)
			break;

		sum = 0;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				sum += i;
			}
		}

		if (n == sum) {
			cout << n << " = ";

			for (int i = 0; i < v.size() - 1; i++) {
				cout << v[i] << " + ";
			}
			cout << v.back() << '\n';
		}
		else
			cout << n << " is NOT perfect.\n";
		v.clear();
		v.resize(0);
	}
}