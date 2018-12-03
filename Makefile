one: a.o b.o main.cpp
	g++ main.cpp a.o b.o -o main

two: a.o b.o main.cpp
	g++ main.cpp b.o a.o -o main

a.o: a.cpp a.h
	g++ a.cpp -c

b.o: b.cpp b.h
	g++ b.cpp -c

clean:
	rm *.o main