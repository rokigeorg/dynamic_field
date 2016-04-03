#include <iostream>
#include "DynamischesFeld.h"
#include "CString.h"


using namespace std;

int main() {
    CDynamischesFeld * p1 = new CDynamischesFeld(4);
    CDynamischesFeld * p2 = new CDynamischesFeld(3);
    CDynamischesFeld * p3 = new CDynamischesFeld(8);

    CString name1((char *)"Meier");
    CString name2((char *)"Schmidt");
    CString name3;

    name2 = name1;

    name3 = name2;
    name3.print();

    CString n4 = name1;
    n4.print();

    CString stringObj((char *) "Hello");

    stringObj.print();


    p1->fill();
    p2->fill(30);
    p3->fill(100);

    p1->ausgeben();
    cout <<endl;
    p2->ausgeben();
    cout <<endl;
    p3->ausgeben();
    cout <<endl;

    *p1 = *p2;
    p1->ausgeben();
    cout <<endl;
    p1->incrementLength();
    p1->ausgeben();
    cout <<endl;

    *p1 = *p3;
    p1->ausgeben();
    cout <<endl;
    p1->setLength(23);
    p1->ausgeben();
    cout <<endl;
    p1->setLength(3);
    p1->ausgeben();
    cout <<endl;
    system("pause");


    return 0;
}