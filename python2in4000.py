num = [2]
for i in range(4096):
	num.append(0)

for iter in range(4000):
	for numIndex in range(4000):
		num[numIndex] * 2
		if num[numIndex] > 10 :
			num[numIndex + 1] = num[numIndex + 1] + (num[numIndex] - num[numIndex] % 10) / 10
			num[numIndex] = num[numIndex] % 10
	num.append(0)

print num[0]
print num[1]