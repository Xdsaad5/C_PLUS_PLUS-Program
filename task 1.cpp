#include <iostream>
using namespace std;
void getFood(int[][5], int);
void displayReport (int[][5], int);
int main()
{
	const int N = 3;
	int monkeyFood[N][5];
	getFood(monkeyFood, N);
	displayReport(monkeyFood, N);
	return 0;
}
void getFood(int food[][5], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter FOOD OF" << " " << i + 1 << " Monkey" << endl << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter FOOD OF" << " " << i + 1 << " Monkey for "<<j+1<< " days" << endl;
			cin >> food[i][j];
			for (; food[i][j] <= 0;)
			{
				cout<<"Eror...!!!"<<" Again Enter FOOD OF" << " " << i + 1 << " Monkey for " << j + 1
					<< " days" << endl;
				cin >> food[i][j];
			}
		}
	}
}
void displayReport(int report[][5], int size)
{
	int sum = 0, total, least, greatest;
	least = report[0][0];
	greatest = report[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (least > report[i][j])
			{
				least = report[i][j];
			}

			else if (greatest < report[i][j])
			{
				greatest = report[i][j];
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum = sum + report[i][j];
		}
	}
	total = size * 5;
	double avg = static_cast <double> (sum) / total;
	cout << "\nAverage Food Eaten by Monkeys" << " " << avg << endl;
	cout << "Least Food Eaten by Monkeys" << " " << least << endl;
	cout << "Greates Food Eaten by Monkeys" << " " << greatest << endl;
}