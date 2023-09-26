CXX = x86_64-w64-mingw32-g++
CXXFLAGS = -g

mensaje :
	echo "Mensaje por Make"

ejecutarMascota : bin/Mascota
	./bin/Mascota

bin/Mascota : src/main.cpp include/Mascota.hpp
	$(CXX) src/main.cpp -o bin/Mascota -I include

cleanMascota : bin/Mascota
	rm bin/Mascota