#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{

    complex<double>z(3, 4);
    complex<double>z1(5, 12);
    complex<double>z2(3, 4);

    cout << "z(3,4)   z1(5,12)   z2(3,4)" << endl;
    cout << "The real part is " << real(z) << "\n";
    cout << "The imaginary part is " << imag(z) << "\n";
    cout << "Complex conjugate part is " << conj(z) << "\n";
    cout << "Magnitude is " << abs(z) << "\n";
    cout << "Squared is " << pow(z, 2.0) << "\n";
    cout << "Phase angle of complex is " << arg(z) << "\n";
    cout << "calculate of z1 and z2 are= " << z1 + z2 << "\n";
    cout << "multiplication of z1 and z2 are= " << z1 * z2 << "\n";

    return 0;
}
