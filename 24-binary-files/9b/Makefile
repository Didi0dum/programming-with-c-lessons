all: writeParticipants.out readParticipants.out modifyParticipants.out

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

date.o: date.h date.c types.h
	gcc -c date.c -o date.o

participant.o: participant.h participant.c types.h
	gcc -c participant.c -o participant.o

writeParticipants.out: writeParticipants.c fileUtil.o date.o participant.o
	gcc writeParticipants.c fileUtil.o date.o participant.o -o writeParticipants.out

readParticipants.out: readParticipants.c fileUtil.o date.o participant.o
	gcc readParticipants.c fileUtil.o date.o participant.o -o readParticipants.out

modifyParticipants.out: modifyParticipants.c fileUtil.o date.o participant.o
	gcc modifyParticipants.c fileUtil.o date.o participant.o -o modifyParticipants.out

clean:
	rm -f *.o *.out