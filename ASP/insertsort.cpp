//insertsort

#pragma once
#include<iostream>

using namespace std;




int *insert_sort(int niz[],int velicina)
{
	//insertion sort 
	int j;
	int temp;

	//3,7,5,1,11,6,2,10,4,12,8,9


	for (int i = 1; i < velicina; i++)
	{
		j = i;

		while (j>0 && niz[j]<niz[j-1])
		{
			temp = niz[j];
			niz[j] = niz[j - 1];
			niz[j - 1] = temp;

			j--;
			for (int k = 0; k < velicina; k++)
			{
				cout << niz[k]<<" ";

			}
			cout << endl;



		}

		cout << "kraj for petlje" << endl;

	}
	return niz;














}
