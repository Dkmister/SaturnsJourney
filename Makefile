all:
    g++ ./src/game.cpp ./src/Story.cpp ./src/Saturn.cpp -o ./game

clean:
    rm -rf ./game