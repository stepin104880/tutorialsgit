all.out : book.cpp book.h library.h library.cpp librarytest.cpp 
	g++ book.cpp book.h library.h library.cpp librarytest.cpp -lgtest -lgtest_main -lpthread -o all.out
	./all.out
clean:
	rm -rf *.o all.out
