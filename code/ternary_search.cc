///Ternary search. 
//Find maximum of function f in interval [l, r] with error at most EPS.
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

template <class func>
double ternary_search(long double l, long double r, long double EPS, func f) {
	while (r - l > EPS) {
   		double m1 = l + (r - l) / 3,
      		m2 = r - (r - l) / 3;
   		if (f (m1) < f (m2))
      			l = m1;
   		else
      			r = m2;
	}
	return (r + l) / 2;
}
