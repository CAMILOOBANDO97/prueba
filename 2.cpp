#include <iostream>
#include <stdio.h>
#include <math.h>
using std::cout;
using std::endl;
//defino la función que me dice si los lados del triángulo son o no de un t.rectángulo
void es_un_t_rectangulo(int h, int a , int b);


int main()
{
    //llamo la función y pruebo el primer triángulo
    cout << "El triángulo con los lados 3, 4, 5 " << " ";
    es_un_t_rectangulo(5, 4 , 3);
    cout << "El triángulo con los lados 3, 4, 6 " << " ";
    es_un_t_rectangulo(6, 4 , 3);
    
}

//función que me dice si esa o no un t.rectangulo
void es_un_t_rectangulo(int h, int a , int b)
{
    if(pow(h,2) == pow(a,2) + pow(b,2)){
        cout << "Es un triángulo rectángulo" << endl;
    }
    else{
        cout << "No es un triángulo rectángulo" << endl;
    }
    
}