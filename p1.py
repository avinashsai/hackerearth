n,q=map(int,raw_input().split())
a=[]
a=list(map(int,raw_input().split()))
for i in range(1,n):
    a[i]=a[i-1]+a[i]
for i in range(0,n):
	print(a[i])
for i in range(q):
    l,r=map(int ,raw_input().split())
    if(l==1):
    	print(floor((a[r-1])/(r-l+1)))
    else:
    	print(floor(((a[r-1]-a[l-1])/(r-l+1))))