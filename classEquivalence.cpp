#include <iostream>

using namespace std;

int main()
{
	int list[11] = {-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4};

	for (int j = 0; j < 11; j++)
	{
		cout << "[" << list[j] << "] : { ";

		for (int i = 0; i < 11; i++)
		{
			//cout << 3 % ((list[j] * list[j]) - (list[i] * list[i])) << " ";

			if ((list[j] * list[j]) - (list[i] * list[i]) == 0)
			{

			}
			else if ((3 % ( (list[j] * list[j]) - (list[i] * list[i]) )) == 0)
			{
				cout << list[i] << " , ";
			}
		}

		cout << "}" << endl;
	}

	return 0;
}
