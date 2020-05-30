CC = gcc

makeRegion=first 

#ifeq ($(makeRegion),first)
#main:main.o add.o dec.o
#	$(CC) -o main main.o add.o dec.o
#main.o:main.c common.h add.h dec.h
#	$(CC) -c main.c
#add.o:add.c add.h common.h
#	$(CC) -c add.c
#dec.o:dec.c dec.h common.h
#	$(CC) -c dec.c
#endif

#ifeq ($(makeRegion),second)
obj = main.o add.o dec.o
main:$(obj)
	$(CC) -o $@ $^

main.o:main.c common.h add.h dec.h

add.o:add.c add.h common.h

dec.o:dec.c dec.h common.h

#endif

.PHONY:clean
clean:
	rm -r main *.o
