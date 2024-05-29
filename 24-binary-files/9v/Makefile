all: writeParticipants.out readParticipants.out modifyParticipants.out

date.o: date.h date.c types.h
	gcc -c date.c -o date.o

participant.o: participant.h participant.c types.h
	gcc -c participant.c -o participant.o

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

writeParticipants.out: writeParticipants.c date.o participant.o fileUtil.o
	gcc writeParticipants.c date.o participant.o fileUtil.o -o writeParticipants.out

readParticipants.out: readParticipants.c date.o participant.o fileUtil.o
	gcc readParticipants.c date.o participant.o fileUtil.o -o readParticipants.out

modifyParticipants.out: modifyParticipants.c date.o participant.o fileUtil.o
	gcc modifyParticipants.c date.o participant.o fileUtil.o -o modifyParticipants.out

clean:
	rm -f *.o *.out