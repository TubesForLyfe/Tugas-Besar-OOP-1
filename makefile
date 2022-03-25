CC = g++ -std=c++17
TARGET = main.exe
SRC = $(wildcard *.cpp Exception/BaseException.cpp)

.SILENT = all

all:
	$(CC) -o $(TARGET) $(SRC) && echo Build Success.

clean:
	rm $(TARGET)