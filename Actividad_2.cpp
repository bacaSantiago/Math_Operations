#include <iostream>
#include <cstdlib> //random
#include <cctype> //toupper
#include <iomanip> //setw 
#include <cmath> //operaciones matemáticas
#include <vector> //vectores
#include<array> // sizeof
using namespace std;

void ejUno(){
  cout<<"  Ejercicio 1"<<endl;
  int n1, n2;
  cout << "Número 1: "; 
  cin >> n1;
  cout << "Número 2: "; 
  cin >> n2;
  char operacion;
  int resultado=0;
  cout << "\nDigite: \n  S) para sumar los números \n  R) para restar los números \n  M) para multiplicar los números"<<"\nLetra de la operacion: ";
  cin >> operacion;
  operacion=toupper(operacion);
  
  switch(operacion){
    case 'S':
      resultado=n1+n2;
      cout<<"\nSuma de "<<n1<<" y "<<n2<<" = "<<resultado<<endl;
      break;
    case 'R':
      resultado=n1-n2;
      cout<<"\nResta de "<<n1<<" y "<<n2<<" = "<<resultado<<endl;
      break;
    case 'M':
      resultado=n1*n2;
      cout<<"\nMultiplicación de "<<n1<<" y "<<n2<<" = "<<resultado<<endl;
      break;
    default:
      cout<<"\nIncorrecto. Vuelva a intentarlo"<<endl;
      break;
  }
}
void ejDos(){
  cout<<"  Ejercicio 2"<<endl;
  int nImpar;
  do{
    cout << "Digite un número impar: "; 
    cin >> nImpar;
  }
  while (nImpar%2==0);
}
  
void ejTres(){
  cout<<"  Ejercicio 3"<<endl;
  int sumaPares=0;
  for(int a=0;a<101;a++){
    if (a%2==0){
      sumaPares+=a;
    }
  }
  cout<<"Suma de números pares entre 0 y 100: "<<sumaPares<<endl;
}

void ejCuatro(){
  cout<<"  Ejercicio 4"<<endl;
  int n;
  do{
    cout<<"Cantidad de números: ";
    cin>>n;
    if (n>0){
      float serieNum[n],suma=0;
      for(int a=0;a<n;a++){
        cout<<a+1<<". Digite un número: ";
        cin>>serieNum[a];
        suma+=serieNum[a];
      }
      cout<<"\nMedia Aritmética: "<<suma/n<<endl; 
    }
    else{
      cout<<"Incorrecto. Vuelva a intentarlo"<<endl;
    }
  }
  while (n<=0);
} 

void ejCinco(){
  cout<<"  Ejercicio 5"<<endl;
  int i=rand() % 100 +1,intento, x=0;
  do{
    cout << "Adivine el número mágico entre 1 y 100: ";
    cin >> intento;
    if (intento<i){
      cout << "MÁS" << endl;
      x++;
    }
    else if (intento>i){
      cout << "MENOS" << endl;
      x++;
    } 
  }
  while (intento!=i);
  cout << "\nAcertaste con el número mágico " << i << " después de " <<x <<" intentos." <<endl;
} 

void ejSeis(){
  cout<<"  Ejercicio 6"<<endl;
  int cant;
  double incC;
  cout << "Cantidad de conversiones por realizar: ";
  cin >> cant;
  double serieC[cant],serieF[cant];
  cout << "Valor inicial en Celsius: ";
  cin >> serieC[0];
  cout << "Incremento para los valores Celsius: ";
  cin >> incC;
  if (cant>0){
    serieF[0]=(9.0/5.0)*serieC[0]+32;
    for(int a=1;a<cant;a++){
      serieC[a]=serieC[a-1]+incC;
      serieF[a]=(9.0/5.0)*serieC[a]+32;
    }
    cout<<"\n"<<setw(10)<<"FARENHEIT"<<setw(10)<<"CELSIUS"<<endl;
    for(int a=0;a<cant;a++){
      cout<<setw(10)<<serieF[a]<<setw(10)<<serieC[a]<<endl;
    }
  }
  else{
    cout<<"Incorrecto. Vuelva a intentarlo"<<endl;
  }
} 

void ejSiete(){
  cout<<"  Ejercicio 7"<<endl;
  int sumaSerie=0,termino;
  for (int i=0;i<25;i++){
    termino=1+i*3;
    cout<<"Término "<<i+1<<": "<<termino<<endl;
    sumaSerie+=termino;
  }
  cout<<"\nValor total de la serie: "<<sumaSerie<<endl;
} 

void ejOcho(){
  cout<<"  Ejercicio 8"<<endl;
  int nTotal;
  double x,multX=1,sumaXfrac=0,medGeo,medArm;
  vector<double> vectorX;
  do{
    cout<<"Digite un número: ";
    cin>>x;
    if (x!=0){
      vectorX.push_back(x);
    }
  }
  while (x!=0);
  nTotal=vectorX.size(); // para vectores
  // nTotal=sizeof(serieX)/sizeof(serieX[0])  para arreglos
  double serieX[nTotal];
  copy(vectorX.begin(), vectorX.end(), serieX);
  
  for (int j=0;j<nTotal;j++){
    multX*=serieX[j];
    sumaXfrac+=1/serieX[j];
  }
  medGeo=pow(multX,(1.0/nTotal));
  medArm=nTotal/sumaXfrac;
  cout<<"\nMedia Geométrica: "<<medGeo<<"\nMedia Armónica: "<<medArm<<endl;
} 


int main(){
  int opcion=0;
    do{
      cout << "\nBienvenido usuario. ¿Qué deseas realizar? \n  1) Sumar, restar, multiplicar 2 números diferentes \n  2) Reconocer un número impar \n  3) Suma de números pares entre 0 y 100 \n  4) Obtener la media aritmética de una secuencia de números \n  5) Adivine el número mágico entre 1 y 100 \n  6) Convertir una serie de valores en celsius a farenheit \n  7) Obtener la serie aritmética de 25 valores dados por una cierta expresión \n  8) Obtener la media geométrica y armónica de una serie de números hasta que se introduzca '0' \n  0) Salir \n\nPor favor, digite únicamente el número de la opción: "; 
      cin >> opcion; cout<<"\n";
      switch(opcion){
        case 1:
          ejUno();
          break;
        case 2:
          ejDos();
          break;
        case 3:
          ejTres();
          break;
        case 4:
          ejCuatro();
          break;
        case 5:
          ejCinco();
          break;
        case 6:
          ejSeis();
          break;
        case 7:
          ejSiete();
          break;
        case 8:
          ejOcho();
          break;
      }
    }
    while (opcion!=0);
  return 0;    
}