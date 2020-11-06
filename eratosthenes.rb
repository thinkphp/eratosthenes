class Eratosthenes

	  def initialize(n)

	  	  @totalPrimes = n - 1

          _run n          

	  end	

	  def _run n

	  	  primes = Array.new( n + 1, 1 )	  	  
          
          for i in 2..n          	  
          	  if i * i >= n
          	  	 break
          	  end	

            if primes[ i ] == 1
             	              
          	  j = 2

          	  while i * j <= n
                   
          	  	 multiply = i * j

          	  	 if primes[ multiply ] == 1
          	  	    @totalPrimes -= 1
          	  	 end 	

          	  	 primes[ multiply ] = 0

          	  	 j += 1

          	  end

          	end         	  
          end	

          
          for i in 2..n
          	  if primes[i] == 1
          	  	 print i, " "
          	  end	
          end
	  end	

	  def getCounts
	  	  return @totalPrimes
	  end	
end	

ob = Eratosthenes.new(7920)
printf("\n%d\n", ob.getCounts())