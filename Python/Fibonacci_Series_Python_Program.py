#Program to print Fibonacci Series
x=int(input("Enter A Terms\n"))
n1,n2=0,1
count=0
if x<=0:
    print("enter +ve interger")
elif x==1:
    print(n1)    
   
else:
    print("Fibonacci Are: ")
    while count < x:
        print(n1)
        nth=n1+n2
        n1=n2
        n2=nth
        count+=1
