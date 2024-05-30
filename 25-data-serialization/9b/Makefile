all: serializePatients.out deserializePatients.out

linkedlist.o: linkedlist.h linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

patient.o: patient.h patient.c
	gcc -c patient.c -o patient.o

serializePatients.out: serializePatients.c fileUtil.o patient.o
	gcc serializePatients.c fileUtil.o patient.o -o serializePatients.out

deserializePatients.out: deserializePatients.c fileUtil.o patient.o linkedlist.o
	gcc deserializePatients.c linkedlist.o fileUtil.o patient.o -o deserializePatients.out

clean:
	rm -f *.o *.out
