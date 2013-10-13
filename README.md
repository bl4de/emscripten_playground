This is repo with my misc experiments with Emscripten C/C++ to Javacript compiler

compilation:

$ emcc -o sieve.js -s ASM_JS=1 -O1 -Wall sieve.cpp

Node execution:

$ node sieve.js

