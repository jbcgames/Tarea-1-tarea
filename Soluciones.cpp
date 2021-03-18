#include <iostream>
#include "operacionesextra.cpp"

using namespace std;
int primer()
{
    int a,b;
    cout<<"digite el primer numero"<<endl;
    cin>>a;
    cout<<"digite el segundo numero"<<endl;
    cin>>b;
    cout<<"El residuo de los dos numeros es: "<<a%b<<endl;
    return 0;
}
int segundo(){
    int N;
    cout<<"Ingrese un numero"<<endl;
    cin>>N;
    if(N%2==0){
        cout<<N<<" Es par."<<endl;
        return 0;
    }
    cout<<N<<" Es impar"<<endl;
    return 0;

}
int tercero(){
    int a,b;
    cout<<"digite el primer numero"<<endl;
    cin>>a;
    cout<<"digite el segundo numero"<<endl;
    cin>>b;
    if (a>b){
        cout<<a<<" Es el mayor"<<endl;
    }else if(b>a){
        cout<<b<<" Es el mayor"<<endl;
    }else
        cout<<"Son iguales"<<endl;
    return 0;
}
int cuarto(){
    int a,b;
    cout<<"digite el primer numero"<<endl;
    cin>>a;
    cout<<"digite el segundo numero"<<endl;
    cin>>b;
    if (a>b){
        cout<<b<<" Es el menor"<<endl;
    }else if(b>a){
        cout<<a<<" Es el menor"<<endl;
    }else
        cout<<"Son iguales"<<endl;
    return 0;
}
int quinto(){
    int a,b;
    cout<<"digite el primer numero"<<endl;
    cin>>a;
    cout<<"digite el segundo numero"<<endl;
    cin>>b;
    cout<<a<<"/"<<b<<"="<<a/b<<endl;
    return 0;
}
int sexto(){
    double a,b,i,d;
    cout<<"digite el numero"<<endl;
    cin>>a;
    int c=a;
    cout<<"digite la potencia"<<endl;
    cin>>b;
    if (b<0){
        d=b;
        b=abs(b);
    }
    if (b==0){
        cout<<"el resultado es: 1"<<endl;
        return 0;
    }
    for(i=1;i<=b-1;i++){
        if (i==b){
        }
        a=a*c;
    }
    if (d<0){
        a=1/a;
    }
    cout<<"el resultado es: "<<a<<endl;
    return 0;
}
int septimo(){
    int a,b,c;
    c=0;
    cout<<"ingrese un numero"<<endl;
    cin>>a;
    for(b=1;b<=a;b++){
       c=c+b;
    }
    cout<<"La sumatoria desde 0 hasta "<<a<<" es: "<<c<<endl;
    return 0;
}
int octavo(){
    double a,b,c;
    cout<<"Ingrese un numero"<<endl;
    cin>>a;
    c=1;
    for(b=1;b<=a;b++){
        c=b*c;
    }
    cout<<a<<"!="<<c<<endl;
    return 0;
}
int noveno(){
    double a;
    float pi=3.1416;
    cout<<"digite el numero"<<endl;
    cin>>a;
    cout<<"Area="<<pi*a*a<<endl;
    cout<<"Perimetro="<<2*pi*a<<endl;
    return 0;
}
int decimo(){
    int a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    cout<<endl;
    for(b=a;b<=100;b=b+a){
            cout<<b<<endl;
        }

    return 0;
}
int onceavo(){
    double a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    cout<<endl<<"La tabla es:"<<endl;
    for(b=1;b<=10;b++){
        cout<<a<<"x"<<b<<"="<<a*b<<endl;
    }
    return 0;
}
int doceavo(){
    int a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    for(b=1;b<=5;b++){
        cout<<a<<"^"<<b<<"="<<potencia(a,b)<<endl;
    }
    return 0;
}
int treceavo(){
    int a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    cout<<"Los divisores de "<<a<<" son:"<<endl;
    for(b=a;b>0;b=b-1){
        if(a%b==0){
            cout<<b<<endl;
        }

    }

    return 0;
}
int catorceavo(){
    int a,b=0;
    for(a=50;a>=1;a=a-1){
        b++;
        cout<<b<<"   "<<a<<endl;
    }
    return 0;
}
int quinceavo(){
    int a=1,b=0;
    while(a!=0){
        cout<<"Ingrese Un numero"<<endl;
        cin>>a;
        b=a+b;
    }
    cout<<"El resultado de la sumatoria es: "<<b<<endl;
    return 0;
}
int dieciseisavo(){
    int a=1,b=0,c=0;
    while(a!=0){
        cout<<"Ingrese Un numero"<<endl;
        cin>>a;
        b=a+b;
        c++;
    }
    cout<<"El promedio es: "<<b/(c-1)<<endl;
    return 0;
}
int diecisieteavo(){
    long double a=1,b=-2993759782425618241;
    while(a!=0){
        cout<<"Ingrese Un numero"<<endl;
        cin>>a;
        if(a>b){
            b=a;
        }
    }
    cout<<"El numero mas grande es: "<<b<<endl;
    return 0;
}
int dieciochoavo(){
    int a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    for(b=1;b<=a;b++){
        if (b*b==a){
            cout<<"El numero "<<a<<" es un cuadrado perfecto"<<endl;
            return 0;
        }
    }
    cout<<"El numero "<<a<<" no es un cuadrado perfecto"<<endl;
    return 0;
}
int diecinueveavo(){
    int a,b;
    cout<<"digite el numero"<<endl;
    cin>>a;
    a=abs(a);
    if(a==0){
        cout<<"El numero "<<a<<" no esta definido si es primo o no"<<endl;
        return 0;
    }
    for(b=2;b<=a-1;b++){
        if(a%b==0){
            cout<<"El numero "<<a<<" no es primo"<<endl;
            return 0;
        }
    }
    cout<<"El numero "<<a<<" es primo"<<endl;
    return 0;
}
int veintiavo(){
    int a,b,c=0;
    cout<<"digite el numero"<<endl;
    cin>>a;
    b=a;
    while(a>0){
    c=c * 10 + (a % 10);
    a = a / 10;
    }
    if(b==c){
        cout<<b<<" es un numero palindromo"<<endl;
    }else{
        cout<<b<<" no es un numero palindromo"<<endl;
    }
    return 0;

}
int veintiunavo(){
    char a;
    cout<<"ingrese la letra"<<endl;
    cin>>a;
    if(int(a)>=97){
        cout<<char(a-32)<<endl;
        return 0;
    }
    cout<<char(a+32)<<endl;
    return 0;
}
int veintidosavo(){
    int d,e,seg,min,hor;
    float b,c,a;
    cout<<"Ingrese los segundos"<<endl;
    cin>>a;
    b=a/60;
    d=a/60;
    seg=(b-d)*60;
    e=d/60;
    c=float(d)/60;
    min=(c-e)*60;
    hor=e;
    cout<<hor<<":"<<min<<":"<<seg<<endl;
    return 0;
}
int veintitresavo(){
    int num1,num2,max,cont,low;
    cout<<"digite el primer numero"<<endl;
    cin>>num1;
    cout<<"digite el segundo numero"<<endl;
    cin>>num2;
    max=num1*num2;
    low=max;
    for(cont=max;cont>=1;cont=cont-1){
        if(cont%num1==0 && cont%num2==0){
            low=cont;
        }

    }
    cout<<"El mcm es: "<<low<<endl;
    return 0;
}
int veinticuatroavo(){
    int a,b,c;
    cout<<"Ingrese un numero"<<endl;
    cin>>a;
    for(b=1;b<=a;b++){
        cout<<"+";
    }
    cout<<endl;
    for(b=1;b<=a-2;b++){
        cout<<"+";
        for(c=1;c<=a-2;c++){
            cout<<" ";
        }
        cout<<"+"<<endl;
    }
    for(b=1;b<=a;b++){
        cout<<"+";
    }
    cout<<endl;

    return 0;
}
int veinticincoavo(){
    unsigned long int b,d=0,a;
    cout<<"digite el numero"<<endl;
    cin>>a;
    b=a;
    while(a>0){
    a = a / 10;
    d++;
    }
    cout<<b<<" tiene "<<d<<" digitos"<<endl;

    return 0;
}
int veintiseisavo(){
    int lado1,lado2,lado3;
    cout<<"ingrese el primer lado"<<endl;
    cin>>lado1;
    cout<<"ingrese el segundo lado"<<endl;
    cin>>lado2;
    cout<<"ingrese el tercer lado"<<endl;
    cin>>lado3;
    if (lado1+lado2==lado3 || lado1+lado3==lado2 || lado2+lado3==lado1){
        cout<<"No es un triangulo"<<endl;
        return 0;
    }
    if(lado1+lado2<lado3 || lado2+lado3<lado1 || lado1+lado3<lado2){
        cout<<"no es un triangulo"<<endl;
        return 0;
    }
    if(lado1==lado2 && lado2==lado3){
        cout<<"Es equilatero"<<endl;
        return 0;
    }
    if(lado1*lado1==((lado2*lado2)+(lado3*lado3)) || lado2*lado2==((lado1*lado1)+(lado3*lado3)) || lado3*lado3==((lado2*lado2)+(lado1*lado1))){
        cout<<"Es rectangulo"<<endl;
        return 0;
    }
    if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        cout<<"Es isoseles"<<endl;
        return 0;

    }
    if (lado1!=lado2 && lado2!=lado3 && lado3!=lado1){
        cout<<"Es un triangulo escaleno"<<endl;
        return 0;
    }

    cout<<"No es un triangulo"<<endl;
    return 0;
}
int veintisieteavo(){
    int num1,num2;
    char let;
    cout<<"Ingrese primer valor"<<endl;
    cin>>num1;
    cout<<"Ingrese signo"<<endl;
    cin>>let;
    cout<<"Ingrese tercer valor"<<endl;
    cin>>num2;
    switch(let){
    case 43:
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        return 0;
    case 45:
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        return 0;
    case 42:
        cout<<num1<<"x"<<num2<<"="<<num1*num2<<endl;
        return 0;
    case 120:
        cout<<num1<<"x"<<num2<<"="<<num1*num2<<endl;
        return 0;
    case 47:
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        return 0;
    default:
        cout<<"el signo no es correcto"<<endl;
        return 0;

    }
    return 0;
}
int veintiochoavo(){
    int a,b,e=1;
    double c=1,d=1;
    cout<<"Ingrese hasta que numero quiere buscar a pi"<<endl;
    cin>>a;
    for(b=1;b<a;b=b+1){
        d=d+2;
        c=c-(1/d);
        b++;
        if(b<a){
        e++;
        d=d+2;
        c=c+(1/d);}
    }cout<<"pi es aproximadamente: "<<c*4<<endl;
    return 0;
}
int veintinueveavo(){
    int num=50;
    char ingreso;
    while(true){
        cout<<"El Numero es: "<<num<<"?"<<endl;
        cin>>ingreso;
        num=adivina(num,ingreso);
        if(num==-1){
            return 0;
        }
        if(num<=0){
            cout<<"Su numero no esta entre 1 y 100"<<endl;
            return 0;
        }
        if(num>100){
            cout<<"Su numero no esta entre 1 y 100"<<endl;
            return 0;
        }
    }
    return 0;
}
int treintavo(){
#include <stdlib.h>
    int a=0,b,c=101;
    srand(getpid());
    a=rand()%(100-0+1);
    for(b=1;c!=a;b++){
        cout<<"Ingrese un numero"<<endl<<endl;
        cin>>c;
        if(c<a){
            cout<<"Es un numero mayor"<<endl<<endl;
        }
        if(c>a){
            cout<<"Es un numero menor"<<endl<<endl;
        }
        if(c==a){
            cout<<endl<<endl<<a<<" es el numero"<<endl<<"Le tomo: "<<b<<" Intentos"<<endl;
        }
    }

    return 0;
}
int main(){
    cout<<"Ingrese el numero del problema"<<endl;
    int choise;
    cin>>choise;
    switch(choise){
    case 1:
        primer();
        return 0;
    case 2:
        segundo();
        return 0;
    case 3:
        tercero();
        return 0;
    case 4:
        cuarto();
        return 0;
    case 5:
        quinto();
        return 0;
    case 6:
        sexto();
        return 0;
    case 7:
        septimo();
        return 0;
    case 8:
        octavo();
        return 0;
    case 9:
        noveno();
        return 0;
    case 10:
        decimo();
        return 0;
    case 11:
        onceavo();
        return 0;
    case 12:
        doceavo();
        return 0;
    case 13:
        treceavo();
        return 0;
    case 14:
        catorceavo();
        return 0;
    case 15:
        quinceavo();
        return 0;
    case 16:
        dieciseisavo();
        return 0;
    case 17:
        diecisieteavo();
        return 0;
    case 18:
        dieciochoavo();
        return 0;
    case 19:
        diecinueveavo();
        return 0;
    case 20:
        veintiavo();
        return 0;
    case 21:
        veintiunavo();
        return 0;
    case 22:
        veintidosavo();
        return 0;
    case 23:
        veintitresavo();
        return 0;
    case 24:
        veinticuatroavo();
        return 0;
    case 25:
        veinticincoavo();
        return 0;
    case 26:
        veintiseisavo();
        return 0;
    case 27:
        veintisieteavo();
        return 0;
    case 28:
        veintiochoavo();
        return 0;
    case 29:
        veintinueveavo();
        return 0;
    case 30:
        treintavo();
        return 0;
    default:
        cout<<"No existe este problema"<<endl;
        return 0;


    }
}
