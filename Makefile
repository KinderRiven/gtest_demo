GLIB_PATH := /home/hanshukai/googletest/build/lib

all: test_demo testf_demo test_env

test_demo:
	g++ test_demo.cc -o run_test -I./include -L$(GLIB_PATH) -lgtest -pthread

testf_demo:
	g++ testf_demo.cc -o run_testf -I./include -L$(GLIB_PATH) -lgtest -pthread

test_env:
	g++ test_env.cc -o run_env -I./include -L$(GLIB_PATH) -lgtest -pthread

clean:
	rm -rf gtest_demo gtestf_demo test_env