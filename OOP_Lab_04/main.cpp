#include<iostream>
#include <string>
#include "Vacation.h"
#include "Pass.h"

using namespace std;
void Sort(int *sum);

int main()
{
	
	Vacation **vacation = new Vacation*[4];
	vacation[0] = new Vacation("Italy", 10, 20, 10);
	vacation[1] = new Vacation("Germany", 14, 30, 20);
	vacation[2] = new Vacation("Spain", 7, 45, 15);
	vacation[3] = new Vacation("Ukraine", 20, 20, 7);

	int sum[4];
	int amount[4];

	for (int i = 0; i < 4; i++)
	{
		sum[i] = vacation[i]->CoustPass();
		cout <<"Cost of pass "<< vacation[i]->GetCountry() << " = "<< sum[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		amount[i] = vacation[i]->FullAmount();
		
		cout << "Amaunt cost of pass " << vacation[i]->GetCountry() << " = " << amount[i] << endl;
	}
	 Sort(sum);
	 Sort(amount);


	delete vacation[0];
	delete vacation[1];
	delete vacation[2];
	delete vacation[3];

	delete[] vacation;

	system("pause");
	return 0;
}

void Sort(int *sum)
{
	int  temp, item;
	for (int i = 1; i < 4; i++)
	{
		temp = sum[i];
		item = i - 1;
		while (item >= 0 && sum[item] > temp)
		{
			sum[item + 1] = sum[item];
			sum[item] = temp;
			item--;
		}
	}
}