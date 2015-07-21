#!/usr/bin/python

ndigits = 2
plist = []
for i in range(100,1000):
	for i2 in range(100,1000):
		product = i*i2
		strprod=str(product)
		
		revprod = strprod[::-1]
		revprod = int(revprod)
		if revprod == product:
			plist.append(revprod)

m = max(plist)
print m
