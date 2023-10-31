
bin/main : src/main.cpp include/*
	c++ src/main.cpp -o bin/main -I include -lcurses

run : bin/main
	./bin/main