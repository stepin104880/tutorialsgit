all.out: Address.cpp Address.h address-test.cpp Contact.cpp Contact.h 
	g++ Address.cpp Address.h address-test.cpp Contact.cpp Contact.h  -lgtest -lgtest_main -lpthread -o all.out
	./all.out

clean:
	rm -rf *.o all.out
