def erathostenes(n):
    arr = []
    arr = [True for i in range(n+1)]
    #print(arr)
    size = n - 1
    i = 2
    while i * i <= n:
    	if arr[i] == True:
    	   j = 2
    	   while i * j <= n:
    	   	   multiply = i * j
    	   	   if arr[multiply] == True:
    	   	   	  size -= 1
    	   	   arr[multiply] = False	  
    	   	   j += 1
    	i += 1    
    return size
fin = open('ciur.in','r')
fout = open('ciur.out','w')
N = int(fin.readline().strip())
out = erathostenes(N)
fout.write(str(out))
