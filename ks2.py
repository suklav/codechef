# cook your dish here

t=int(input());
while t:
    n=int(input());
    n*=10;
    k=-1;
    s=1;
    while s%10:
        s=0;
        k+=1;
        tn=n+k;
        while tn:
            s+=tn%10;
            tn=int(tn/10);
    print(n+k);
    t-=1;
