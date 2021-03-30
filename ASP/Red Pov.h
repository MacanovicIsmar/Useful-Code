//Red Pov.h

#pragma once
#include<iostream>
#include "Osoba.h"
#include "Cvor.h"
#include<string>





using namespace std;


template<class T>
//typedef osobaS tip;
struct RedPov
{
	cvor<T>*RED = nullptr;
	cvor<T>*Pocetak = nullptr;
	cvor<T>*Kraj = nullptr;

	T Ukloni_sa_pocetka()
	{
		if (jeliprazan())
		{
			cout << "red je prazan" << endl;
			T test;
			return test;
		}
		//1korak pokazi na prvi 
		RED = Pocetak;

		//2.pomjeri pokazivac na drugi element 
		Pocetak = Pocetak->next;

		
		//3.vrati element i izbriso
		T X;
		X = RED->info;
		delete RED;
		RED = nullptr;
		
		
		
		
		
		
		
		
		if (Pocetak==nullptr)
		{
			Kraj = nullptr;
		}
		
		
		

		return X;
	}
	void dodaj_na_kraj(T X)
	{
		cvor<T>*Novi = new cvor<T>(X, nullptr);



		if (jeliprazan())
		{
			Kraj = Novi;
			Pocetak = Novi;
			RED = Novi;
			return;

		}

		Kraj->next = Novi;
		Kraj = Kraj->next;
		
		return;
		
	
	
	}
	void ispis()
	{
		RED = Pocetak;
		while (RED!= nullptr)
		{
			
			cout << RED->info.ime << endl;
			RED = RED->next;


		}
	
	
	
	
	}
	bool jeliprazan()
	{
		return Kraj == nullptr && Pocetak == nullptr;


	}

};
