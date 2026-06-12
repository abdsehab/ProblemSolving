n=int(input())
s=input().lower()
uniqueChar = set(s)

if n<26:
    print("NO")
elif len(uniqueChar)<26 :
    print("NO")
else:
    print("YES")