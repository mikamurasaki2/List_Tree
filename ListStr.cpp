#include <iostream>
#include "list.h"
#include <vector>

int main()
{
	List list;
	for (int i = 0; i < 5; ++i) {
		list.insert(i);
	}
	list.printAll();
}

