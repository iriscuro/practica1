#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /* <<<<<<<< 1er PARTE >>>>>>> */
    /* Ejercicio 1
    Un a~no es bisiesto si es divisible entre cuatro y (no es divisible entre
    100 o es divisible entre 400). Implemente un programa que evalue si un a~no es bisiesto.
    */
    /*
     int year;
       cout << " Ingresa la fecha(year): \n" ;cin>> year;
       if (year%4!= 0 ||(year%100==0 && year%400!=0))
            cout << " No es bisiesto "<< endl;
       else
        cout << " Es bisiesto " << endl;
    */

    /* Ejercicio 2
    Implementar un programa que solicite un numero entero N e imprima
    los numero pares desde el 1 hasta n separados por comas. OJO, despues del ultimo
    numero no debe imprimir la ','. Por ejemplo, para N = 10, debe imprimir: 2; 4; 6; 8; 10
    */
    /*
    int p = 1;
    cout << "Ingresa el numero : " << endl;
    cin >> p;
    cout << " Los numeros pares  menores son: \n" << (p-(p-2))  ;

    for (int n=3 ; n <=p; n++){

        if (n%2==0)
            cout << ", " << n;}

    */

    /* Ejercicio 3
    Implemente un programa que solicite un numero n e imprima los n
    numeros de la serie bonacci (No use la forma recursiva). Tenga en cuenta que f(0) = 1 y
    f(1) = 1.
    */
    /*
    int n=0,a=0,b=1,c=1;
    cout  << " Ingrese la cantidad: " << endl;
    cin >> n;
    cout << c;
    for(int i=1;i<n;i++){
        c = a + b;
        cout <<  " " << c ;
        a=b;
        b=c;

    }
    */

    /* Ejercicio 4
    Un numero perfecto es aquel numero el cual la suma de sus multiplos
    es igual al mismo numero. Por ejemplo: 6 es un numero perfecto, porque sus multiplos son:
    1; 2; 3 y 6 = 1 + 2 + 3.
    Implemente un programa que solicite un numero N e imprima los N numeros perfectos.
    */

    /*
    int cp=0;
    cout << " Cantidad de numeros perfectos: " << endl;
    cin >>  cp;

    int c=0,i=6;
    cout << i;
    while (c<cp-1){
        int d=0;
        i=i+1;
        for (int x=1;x<i-1;x++){
            if (i%x==0)
                d=d+x;
        }
        if(d==i){
            c=c+1;
            cout <<" "<< i6;}
    }

*/





    /*  Ejercicio 5
    La suma de los primos menores a 10 es 2 + 3 + 5 + 7 = 17.
    Encontrar la suma de todos los primos menores a 2 millones.

    */
/*
    long int v,c=0,suma=0;
    //v=10; //su suma es 5736396
    v=2000000;
    for (int n=1; n<=v; n++){
        for (int i=1; i<=n;i++){
            if(n%i==0)
                c++;}
        if (c==2){
            suma=suma+n;
            c=0;}
        else
            c=0;
    }
    cout << " La suma de los primos menores es: "<<suma << endl;
*/

   /*
    long int s=4;
    for(int i=3;i<p;i++){
        s=(pow(s,2)-2)%(pow(2,p)-1);
        if (s==0)
            cout <<(pow(2,p)-1)<<"es primo";
        else
            cout <<(pow(2,p)-1)<< " no es primo" ;
    }

*/
    /*<<<<< 2da PARTE >>>>>>
    */

    /* Ejercicio 1
    Si se imprimiera todos los
    numeros naturales menores que 10, los cuales sean multiplos de 3 o 5, obtendramos: 3; 5; 6; 9.
    La suma de estos multiplos es 23.
    Encontrar la suma de todos los multiplos de 3 o 5 menores a 1000.
    */
    /*
    int suma =0,num=0;
    cout << " Ingresa tu numero : "<<endl;
    cin >> num;
    for (int i=2;i<num ;i++){
        if(i%3==0 || i%5==0)
            suma=suma+i;

            }
    cout << " La suma de los muit.3 o mult.5 es: "<< suma<<endl;

    */

    /*  Ejercicio 2
    Implementar un programa que solicite un numero entero N e im-
    prima los numero impares desde el 1 hasta n separados por comas. OJO, despues del ultimo
    numero no debe imprimir la ','. Por ejemplo, para N = 10, debe imprimir: 1; 3; 5; 7; 9
    */
    /*
    int p = 1;
    cout << "Ingresa el numero : " << endl;
    cin >> p;
    cout << " Los numeros impares  menores son: \n" << (p-(p-1))  ;

    for (int n=2 ; n < p; n++){

        if (n%2==1)
            cout << ", " << n;

    */

    /* Ejercicio 3
    Implemente un programa que solicite un numero n e imprima todos
      los numero primos menores a n.
    */
    /*
    int v=0,c=0;
    cout << " Ingrese el numero mayor para los primos: " <<endl;
    cin >> v;
    for (int n=1; n<=v; n++){
        for (int i=1; i<=n;i++){
            if(n%i==0)
                c++;
        }
        if (c==2){
            cout << n<<"\t";
            c=0;}
        else
            c=0;

    }
    */


    /* Ejercicio 4
    Un numero perfecto es aquel numero el cual la suma de sus multiplos
    es igual al mismo numero. Por ejemplo: 6 es un numero perfecto, porque sus multiplos son:
    1; 2; 3 y 6 = 1 + 2 + 3.
    Implemente un programa que solicite un numero y evalue si dicho numero es un numero
    perfecto.
    */
    /*
    int num,o;

	cout << "Introduzca el numero para indentificarlo: "<< endl;
	cin >> num;

	for(int n=1; n<num; n++) {
        o=pow(2, n-1)*(pow(2, n)-1);
		if( num ==o){
			cout << num<< " El numero  es perfecto." << endl;
			break;}
			}

        if (o!=num)
            cout  << num<<" No es perfecto. "<<endl;


    */
    /* Ejercicio 5
    Los factores primos de 13195 son 5; 7; 13 y 29.
    >Cual es el mayor factor primo de 600851475143?
    */

/*
    int may=0, f,c;
    long long int n=600851475143;
    for (int i=2;i<=n;i++){
        if (n%i==0){
            n=n/i;
            f=i;
            cout << f<< endl;
            for (int n=1; n<=f; n++){
                for (int i=1; i<=n;i++){
                    if(n%i==0)
                        c++;
                        }
                if (c==2){
                    may=f;
                    c=0;}
                else
                    c=0;}}


        if (may<f)
            may=f;
    }
    cout << "El factor primo mayor es: "<< may <<endl;

*/
    return 0;
}
