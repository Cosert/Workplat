a=int(input())
b=int(input())
c=int(input())
d=int(input())
e=int(input())
f=int(input())

ans=0

if e>f : 
    ans+=min(a, d); a-=ans; d-=ans
    ans*=e
    print(ans+min(b, c, d)*f)
else : 
    ans+=min(b, c, d); b-=ans; c-=ans; d-=ans
    ans*=f
    print(ans+min(a, d)*e)

