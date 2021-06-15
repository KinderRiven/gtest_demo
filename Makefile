all: demo1

demo1:
	g++ gtest_demo1.cc -o gtest_demo1 -I./include

clean:
	rm -rf gtest_demo1