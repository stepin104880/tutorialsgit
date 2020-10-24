all.out : billing-test.cxx billing.cc billing.h customer.cc customer.h postpaid.cc postpaid.h prepaid.cc prepaid.h  
	g++ billing-test.cxx billing.cc billing.h customer.cc customer.h postpaid.cc postpaid.h prepaid.cc prepaid.h  -lgtest -lgtest_main -lpthread -o all.out
	./all.out

clean:
	rm -rf *.o all.out
