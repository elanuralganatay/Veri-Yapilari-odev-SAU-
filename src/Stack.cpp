/**
* @file Stack.cpp
* @description Stackın cpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#include "Stack.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


Stack::Stack(){
			elemanlar=NULL;
			stackBasi=-1;
			elemanSayisi=0;
			kapasite=0;
		}
const int& Stack::Max(const int& a, const int& b)
{
	return (((a) > (b)) ? (a) : (b));
}
void Stack::yerAc(int boyut)
{
	 int *tmp = new int[boyut];
	 for(int j=0;j<elemanSayisi;j++) tmp[j]= elemanlar[j];
	 if(elemanlar != NULL) delete [] elemanlar;
	 elemanlar = tmp;
	 kapasite = boyut;
}
bool Stack::isEmpty() const{
			return stackBasi == -1;
		}
void Stack::push(int &eleman){	
			if(isEmpty()){
				yerAc(Max(1,2*kapasite));
			}
			stackBasi++;
			elemanlar[stackBasi] = eleman;
			elemanSayisi++;
		}
void Stack::pop(){
			stackBasi--;
			elemanSayisi--;
		}
const int& Stack::top()const{
			return elemanlar[stackBasi];
		}
void Stack::makeEmpty(){
			stackBasi=-1;
			elemanSayisi=0;			
		}
void Stack::Print()
{
	for(int i = elemanSayisi-1; i >= 0 ; i--)
	{
		cout<<setw(5)<<elemanlar[i];
	}
	cout<<endl;
	
}
Stack::~Stack(){
	if(elemanlar != NULL) delete [] elemanlar;
	elemanlar=NULL;
}