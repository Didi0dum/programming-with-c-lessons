all: serializePatients.out deserializePatients.out

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c -o linkedlist.o

patient.o: patient.h patient.c
	gcc -c patient.c -o patient.o

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

serializePatients.out: serializePatients.c fileUtil.o patient.o
	gcc serializePatients.c fileUtil.o patient.o -o serializePatients.out

deserializePatients.out: deserializePatients.c fileUtil.o patient.o linkedlist.o
	gcc deserializePatients.c fileUtil.o patient.o linkedlist.o -o deserializePatients.out

clean:
	rm -f *.o *.out