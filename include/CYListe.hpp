/**
* @file CYListe.hpp
* @description Çift yönlü dairesel bağlı listenin hpp dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#ifndef CYLISTE_HPP
#define CYLISTE_HPP
#include "Dugum.hpp"
#include <iostream>
#include <iomanip>

using namespace std;
class CYListe
{
    public:
        CYListe();
        ~CYListe();
        void Ekle(int&);
        void Dosya();
        void Sil();
        bool Bosmu();
        void SagaKaydir();
        void SolaKaydir();
        void TumDurumlariListele();
        void TekDurumuListele();
    private:
        Dugum *basDugum;
        Dugum *sonDugum;
        int lenght;
        int sayi;

};
#endif