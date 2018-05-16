
all:
	./src/Story.cpp ./src/Saturn.cpp ./include/Story.h ./include/Saturn.h
	rm -rf ./game
	g++ ./src/game.cpp ./src/Story.cpp ./src/Saturn.cpp -o ./game
