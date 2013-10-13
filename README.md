This is repo with my misc experiments with Emscripten C/C++ to Javacript compiler

compilation (samples):
```
$ emcc -o sieve.js -s ASM_JS=1 -O1 -Wall sieve.cpp
$ emcc -o classes.js -s ASM_JS=1 -O1 -Wall classes.cpp
```
Node execution:
```
$ node sieve.js
$ node classes.js
```

