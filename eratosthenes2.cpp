#include <iostream>
#include <fstream>

using namespace std;

typedef unsigned long ulong;

int Eratosthenes(ulong n) {

    ulong i, j, size = n - 1;
    bool arr[n+1];
    
    for(i = 2; i < n + 1; i++) arr[i] = true;

    i = 2;
    
    while(i * i <= n) {
    
      if( arr[ i ] == true ) {
      
           j = 2;
           
           while( i * j <= n ) {
           
                 int multiply = i * j;
                 
                 if(arr[ multiply ] == 1) size--;
                 
                 arr[ multiply ] = false; 
                 
                 j++;
           }
      }
    i++;      
    }      
    
    return size;
}

int main() {

ulong N;

    ifstream fin("ciur.in");
    ofstream fout("ciur.out");
    
    fin>>N;
    fout<<Eratosthenes(N);
 
}
