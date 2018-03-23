OBJS = main.o dot.o matvec.o matmat.o fillrand.o checkres.o
OBJS2 = main2.o dot.o matvec.o matmat.o fillrand.o checkres.o
program: main main2
main: $(OBJS)
	$(CC) -o $@ $?
main2: $(OBJS2)
	$(CC) -o $@ $?
clean:
	rm $(OBJS) $(OBJS2) main main2