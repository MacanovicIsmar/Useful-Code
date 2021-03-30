//Red Sekv.h

#pragma once
#pragma once
#include<iostream>
#include "Osoba.h"
#include<string>





using namespace std;


template<class T>
//typedef osobaS tip;
struct RedSekv 
{
private:
	int max_vel = 100;
	T *niz = new T[max_vel];
	int brojac = 0;
	int pocetak = 0;
	int kraj = 1;

	

public:
	
	
	
	
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

			return T();
		}



		brojac--;
	    T x = niz[pocetak];
		pocetak++;

		
		if (pocetak == max_vel)
		{
			pocetak = 0;
		}
		return x;

		
		/*for (int i = 0; i <brojac - 1; i++)
		{
		niz[i] = niz[i + 1];


		}*/
	}
	void dodaj_na_kraj(T x)
	{
		if (jeli_pun())
		{
			prosiriniz();
			cout << "greska nije moguce dodati" << endl;
			return;
		}
		niz[kraj] = x;
		brojac++;
		kraj++;
		if (kraj == max_vel)
		{
			kraj = 0;
		}




		/*for (int i = brojac; i>0; i--)
		{
		niz[i] = niz[i - 1];




		}*/

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
		for (int i = pocetak; i < kraj; i++)
		{
			cout << "ime: " << niz[i].ime << endl;


		}


	}


};
