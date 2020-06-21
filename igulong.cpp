#include "iostream"

using namespace std;

int a,i;
 int array1[4], array2[4],su[4];

int leer()
{
  cout << "Arreglo 1 con espacio para 4 numeros :"<<endl;
  cout << "Digite los numeros :";
    for ( i = 0; i < 4; i++)
  {
      cin >> array1[i];
  }
  cout << "Arreglo 2 con espacio para 4 numeros :"<<endl;
  cout << "Digite los numeros :";
    for ( i = 0; i < 4; i++)
  {
      cin >> array2[i];
  }
}

int suma()
{
  cout << "arreglo 1 :" ;
   for ( i = 0; i < 4; i++)
  {
      cout << array1[i]<<" ";
  }    
  cout << "y su longitud es :"<< sizeof(array1)<<endl;
  cout << "arreglo 2 :" ;
  for ( i = 0; i < 4; i++)
  {
      cout << array2[i]<<" ";
  }
  cout << "y su longitud es :"<< sizeof(array2)<<endl;
}

int resul()
{
    cout << "El arreglo 3 es :";
    for ( i = 0; i < 4; i++)
    {
      su[i] = array1[i] + array2[i]; 
      cout << su[i]<<" ";

    }
    

}

int main()
{
   leer();

   suma();

   resul(); 

   return 0;
}