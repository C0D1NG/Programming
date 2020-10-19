//Author Andrew P.


//Author Andrew Precious

/* Tips
 - C++ exceptions are expensive to execute, and therefore should never be
    used for control flow (only error handling).
 - C++ exceptions consume a lot of space in the executable,
  */


#include <iostream>
#include <exception>
using namespace std;

void test(int i)
{
	if (i == 42)
	{
		throw 42;
	}
}
int main()
{
	try {
		test(1);
		cout<<"Attempt #1 passed";
		
		test(42);
		cout<<"Attempt #2 passed";
	}
	catch(...)
	{
		cout<<"Exception error";
	}

	return 0;
}
