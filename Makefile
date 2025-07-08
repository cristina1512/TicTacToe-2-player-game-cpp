TARGET = tictactoepvp
CXX = g++
CXXFLAGS = -std=c++17 -Wall

all:
	$(CXX) $(CXXFLAGS) $(TARGET).cpp functions.cpp -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)