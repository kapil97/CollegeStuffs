# Prime number print
for i in range (2,100):
    for j in range (2,100):
        f=0;
        if j%i==0:
            f=1
        if f==1:
            print i
            break;
print "Enter number to check"
n=int(raw_input())
if n>1:
    for i in range(2,n):
        if(n%i)==0:
            print(n,"isn't a prime number")
            break
    else:
        print(n,"is prime")

else:
    print "enter number greater than 1"