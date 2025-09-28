# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -Wall -Wextra -std=c++20
# Output executable name
TARGET := run

# Detect OS
ifeq ($(OS),Windows_NT)
    RM := del /Q
    TARGET := run.exe
else
    RM := rm -f
endif

# All .cpp files in the current directory
SRCS := $(wildcard *.cpp)
# Corresponding object files
OBJS := $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cpp into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	$(RM) $(OBJS) $(TARGET)

.PHONY: all clean
