GLIB_PATH := /home/hanshukai/googletest/build/lib

all: test_demo testf_demo test_env

test_demo:
	g++ test_demo.cc -o gtest_demo -I./include -L$(GLIB_PATH) -lgtest -pthread

testf_demo:
	g++ testf_demo.cc -o gtestf_demo -I./include -L$(GLIB_PATH) -lgtest -pthread

testf_demo:
	g++ test_env.cc -o test_env -I./include -L$(GLIB_PATH) -lgtest -pthread

clean:
	rm -rf gtest_demo gtestf_demo test_env