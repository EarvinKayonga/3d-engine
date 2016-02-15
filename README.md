# 3d-Engine

A little experimentation with C++


[![ready](https://badge.waffle.io/EarvinKayonga/3d-engine.svg?label=ready&title=Ready)]()

[![Build Status](https://travis-ci.org/EarvinKayonga/3d-engine.svg?branch=master)](https://travis-ci.org/EarvinKayonga/3d-engine)

### Setup

#### git clone and build

```
git clone this repo
cd 3d-engine
make
```

#### Run the project

```
//if the build passes
./Bin
```

#### Makefile rules

```
make or make re // to build project
make fclean  	// to remove the *.o and others binaries
make clean	// to remove *.o
```

#### Tests

You can run locally. Note that this project is under Travis CI which runs the tests after every push.


```
// To run the test
cd tests
make -f MakefileTest && ./TestBin
```