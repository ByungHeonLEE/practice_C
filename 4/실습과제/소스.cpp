#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>

using namespace std;

int generateRandomNumberInRange(int min, int max)
{
	/* Implement: generate random number in range*/
	return rand() % (max - min + 1) + min;
}

void printMatrix(const vector<vector<int>> &mat)
{
	/* Implement: print matrix */
}

void addTwoMatrices()
{
	/* Implement: define and add two matrices, and print the result */
}

void multiplyTwoMatrices()
{
	/* Implement: define and multiplly two matrices, and print the result */
}

int main()
{
	srand(time(NULL));
	/* Implement: create menu */
	while (1)
	{
		printf("A: add\nM: multiply\nE: end\n");
		char x;
		cin >> x;
		if (x == 'e' || x == 'E')
			break;
		else if (x == 'a' || x == 'A')
			addTwoMatrices();
		else if (x == 'm' || x == 'M')
			multiplyTwoMatrices();
		else
			cout << 'wrong!' << endl;
		continue;
	}

	return 0;
}