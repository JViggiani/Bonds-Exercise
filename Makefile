INCLUDE_DIRS = -I. -I/home/ibutt/googletest-master/googletest/include 
WARNINGS = -Wall -Werror
OBJECTS = bond.o bond.t.o
GTESTMAIN = /home/ibutt/googletest-master/googletest/make/gtest_main.a

bond : $(OBJECTS)
	g++ -lpthread -o bond $(GTESTMAIN) $(OBJECTS)

bond.o : bond.h bond.cpp
	g++ $(WARNINGS) $(INCLUDE_DIRS) -c bond.cpp
	
bond.t.o : bond.h bond.t.cpp
	g++ $(WARNINGS) $(INCLUDE_DIRS) -c bond.t.cpp

clean : 
	rm $(OBJECTS) bond

