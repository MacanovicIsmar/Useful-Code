#pragma once
#include<iostream>
#include "Osoba.h"
#include "Cvor.h"
#include<string>



using namespace std;


template<class T>
struct PriRedSekv
{
private:
	int max_vel = 100;
	T *niz = new T[max_vel];
	int brojac = 0;
	



public:

	void dodaj_na_kraj(tip x)
	{
		if (jeli_pun())
		{
			prosiriniz();
			cout << "greska nije moguce dodati" << endl;
			return;
		}
		niz[brojac] = x;
		brojac++;



	}






	//-------------
	T getmember(int indeks)
	{
		T test;
		return test;

	}
	bool jeli_prazan()
	{
		return brojac == 0;

	}
	int getlistsize()
	{
		return 0;
	}

	//new functions 
	T Ukloni_sa_pocetka()
	{
		if (jeli_prazan())
		{
			cout << "red je pun" << endl;
			return T();
		}
		
		
		int maxvel = 0;
		int adresamax = 0;
		for (int i = 0; i < brojac; i++)
		{
			if (niz[i].prioritet > maxvel)
			{
				maxvel = niz[i].prioritet;
				adresamax = i;
					
			}



		}
		T temp = niz[adresamax];
		niz[adresamax] = niz[brojac - 1];

		brojac--;
		return temp;













	}
	
	bool jeli_pun()
	{

		return max_vel == brojac;

	}
	void prosiriniz()
	{
		T *temp = new T[max_vel * 2];

		for (int i = 0; i < max_vel; i++)
		{
			temp[i] = niz[i];
			


		}
		delete[]niz;
		niz = temp;
		max_vel = max_vel * 2;



	}
	void ispis()
	{
		for (int i = 0; i < brojac; i++)
		{
			cout << "ime: " << niz[i].ime << niz[i].prioritet<<endl;


		}


	}


};
