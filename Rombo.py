def rombo():
    n=5
    i,j=0,0
    while i<n:
        k=n-(i+1)
        while k>0:
            print (" "),
            k=k-1
        j=0
        while j<=i:
            print ("*"),
            j=j+1
        print ("")
        i=i+1

    i,j=0,0

    while i<n:
        k=i+1
        while k>0:
            print (""),
            k=k-1
        j=0
        while j<(n-(i+1)):
            print ("*"),
            j=j+1
        print ("")
        i=i+1
    
rombo()
