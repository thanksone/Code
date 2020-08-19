#include<iostream>
#include<math.h>
using namespace  std;

int main(int argc, char** argv) {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	int h = (b * b) - (4 * a * c);
	if (h > 0) {
		cout << "Two different roots";
		h = sqrt(h);
		d = (-1 * b + h) / (2 * a);
		e = (-1 * b - h) / (2 * a);
		if (d > e) {
			cout << " x1=" << d << " , x2=" << e;
		}
		else {
			cout << " x1=" << e << " , x2=" << d;
		}
	}
	else if(h == 0){
		cout << "Two same roots";
		d = (-1 * b) / (2 * a);
		cout << " x=" << d;
	}
	else if(h < 0){
		cout << "No real root";
	}
}
