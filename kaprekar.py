#!/usr/bin/env python3
import sys;n=sys.argv[1:];kap = True
while kap:
    for i in n:
        l,r,m,o,rn,ln=[],[],0,0,0,0;print(n)
        for j in i:
            l.append(int(j));l.sort();r.append(int(j));r.sort(reverse=True)
        while m<len(r):
            rn+=r[m]*pow(10,len(r)-m-1);m+=1
        while o<len(l):
            ln+=l[o]*pow(10,len(l)-o-1);o+=1
        n=[str(rn-ln)];print(n)
        if '6174' in n:kap=False
        else:break
