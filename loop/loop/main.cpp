#include <iostream>
#include "LOOP.h"

using namespace std;
int main()
{
	int m = 0;
	while (cin >> m)
	{
		if (m < 1)
		{
			cout << "m<1 error input m " << endl;
			continue;

		}


		int n = 0;
		cin >> n;
		Loop loop;

		while (n < 1)
		{
			cout << "n<1 error input n " << endl;
			cin >> n;
		}

		for (int i = 0; i < n; i++)
		{
			int tmp = 0;
			cin >> tmp;
			loop.insert(i + 1, tmp);
		}
		while (loop.length())
		{
			int id = -1;
		    m=loop.pop(m,id);
			cout << id << " ";
		}

		cout << endl;
	}
}