#include <iostream>
using namespace std;

void PrintRandom(int a[], int size)
{   
    for(int i = 0; i < size; i++ )
    {
        for(int j = i + 1; j < size; j++)
        {
           for(int k =  j + 1; k < size; k++)
           {                           
              for(int l = k + 1; l < size; l++)
              {
                  for(int m = l + 1;  m < size ; m++)
                  {
                       for(int n = m + 1; n < size; n++)
                       {
                         cout <<"[ " << a[i] <<" " << a[j] << " " << a[k] << " " << a[l] << " " << a[m] << " " << a[n] <<" ]" << '\n';                                      
                       }
                  }
              }                
           }
        }
   } 
}

int main() {
    
    int a[8];
    int value;
        for(int i = 0; i < 8 ; i++){
            cin >> value;
            a[i] = value;            
         }
        
     PrintRandom(a, 8);
   return 0;
}
