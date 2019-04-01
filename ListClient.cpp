#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

for (int i=0; i<10; i++)
{
	int x=1;
	L1.insertAt(x, i+1);
}

for (int i=0; i<10; i++)
{
	int x=2;
	L2.insertAt(x, i+1);
}

cout<< L1.getAt(3)<<" , ";
cout<< L2.getAt(2);
cout<< endl <<endl;
}
