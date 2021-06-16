GLIB_PATH := /home/hanshukai/googletest/build/lib

all: test_demo

test_demo:
	g++ test_demo.cc -o gtest_demo -I./include -L$(GLIB_PATH) -lgtest -pthread

clean:
	rm -rf gtest_demo