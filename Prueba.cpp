#include <iostream>
using namespace std;
int main(){
	unsigned long long iA;
	cin >> iA;
	if (iA % 2 == 1)
		cout << 0 << "\n";
	else
		cout << (iA/2-1)/2 << "\n";
	return 0;
}