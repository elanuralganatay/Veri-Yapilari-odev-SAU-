/**
* @file Test.cpp
* @description Test dosyası
* @course 2A
* @assignment 2
* @date 01.12.2018
* @author ELANUR ALGANATAY elanur.alganatay1@ogr.sakarya.edu.tr  ESMA ÜLHÜSNA SIĞIRTMAÇ esmaulhusna.sigirtmac@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "CYListe.hpp"
using namespace std;
int main()
{
    system("CLS");
    int secim;
    CYListe *liste = new CYListe();
    liste->Dosya();

while(secim!=5)
    {
        cout << "1-Sola Hareket"<<endl;
        cout << "2-Saga Hareket"<<endl;
        cout << "3-Bir Dugumun Durumlarini Yazdir"<<endl;
        cout << "4-Tum Durumlari Yazdir"<<endl;
        cout << "5-Cikis"<<endl;
        cout << "Lutfen secim yapiniz:\n";
        cin >> secim;

            switch(secim)
            {
                case 1:
                    system("CLS");
                    liste->SolaKaydir();
                    break;
                case 2:
                    system("CLS");
                    liste->SagaKaydir();
                    break;
                case 3:
                    system("CLS");
                    liste->TekDurumuListele();
                    break;
                case 4:
                    system("CLS");
                    liste->TumDurumlariListele();
                    break;
                case 5:
                    delete liste;
                    exit(0);
                    break;
                default:
                    system("CLS");
                    cout << "YANLIS SECIM";
                    break;
            }
        }
    
    delete liste;
    system("pause");
    return 0;
}
