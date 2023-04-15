test: libbitshuffle.a
	g++ test.cpp -I ../src ../libbitshuffle.a
libbitshuffle.a:
	cd .. && gcc src/bitshuffle_core.c src/bitshuffle.c src/iochain.c lz4/lz4.c -O3 -march=native -c -std=c99 -I lz4/ && ar rs libbitshuffle.a ./*.o && cd src
