all:
	make tout
tout:
	make exPID
	make exFork
	make exSystem
	make Semaphore

ex1:
	make exPID
exPID:
	# Compile dans le dossier bin.
	cd bin ; gcc -o exPID ../sources/ex1PID.c ; chmod +x exPID 

ex2:
	make exFork
exFork:
	# Compile dans le dossier bin.
	cd bin ; gcc -o exFork ../sources/ex2Fork.c ; chmod +x exFork 

ex3:
	make exExec
exExec:
	# Compile dans le dossier bin.
	cd bin ; gcc -o exExec ../sources/ex3Exec.c ; chmod +x exExec 

ex4:
	make exSystem
exSystem:
	# Compile dans le dossier bin.
	cd bin ; gcc -o exSystem ../sources/ex4System.c ; chmod +x exSystem 

ex5:
	make exSemaphore
exSemaphore:
	# Compile dans le dossier bin.
	cd bin ; gcc -o exSemaphore ../sources/ex5Semaphore.c ; chmod +x exSystem 
