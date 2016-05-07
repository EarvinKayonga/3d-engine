# 3d-Engine

A little experimentation with C++


[![ready](https://badge.waffle.io/EarvinKayonga/3d-engine.svg?label=ready&title=Ready)]()

[![Build Status](https://travis-ci.org/EarvinKayonga/3d-engine.svg?branch=master)](https://travis-ci.org/EarvinKayonga/3d-engine)
[![Code Climate](https://codeclimate.com/github/EarvinKayonga/3d-engine/badges/gpa.svg)](https://codeclimate.com/github/EarvinKayonga/3d-engine)

[![Test Coverage](https://codeclimate.com/github/EarvinKayonga/3d-engine/badges/coverage.svg)](https://codeclimate.com/github/EarvinKayonga/3d-engine/coverage)

[![Issue Count](https://codeclimate.com/github/EarvinKayonga/3d-engine/badges/issue_count.svg)](https://codeclimate.com/github/EarvinKayonga/3d-engine)

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

or if cmake is installed on your machine

```
cmake .
```
#### Tests

You can run locally. Note that this project is under Travis CI which runs the tests after every push.


```
// To run the test
cd tests
make -f MakefileTest && ./TestBin
```
