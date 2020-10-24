all.out : account.h savingacc.h creditacc.h banking.h account.cpp savingacc.cpp creditacc.cpp banking.cpp banking-test.cpp
	  g++ account.h savingacc.h creditacc.h banking.h account.cpp savingacc.cpp creditacc.cpp banking.cpp banking-test.cpp -lgtest -lgtest_main -lpthread -o all.out
	  ./all.out
clean:
	rm -rf *.o all.out
