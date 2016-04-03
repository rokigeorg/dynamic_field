//#include "StdAfx.h"
#include <stddef.h>
#include <iostream>
#include "DynamischesFeld.h"


CDynamischesFeld::CDynamischesFeld(void)
	: size(0)
	, first(NULL)
{}


CDynamischesFeld::~CDynamischesFeld(void) {
	delete[] first;
}


CDynamischesFeld::CDynamischesFeld(int _size) {
	size = _size;
	first = new double[size];
	for (int i = 0; i < size; i++)
		// *(first + i) = 0;
		first[i] = 0;
}

void CDynamischesFeld::setLength(int _newSize) {
	double *ptr;
	ptr = new double[_newSize];
	if (size <= _newSize) {
		// Feld wird vergrossert
		for (int i = 0; i < size; i++)
			ptr[i] = first[i];
		for (int k = size; k < _newSize; k++)
			ptr[k] = 0;
	}
	else
		// Feld wird verkleinert
		for (int i = 0; i < _newSize; i++)
			ptr[i] = first[i];
	// altes Feld l�schen
	delete[] first;
	first = ptr;
	// neuen Wert f�r size setzen
	size = _newSize;
}


void CDynamischesFeld::incrementLength(void) {
	double * ptr;
	ptr = new double[size+1];
	for (int i = 0; i < size; i++)
		ptr[i] = first[i];
	ptr[size] = 0;
	// size anpassen
	size++;
	// altes Feld l�schen
	delete[] first;
	first = ptr;
}


CDynamischesFeld & CDynamischesFeld::operator=(const CDynamischesFeld & _feld) {
    // damit eine Kopie in sich selbst vermieden wird ...
	if (this != &_feld){
        // Speicherplatz f�r zu kopierende Werte schaffen
		double * ptr = new double[_feld.size];
        // Elemente des �bergebenen Feldes kopieren
		for(int i=0; i < _feld.size; i++)
			ptr[i] = *(_feld.first + i);
        // bisherigen Speicherplatz auf den startptr zeigt freigeben
		delete [] first;
        size = _feld.size;		// Attribut size kopieren
        // mit first auf kopierte Daten zeigen
		first = ptr;
    } // endif
    return *this;

}


void CDynamischesFeld::fill(int start) {
	for(int i=0; i < size; i++)
		first[i] = (double) (start+i);

}


void CDynamischesFeld::ausgeben(void) const {
	for (int i = 0; i < size; i++)
		std::cout <<first[i] <<std::endl;
}
