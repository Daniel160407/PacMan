all: compile link

compile:
	g++ -Isrc/include -c application.cpp Game.cpp Board.cpp Food.cpp Player.cpp

link:
	g++ application.o Game.o Board.o Food.o Player.o -o application -Lsrc/lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system