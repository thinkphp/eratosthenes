package main

import "fmt"

type Run interface {
	 run() int
}

type Math struct {

	 n int	 
}

func (m Math) run() int {

	  totalPrimes := m.n - 1

	  len := m.n

	  Primes := make([]int, len+1)

	  for i:=2; i < len + 1; i++ {

	  	  Primes[i] = 1
	  }

	  for i := 2; i * i <= len; i++ {

	  	  if Primes[i] == 1 {

             j := 2

             for i * j <= len {

                   multiply := i * j

                   if Primes[multiply] == 1 {

                   	  totalPrimes--
                   }   
                   Primes[multiply] = 0 
                   j++;
             } 
	  	  }

	  }

  	  for i:=2; i < len + 1; i++ {

  	  	     if(Primes[i] == 1) {
  	  	     	 fmt.Printf("%d ", i)
  	  	     } 	 
  	  }	

      fmt.Printf("\n%s -> ", "count")
	  return totalPrimes
}

func main() {
          
     eratosthene := Math{7920}

     fmt.Println(eratosthene.run())
}
