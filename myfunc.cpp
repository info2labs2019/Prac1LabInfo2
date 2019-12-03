#include<iostream>  //Llamado a librerias
#include<cstring>
#include"myfunc.h"

using namespace std;


void oper_1(void)
{
    string my_str = "Bienvenidos al laboratorio...";	 //Declaracion de una variable local
    cout << my_str << endl;
}

float oper_2(unsigned char radio)
{
    return PI*(float)radio*(float)radio;
}

void oper_3(void)
{
    cout << "Under construction...." << endl;
}