/**
* @file CYListe.cpp
* @description Çift yönlü dairesel bağlı listenin cpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "CYListe.hpp"
#include <fstream>
#include "Dugum.hpp"
using namespace std;

CYListe::CYListe()
{
    basDugum = NULL;
    sonDugum = NULL;
    lenght = 0;
    sayi = 0;
}

CYListe::~CYListe()
{
    Sil();
}
void CYListe::Ekle( int& veri)
{
    if(lenght == 0)
    {
        //basDugum = new Dugum(veri,basDugum,sonDugum);
        basDugum = new Dugum(veri);
        sonDugum = basDugum;
        basDugum->eleman=veri;
        basDugum->ileri = sonDugum;
        basDugum->geri = sonDugum;
        lenght++;
    }
    else
    {
       // Dugum *tmp = new Dugum(veri, basDugum,sonDugum);
        Dugum *tmp = new Dugum(veri);
        sonDugum->ileri = tmp;
        tmp->geri=sonDugum;
        basDugum->geri = tmp;
        tmp->ileri=basDugum;
        sonDugum = tmp;
        lenght++;

    }
}
void CYListe::Dosya()
{
    try
    {
        fstream file;
        file.open("./doc/Sayi.txt");
        if(file.is_open())
        {
            while(file>>sayi)
            {
                Ekle(sayi);
            }
        }
        file.close();
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
}
void CYListe::Sil()
{
    Dugum* iter;
	Dugum* tmp = basDugum;
	
    for(int i = 0; i<lenght;i++)
	{
		iter = tmp;
		tmp = tmp->ileri;
		delete iter;
	}
	
	lenght = 0;
}
bool CYListe::Bosmu()
{
    return basDugum==sonDugum;
}
void CYListe::SolaKaydir()
{
    Dugum *tmp = basDugum->ileri;
    int deg = basDugum->eleman;
    do
    {
        tmp->geri->eleman = tmp->eleman;
        tmp->geri->stck->push(tmp->eleman);
        tmp = tmp->ileri;
    } while (tmp != basDugum);
     tmp->geri->eleman = deg;
     tmp->geri->stck->push(deg);
}
void CYListe::SagaKaydir()
{
    Dugum *tmp = sonDugum->geri;
    int deg = sonDugum->eleman;
    do
    {
        tmp->ileri->eleman = tmp->eleman;
        tmp->ileri->stck->push(tmp->eleman);
        tmp = tmp->geri;
    } while (tmp != sonDugum);
     tmp->ileri->eleman = deg;
     tmp->ileri->stck->push(deg);
}
void CYListe::TumDurumlariListele()
{
    Dugum *tmp = basDugum;
    do
    {
        cout <<setw(7)<< tmp->eleman<< setw(7)<<":";
        tmp->stck->Print();
        tmp=tmp->ileri;
    } while (tmp != basDugum);
      

}
void CYListe::TekDurumuListele()
{
    int konum = 0;
    int iter = 0;
    cout << "Konum Giriniz:";
    cin>>konum;
    Dugum *tmp = basDugum;
    while(true)
    {
        if(iter == konum)
        {
            cout<<setw(7)<<tmp->eleman<<":";
            tmp->stck->Print();
            break;
        }
        else
        {
            tmp = tmp->ileri;
            iter ++;
        }
    }
}