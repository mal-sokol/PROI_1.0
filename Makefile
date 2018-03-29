CC = g++

main.out : main.o Ship.o Cargo.o Combat.o Arsenal.o Unit.o Fleet.o Menu.o Weapon.o
	$(CC) main.o Ship.o Cargo.o Combat.o Arsenal.o Unit.o Fleet.o Menu.o Weapon.o -o main.out

main.o : main.cpp
	$(CC) -g -c main.cpp -o main.o

Ship.o : Ship.cpp Ship.hpp
	$(CC) -g -c Ship.cpp -o Ship.o

Cargo.o : Cargo.cpp Cargo.hpp Ship.hpp
	$(CC) -g -c Cargo.cpp -o Cargo.o
	
Combat.o : Combat.cpp Combat.hpp Ship.hpp Weapon.hpp Arsenal.hpp
	$(CC) -g -c Combat.cpp -o Combat.o
	
Arsenal.o : Arsenal.cpp Arsenal.hpp Weapon.hpp
	$(CC) -g -c Arsenal.cpp -o Arsenal.o
	
Unit.o : Unit.cpp Unit.hpp Ship.hpp Combat.hpp Cargo.hpp
	$(CC) -g -c Unit.cpp -o Unit.o
	
Fleet.o : Fleet.cpp Fleet.hpp Unit.hpp Ship.hpp Combat.hpp Cargo.hpp
	$(CC) -g -c Fleet.cpp -o Fleet.o
	
Menu.o : Menu.cpp Menu.hpp Fleet.hpp Unit.hpp Ship.hpp Combat.hpp Cargo.hpp
	$(CC) -g -c Menu.cpp -o Menu.o
	
Weapon.o : Weapon.cpp Weapon.hpp
	$(CC) -g -c Weapon.cpp -o Weapon.o
	
clear :
	rm *.o main.out
