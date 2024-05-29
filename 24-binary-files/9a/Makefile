all: writeParticipants.out readParticipants.out modifyParticipants.out

date.o: date.h date.c types.h
	gcc -c date.c -o date.o

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

participant.o: participant.h participant.c types.h
	gcc -c participant.c -o participant.o

writeParticipants.out: writeParticipants.c date.o fileUtil.o participant.o
	gcc writeParticipants.c date.o fileUtil.o participant.o -o writeParticipants.out

readParticipants.out: readParticipants.c date.o fileUtil.o participant.o
	gcc readParticipants.c date.o fileUtil.o participant.o -o readParticipants.out

modifyParticipants.out: modifyParticipants.c date.o fileUtil.o participant.o
	gcc modifyParticipants.c date.o fileUtil.o participant.o -o modifyParticipants.out

clean:
	rm -f *.o *.out