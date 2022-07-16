t=int(input())
for i in range(0,t,1):
   a,b,x,y=map(int,input().split())
   if a*b>=x*y:
       print("Yes")
   else:
       print("No")