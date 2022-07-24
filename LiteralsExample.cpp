// C++ program to demonstrate UDL with constexpr
#include <complex>
#include <iostream>
using namespace std;

// imaginary literal
constexpr complex<double> operator"" _i(long double d) {
	
	return complex<double>{ 0.0, static_cast<double>(d) };

}

// Driver code 
int main() {
	
	// Def var complex
	complex<double> z = 3.0 + 4.0_i;
	complex<double> y = 2.3 + 5.0_i;
	
	// Printing sum of x and y
	cout << "z + y = " << z + y << endl;
	
	return 0;

} // End driver