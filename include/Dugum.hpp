/**
* @file Dugum.hpp
* @description Dugumun hpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
#include "Stack.hpp"
using namespace std;

class Dugum{
	public:
		int eleman;
		Stack *stck;
		Dugum *ileri;
		Dugum *geri;
		Dugum(int, Dugum*, Dugum*);
		Dugum(int&);
};
#endif
