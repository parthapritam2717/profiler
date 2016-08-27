obj= code.o profiler.o
code:$(obj)
	gcc -o code -g $(obj) -lm
code.o:code.c profiler.h
	gcc -g -c code.c
	
profiler.o:profiler.c
	gcc -g -c profiler.c

.PHONY:clean
clean:
	rm -fr *.o *.*~
	
