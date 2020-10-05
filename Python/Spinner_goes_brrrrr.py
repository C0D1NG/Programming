# make some loading spinners
import time,sys
while True:
	bruh="\|/-\|/-"
	for l in bruh:
		sys.stdout.write(l)
		sys.stdout.flush()
		sys.stdout.write('\b')
		time.sleep(0.2)
    
