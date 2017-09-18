#Program Filename: makefile
# Author: Clarence Pine
# Date: 3/14/16
# Description: makefile for Final
# Input: n/a
# Output: makefile with 2 targets

TARGET= doolittle
CXX = g++
SOURCE_FILES=main.cpp Space.cpp Space.h Depot.cpp Depot.h Cat.cpp Cat.h Game.cpp Game.h Yard.cpp Yard.h Couch.cpp Couch.h Birdfeeder.cpp Birdfeeder.h Garden.cpp Garden.h Deck.cpp Deck.h Roof.cpp Roof.h


default:
	$(CXX) $(SOURCE_FILES) -o $(TARGET)
clean:
	rm -f *.o doolittle
