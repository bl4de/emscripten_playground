This is repo with my misc experiments with Emscripten C/C++ to Javacript compiler

compilation (samples):
```
$ emcc -o sieve.js -s ASM_JS=1 -O1 -Wall sieve.cpp
$ emcc -o classes.js -s ASM_JS=1 -O1 -Wall classes.cpp # C++
...
$ emcc -o tmp/csample.js -s ASM_JS=1 -O1 -Wall -v csample.c # C
```
Node execution:
```
$ node sieve.js
$ node classes.js
```

-v adds debug log during compilation process:

```
$ emcc -v -o sieve.js -s ASM_JS=1 -O1 -Wall sieve.cpp
```

sample output:

```
(...)
DEBUG    root:     linking took 0.68 seconds
DEBUG    root: saving intermediate processing steps to /Users/***/emsdk_portable/temp/emscripten_temp
DEBUG    root: emcc: LLVM opts: ['-strip-debug', '-internalize', '-internalize-public-api-list=main,malloc,free', '-globaldce']
DEBUG    root:     step took 0.29 seconds
DEBUG    root:     step took 0.31 seconds
DEBUG    root: LLVM => JS
DEBUG    root: PYTHON not defined in ~/.emscripten, using "python"
DEBUG    root: JAVA not defined in ~/.emscripten, using "java"
emscript: ll=>js
  emscript: scan took 0.0202031135559 seconds
  emscript: split took 0.066253900528 seconds
  emscript: phase 1 took 1.60267496109 seconds
  emscript: phase 2 working on 3 chunks using 2 cores (intended chunk size: 1.24 MB, meta: 0.00 MB, forwarded: 0.30 MB, total: 3.43 MB)
.
.
.
  emscript: phase 2 took 6.66792201996 seconds
  emscript: phase 2b took 0.00797200202942 seconds
  emscript: phase 2c took 0.0913951396942 seconds
asm text sizes [668898, 669775, 504743, 2183, 15772] 3864 583 4421 71 3561 90050 1110 234 3659 1773
  emscript: phase 3 took 0.744811058044 seconds
DEBUG    root:     step took 10.20 seconds
DEBUG    root: running pre-closure post-opts
DEBUG    root: applying js optimization passes: ['asm', 'eliminate', 'simplifyExpressions', 'minifyWhitespace', 'last']
DEBUG    root:     step took 4.40 seconds
DEBUG    root: total time: 18.64 seconds

```
