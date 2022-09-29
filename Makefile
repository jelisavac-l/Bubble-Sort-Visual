all: compile link run

compile:
	g++ -I src/include -c main.cpp Pillar.cpp
link:
	g++ main.o pillar.o -o main -L src/lib -l sfml-graphics -l sfml-window -l sfml-system
run:
	main.exe
