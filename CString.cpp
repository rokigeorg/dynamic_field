//
// Created by Georg Rokita on 29.03.16.
//

#include <string.h>
#include <iostream>
#include "CString.h"

CString::CString() :
        len(0),
        pTxt(NULL)
{}

CString::~CString() {
    delete pTxt;
}


CString::CString(char *_txt) {

    size_t size = strlen(_txt);
    len = (int)size;
    pTxt = new char[len+1];

    for(int i=0; i < len; i++)
        pTxt[i] = _txt[i];

    pTxt[len+1] = '\0';
}

void CString::print() {

    for(int i=0; i < len; i++)
        std::cout << pTxt[i];
    std::cout << std::endl;

}

CString & CString::operator=(CString _s) {

    len = strlen(_s.pTxt);
    delete this->pTxt;
    pTxt = new char[len+1];
    for(int i=0; i<len; i++){
        pTxt[i] = _s.pTxt[i];
    }
    pTxt[len+1] = '\0';

    return *this;
}
