#include <iostream>
#include <fstream>
#define FIN "ciur.in"
#define FOUT "ciur.out"

typedef unsigned long ulong;

std::ifstream fin(FIN);
std::ofstream fout(FOUT);


namespace Math {

	namespace Eratosthenes {

              ulong getCount(ulong n) {

                    bool primes[ n + 1 ];

                    ulong totalPrimes = n - 1;

                    ulong i, j;

                    for (ulong i = 2; i < n + 1; ++i)
                    {
                       	 primes[ i ] = true;   
                    }   

                 
                    for (i = 2; (i * i) <= n; ++i)      	
                    {
                         if( primes[ i ] ) {

                         	 j = 2; 

                         	 while((i * j) <= n) {

                                   ulong multiply = i * j;

                                   if(primes[ multiply ]) totalPrimes--;

                                   primes[multiply] = false;

                                   j++;                         	 	
                         	 }
                         }
                    }

                return totalPrimes; 
              } 


                ulong displayPrimes(ulong n) {

                    bool primes[ n + 1 ];                   

                    ulong i, j;

                    for (ulong i = 2; i < n + 1; ++i)
                    {
                       	 primes[ i ] = true;   
                    }   

                 
                    for (i = 2; (i * i) <= n; ++i)      	
                    {
                         if( primes[ i ] ) {

                         	 j = 2; 

                         	 while((i * j) <= n) {

                                   ulong multiply = i * j;                                  

                                   primes[multiply] = false;

                                   j++;                         	 	
                         	 }
                         }
                    }                


                    for (ulong i = 2; i <= n; ++i)
                    {
                       	 if ( primes[ i ] == true )

                       	 	fout<<i<<" ";
                    }   

                    fout<<"\n";

                } 
                            
	}
}

int main() {
     
	ulong n;
    fin>>n;    
    Math::Eratosthenes::displayPrimes(n); 
    fout<<Math::Eratosthenes::getCount(n); 
    //std::cout<<Math::Eratosthenes::getCount(n); 
    //Math::Eratosthenes::displayPrimes(n);     
	return(0);
}