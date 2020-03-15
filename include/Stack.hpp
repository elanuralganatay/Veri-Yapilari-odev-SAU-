/**
* @file Stack.hpp
* @description Stackın hpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#ifndef STACK_HPP
#define STACK_HPP

class Stack{
	private:
		int *elemanlar;
		int stackBasi;
		int elemanSayisi;
		int kapasite;
		
	public:
		Stack();
		bool isEmpty()const;
		const int& Max(const int&, const int&);
		void yerAc(int);
		void push(int &);
		void pop();
		const int& top()const;
		void makeEmpty();
		void Print();
		~Stack();
};
#endif
