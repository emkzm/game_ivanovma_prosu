#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> words = {"Hello", "Maximus", "I", "Love", "Mironov", "&", "Sakhno"};
	float kills = 1.2f;
	for (int i=0; i<100; i++) {
		cout << words[i % words.size()] << endl;
		kills *= 1.742f;
		cout << "I would kill Sakhno " << kills << " times!" << endl;
	}
	return 0;
}