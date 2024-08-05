# Compiler
CXX := c++

# Compiler flags
CXXFLAGS := -Wall -Wextra -pedantic -std=c++11

# Directories
SRC_DIR := src
OBJ_DIR := objs

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Executable
EXEC := BJ

# Default target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ -lncursesw

# Rule to build object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the objs directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean target
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXEC)

# Full clean target
fclean: clean
	rm -rf $(EXEC)

# Rebuild target
re: fclean all