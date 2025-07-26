# Define the compiler
CXX = g++

# Define compiler flags (e.g., warnings, debug symbols)
CXXFLAGS = -Wall -g

# Define the source file and the executable name
SRCS = test.cpp
TARGET = test.exe

# The default rule that runs when you just type "make"
all: $(TARGET)

# Rule to link the object file into the final executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Rule to clean up the build files
clean:
	rm -f $(TARGET)

# Declare targets that don't create files
.PHONY: all run clean