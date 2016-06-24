CXX = g++
OBJSSUM = summation.o
SRCSSUM = summation.cpp
OBJSAVG = average.o
SRCSAVG = average.cpp
OBJSL1 = InputValid.o
SRCSL1 = InputValid.cpp
OBJSL2 = lab1.o
SRCSL2 = lab1.cpp
HEADERS = summation.hpp
HEADERA = average.hpp
HEADERI = InputValid.hpp

all: lab1

lab1: $(OBJSL2) $(OBJSSUM) $(OBJSAVG) $(OBJSL1)
	$(CXX) $(OBJSAVG) $(OBJSL2) $(OBJSSUM) $(OBJSL1) -o lab1
lab1.o: $(SRCSL2) $(HEADERS) $(HEADERA) $(HEADERI)
	$(CXX) -c $(SRCSL2)
average.o: $(SCRSAVG) $(HEADERA) 
	$(CXX) -c $(SRCSAVG)
InputValid.o: $(SRCSL1) $(HEADERI)
	$(CXX) -c $(SRCSL1)
summation.o: $(SRCSSUM) $(HEADERS)
	$(CXX) -c $(SRCSSUM)
clean:
	rm -rf *.o lab1 lab1-2 lab1-1 
