#include <iostream>
#include "Money.h"
#include "Complex.h"

using namespace std;

int main() {
	Pair* m1 = new Money(1000, 123);
	Pair* m2 = new Money(10200, 55);
	Pair* res = new Money;
	res = *m1 - m2;
}