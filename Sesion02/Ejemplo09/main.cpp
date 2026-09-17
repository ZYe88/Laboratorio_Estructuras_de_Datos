#include <iostream>
using namespace std;

void machaca1(int x, int* y) {
	*y = x;
	return;
}

void machaca2(int x, int& y) {
	y = x;
	return;
}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Escribe dos datos enteros: " << endl;
	cin >> a >> b;
	int copia = b;
	cout <<  << endl;
}
