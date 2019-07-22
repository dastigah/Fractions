LIB=./lib/
BIN=./bin/
SOURCE=./src/
INCLUDE=./include/
EXTERNAL=./external

CC=g++
GTESTDIR=$(EXTERNAL)/googletest-master/googletest
GTESTLIB=$(GTESTDIR)/lib
FLAGS=-g -std=c++11 -isystem $(GTESTDIR)/include -I$(INCLUDE)

TESTFRACTION=TestFraction


BINLIST=TestFraction.o Fraction.o
EXELIST=TestFraction

clean: 
	rm -rf $(addprefix $(BIN),$(BINLIST)) 

$(TESTFRACTION): $(BIN)$(addsuffix .o, $(TESTFRACTION)) $(BIN)Fraction.o
	$(CC) -pthread $(^) $(GTESTLIB)/libgtest.a -o $(BIN)$(@)

$(BIN)%.o : $(SOURCE)%.cpp
	$(CC) $(FLAGS) -c $(<) -o $(@)
