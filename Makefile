GLIB_PATH := /home/hanshukai/googletest/build/lib

all: demo1

demo1:
	g++ gtest_demo1.cc -o gtest_demo1 -I./include -L$(GLIB_PATH) -lgtest

clean:
	rm -rf gtest_demo1