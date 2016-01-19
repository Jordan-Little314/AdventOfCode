#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ifstream santaFloor;
	int floor = 0, position = 0;
	char parenthesis;
	santaFloor.open("in.txt");

	while (santaFloor.get(parenthesis))
	{
		position++;
		if (parenthesis == '(')
			floor++;
		else
			floor--;

		if (floor == -1)
		{
			cout << "-1 Floor: " << position << endl;
			break;
		}
	}

	cout << "Final floor Santa is on: " << floor << endl;
}