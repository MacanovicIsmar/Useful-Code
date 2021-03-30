//PriRed_Pov_sortirano

#pragma once
#pragma once
#include<iostream>
#include "Osoba.h"
#include "Cvor.h"
#include<string>



using namespace std;


template<class T>
struct PriRed_Pov_sortiano
{
	cvor<T>*Red = nullptr;
	cvor<T>*Pom = nullptr;
	cvor<T>*Pom2 = nullptr;
	void dodaj_na_kraj(T clan)
	{
		cvor<T>*novi = new cvor<T>(clan, nullptr);

		if (Red == nullptr)
		{
			
			Red = novi;
			novi = nullptr;
			return;

		}
		if (clan.prioritet > Red->info.prioritet)
		{

			novi->next = Red;
			Red = novi;
			return;


		}
		Pom = Red->next;
		Pom2 = Red;
		
		cout << "dodajem clan " << novi->info.ime << endl;
		cout << "prelistaj listu" << endl;
		while (Pom!=nullptr)
		{
			cout << novi->info.ime << " " << novi->info.prioritet << ">" << Pom->info.ime << " " << Pom->info.prioritet <<"?"<< endl;
			if (novi->info.prioritet > Pom->info.prioritet)
			{
				cout << "yes" << endl;
				novi->next = Pom;
				Pom2->next = novi;
			    return;
				
				
				
			}
			else
			{
				cout << "no" << endl;
				Pom2 = Pom;
				Pom = Pom->next;
				

			}
			cout << "T" << endl;

		}
		Pom2->next = novi;
		return;



	
	
	
	}
	void dodaj_na_kraj2(T clan)
	{
		cvor<T>*t=Red;
		cvor<T>*pt=nullptr;
		while (t != nullptr && t->info.prioritet > clan.prioritet)
		{
			pt = t;
			t = t->next;
		}
		cvor<T>*novi = new cvor<T>(clan, nullptr);

		if (pt == nullptr)
		{
			novi->next = t;
			Red = novi;
			return;
		}
		if (t == nullptr)
		{
			pt->next = novi;
			return;
		}

		pt->next = novi;
		novi->next = t;
		return;







	}
	T Ukloni_sa_pocetka()
	{
		if (Red == nullptr)
		{
			T temp;
			return temp;
		}



		T temp = Red->info;
		Pom = Red;
		Red = Red->next;
		delete Pom;
		return temp;

	
	
	
	
	}
	
	void ispis()
	{
		Pom = Red;
		while (Pom != nullptr)
		{

			cout << Pom->info.ime <<" "<< Pom->info.prioritet<< endl;
			Pom = Pom->next;


		}




	}
















};
