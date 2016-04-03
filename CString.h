//
// Created by Georg Rokita on 29.03.16.
//

#ifndef VERKETTETELISTE_OOPBUCH_CSTRING_H
#define VERKETTETELISTE_OOPBUCH_CSTRING_H


class CString {

public:
    CString();
    CString(char *_txt);
    ~CString();

    void print();

    CString & operator=(CString _s);

private:
    char * pTxt;
    int len;

};


#endif //VERKETTETELISTE_OOPBUCH_CSTRING_H
