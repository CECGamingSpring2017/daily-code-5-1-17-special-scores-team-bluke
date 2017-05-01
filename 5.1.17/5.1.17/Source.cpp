#include <iostream>
#include <ctime>
using namespace std;


//string SPECIAL[5];

int main() {
	srand(time(NULL));
	int SPECIAL[5];
	

	for (int i = 0; i <= 4; i++) {
		SPECIAL[i] = rand() % 10;
	cout << SPECIAL[i];
	}
	

}