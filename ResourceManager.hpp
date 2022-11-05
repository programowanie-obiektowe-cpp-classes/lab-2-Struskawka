#pragma once

#include "Resource.hpp"

class ResourceManager
{

private:

  Resource* res;

public:

  ResourceManager() {res=new Resource;}
  ~ResourceManager() {delete res;}




};


/*
//- jest właścicielem (czyt. zarządza) obiektu typu `Resource`
//- posiada metodę `double get()`, która zwraca wynik zawołania metody `get` obiektu, którym zarządza
//- posiada konstruktor domyślny, który inicjalizuje obiekt typu `Resource` tak, aby nie zarządzał żadnym zasobem
//- posiada 5 dobrze zdefiniowanych metod specjalnych
//- jest mała, tzn. mieści się na stosie

Masz daną klasę `Resource`, która:

- posiada konstruktor domyślny
- posiada 5 dobrze zdefiniowanych metod specjalnych
- posiada metodę o sygnaturze `double get()`
- jest duża, tzn. wartość `sizeof(Resource)` jest większa niż rozmiar stosu

Klasa ta symuluje duży, kosztowny w konstrukcji zasób.
Metoda `get` symuluje wykorzystanie takiego zasobu (np. pobranie wartości zmiennoprzecinkowej z serwera).
*/