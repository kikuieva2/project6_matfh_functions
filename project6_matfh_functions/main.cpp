#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//definçjam mainîgos
	double z1;
	double z2;
	double alpha;
	double secSin;
	double firstCos;
	double secCosinus;
	double tang;
	double secTang;
	double res;
	double res2;
	double secpow;
	double base;
	double exponent;
	double sqrtNum;
	double thirdRes;
	const float PI = 3.14159265358979323846;
	cout << "Enter the first angle(in radians, z1): ";
	cin >> alpha;
	cout << "Enter second angle (in radians,z2): ";
	cin >> secSin;
	double rad1 = alpha * (PI / 180.0);
	/*double rad2 = secSin * (PI / 180.0);*/
	z1 = pow(cos((3.0 / 8.0) * PI - (alpha / 4.0)), 2) - pow(cos((11.0 / 8.0) * PI + (alpha / 4.0)), 2);
	z2 = (sqrt(2) / 2) * sin(secSin);
	cout << "Result z1: " << z1 << endl;
	cout << "Result z2: " << z2 << endl;
	cout << "Enter the cos (in radians,z1):";
	cin >> firstCos;
	cout << "Enter the cos(in radians,z2):";
	cin >> secCosinus;
    double firstCosrad = firstCos * (PI / 180.0);
    double secCosRad = secCosinus * (PI / 180.0);
	double firstcosValue = cos(firstCos);
	double secCosValue = cos(secCosinus);
	/*double firstcosValue = cos(firstCosrad);
	double secCosValue = cos(secCosRad);*/
	cout << "Cosinus of: " << firstCos << " radian (z1) is: " << firstcosValue << endl;
	cout << "Cosinus of: " << secCosinus << " radian (z2) is: " << secCosValue << endl;
	cout << "Enter first tangen: ";
	cin >> tang;
	cout << "Enter the sec tangen:";
	cin >> secTang;
	res = tan(tang);
	res2 = tan(secTang);
	cout << "Tangens of: " << tang << " radian (z1) is: " << res << endl;
	cout << "Tangens of : " << secTang << " radian (z2) is: " << res2 << endl;
	cout << "Enter firstNum for base: ";
	cin >> base;
	cout << "Enter secNum for exponent: ";
	cin >> exponent;
	secpow = pow(base, exponent);
	cout << base << " raised to the power of exponent " << exponent << " is "<< secpow << endl;
	cout << "Enter the first sqr: ";
	cin >> sqrtNum;
	thirdRes = sqrt(sqrtNum);
	cout << " The sqrt of firstNum is: " << sqrtNum << " is: " << thirdRes << endl;
	double firstCot = 1 / tan(firstCosrad);
	double secCos = 1 / firstcosValue;
	double secCot = 1 / tan(secCosRad);
	double secSec = 1 / (secCosValue);
	cout << " Contanget of: " << firstCos << " degrees (z1) is: " << firstCot << endl;
	cout << " Secant of: " << firstCos << " degrees (z1) is: " << secCos << endl;
	cout << " Contanget of: " << secCosinus << " degrees (z2) is: " << secCot << endl;
	cout << " Secant of: " << secCosinus << " degrees (z2) is: " << secSec << endl;
	return 0;
}