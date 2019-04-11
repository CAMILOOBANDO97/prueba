#include <iostream>
#include <stdio.h>
#include <math.h>
using std::cout;
using std::endl;
#define PI 3.14159f;

int main()
{
    //Declara variables
    float radio;
    float diametro;
    float perimetro;
    float area;
    
    
    
    //Se pide al usuario el radio y se gurda
    printf("Por favor, intruduzca el radio: ");
    scanf("%f", &radio);
        
    //Se devuelve el diámetro, perímetro y áres
    diametro = 2*radio;
    printf("El diámetro es: %f\n", diametro);
    
    perimetro = 2*radio*PI;
    printf("El perímetro es: %f\n", perimetro);
    
    area = pow(radio, 2)*PI;
    printf("El área es: %f\n", area);
}