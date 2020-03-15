/**
* @file Dugum.cpp
* @description Dugumun cpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#include "Dugum.hpp"
#include "Stack.hpp"

Dugum::Dugum(int eleman, Dugum *ilr=NULL,Dugum *gr=NULL){
			this->eleman=eleman;
			ileri=ilr;
			geri=gr;
			stck = new Stack();
			stck->push(eleman);
		}
Dugum::Dugum(int& eleman){
	this->eleman=eleman;
	stck = new Stack();
	stck->push(eleman);
	ileri = NULL;
	geri = NULL;
}

