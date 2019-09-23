/*
PRACTICA 1_SUMA Y RESTA
YESCAS JACOBO JOSE CARLOS
1AV6*/
#include<stdlib.h>
#include<conio.h>
int main (){
int opt;
printf ("1.-Suma\n");
printf ("2.- Resta\n");
printf ("3.- Multiplicar\n");
printf ("Introduce la opcion\n ");

scanf("%d",&opt);
int a;
int b,c;
printf ("Introduce la primera cantidad:\n");
scanf ("%d",&a);
printf ("Introduce la 2 cantidad:\n");
scanf ("%d",&b);

if(opt==1){
c=a+b;
}
else if(opt==2){
c=a-b;
}
else if(opt==3){
c=a*b;
}
printf ("El resultado es: %d",c);
}
