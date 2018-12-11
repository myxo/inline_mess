one: a.o b.o main.cpp
	g++ main.cpp a.o b.o -o main

two: a.o b.o main.cpp
	g++ main.cpp b.o a.o -o main

a.o: a.cpp
	g++ a.cpp -c

b.o: b.cpp
	g++ b.cpp -c

clean:
	rm *.o main