SRC = customer.cpp\
	test_customer.cpp\
	postpaid.cpp\
	prepaid.cpp

INC = customer.h\
	postpaid.h\
	prepaid.h
		

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out
