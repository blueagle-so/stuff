default:
	#g++ set1.cpp;./a.out
	#g++ set2.cpp;./a.out
	#g++ set3.cpp;./a.out
	#g++ factory.cpp -fpermissive -o fack
	#g++ factory1.cpp -o fack1
	#g++ point.cpp -g
	#g++ job.cpp
	#g++ sin.cpp -std=c++20; ./a.out
	#g++ ferma.cpp;./a.out
	#g++ euclid.cpp;./a.out
	#g++ x.c -o draw -lX11;./draw
	#g++ ecu.cpp;./a.out
	#gcc simple-drawing.c -o drawing -lX11;./drawing
	#gcc inOrder.c;./a.out
	#g++ gmp.cpp -lgmp -lgmpxx;./a.out
	#g++ mutex1.cpp ;./a.out
	#g++ 2.cpp -lX11 -fpermissive;./a.out
	g++ view.cpp

all1:
	g++ inheritancefromvector.cpp
	./a.out
