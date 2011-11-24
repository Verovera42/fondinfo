/*
 * Example used in programming courses at University of Parma, IT.
 * Author: Michele Tomaiuolo - tomamic@ce.unipr.it - 2010
 *
 * This is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License, version 3 or
 * later. See <http://www.gnu.org/licenses/>.
 */

#include <iostream>

using namespace std;

/* Proof. Since n is composite, n = d*e for some natural numbers d and e which are not zero and not units. If both of them are greater than sqrt(n), then n = d*e > sqrt(n)*sqrt(n) = n, so n>n, contradiction. So d or e is <= sqrt(n). */

int main(int argc, char *argv[])
{
    int n, d = 2;
    cin >> n;

    for (d = 2; d < n/2 && n%d != 0; ++d) { }
	
    if (n % d != 0) {
        for (d = 3; d*d <= n && n%d != 0; d += 2);
    }

    if (n % d == 0 && n != 2) {
        cout << "The number is divisible by " << d << endl;
    } else {
        cout << "The number is prime" << endl;
    }

    return 0;
}