#include "iostream"

using namespace std;
 
 int arr[5],a,i,n=0;

int datos()
{
    for ( i = 0; i < 5; i++)
  {
      cin >> arr[i];
  }
  
}

int main()
{
   cout << "Digite 5 numeros :";

  datos();

  cout << "Digite el numero que desea buscar :";
  cin >> a;

  for (i = 0; i < 5; i++)
 { if (a == arr[i])
  {
      n++;
  }    
 }
  cout << "El numero se repite " << n << " veces";

return 0;

}