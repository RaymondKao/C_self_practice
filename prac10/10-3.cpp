#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int draw() {
	int a;
	a = (rand() % 46) + 1;
	return a;
}

int main() {
	srand(time(NULL));
	int result[7] = { 0 }, count = 0;
	bool check[46] = { 0 };
	for (int i = 0; i < 7; i++) {
		result[i] = draw();
		check[result[i]] = { 1 };
		count++;
		if (check[result[i]]) {
			result[i] = draw();
		}
		cout << ((count == 1) ? "" : " ") << result[i];
	}

	system("pause");
	return 0;
}