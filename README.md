# An example of inline function may mess with you

Program output:
```
& make one  
g++ a.cpp -c
g++ b.cpp -c
g++ main.cpp a.o b.o -o main

& ./main
main, value is 1
from a, value is 1
from b, value is 1

& make two
g++ main.cpp b.o a.o -o main

& ./main
main, value is 2
from a, value is 2
from b, value is 2

```