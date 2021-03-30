#include<iostream>
using namespace std;







int main()
{
	int myArray[2][3] = { { 1,2,3 },{ 4,5,6} };
	int myArray2[2][5] = { { 0,0,0,0,0 },{ 0,0,0,0,0 }};

	cout << "prva matrica" << endl;
	//ispis prve matrice
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << myArray[i][k]<<" ";


		}

		cout << endl;


	}
	cout << "Druga matrica kopiranja" << endl;

	int a = 0; //pomocni brojac

	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			for (int k = 0; k < 5; k++)
			{

				if (a > 2)
				{
					a = 0;
					myArray2[i][k] = myArray[i][a];
				}
				else
				{

					myArray2[i][k] = myArray[i][a];

				}
				a++;
				cout << myArray2[i][k] << " ";


			}
		}
		a = 0;
		if (i == 1)
		{
			for (int k = 0; k < 5; k++)
			{

				if (a > 2)
				{
					a = 0;
					myArray2[i][k] = myArray[i][a];
				}
				else
				{

					myArray2[i][k] = myArray[i][a];

				}
				a++;
				cout << myArray2[i][k] << " ";


			}
		}





		cout << endl;


	}
		
			
	cout << "druga matrica" << endl;
	//ispis prve matrice
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			cout << myArray2[i][k] << " ";


		}

		cout << endl;


	}



	system("pause");


	return 0;
}
