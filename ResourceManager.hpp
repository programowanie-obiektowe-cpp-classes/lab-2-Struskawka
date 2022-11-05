#pragma once

#include "Resource.hpp"

class ResourceManager
{

private:

  Resource* res;

public:

    //- posiada konstruktor domyślny, który inicjalizuje obiekt typu `Resource` tak, aby nie zarządzał żadnym zasobem
    //- jest właścicielem (czyt. zarządza) obiektu typu `Resource`
  ResourceManager() {res=new Resource;}

    //$1 konstruktor kopiujący
  ResourceManager(const ResourceManager& rescop1) 
    { res=new Resource; *res=*rescop1.res;}
    
    //$2 kopiujący operator przypisania
  ResourceManager operator=(const ResourceManager& rescop2) 
    { if(this != &rescop2)
      {delete res; res=new Resource; *res=*rescop2.res;} 
      return *this;
    }

    //- posiada metodę `double get()`, która zwraca wynik zawołania metody `get` obiektu, którym zarządza
  double get()
    {return res->get();}

    //$5 destruktor
  ~ResourceManager() {delete res;}




};


/*
posiada 5 dobrze zdefiniowanych metod specjalnych:
$1 konstruktor kopiujący
$2 kopiujący operator przypisania
$3 konstruktor przenoszący
$4 przenoszący operator przypisania
$5 destruktor



Klasa ta symuluje duży, kosztowny w konstrukcji zasób.
Metoda `get` symuluje wykorzystanie takiego zasobu (np. pobranie wartości zmiennoprzecinkowej z serwera).
*/