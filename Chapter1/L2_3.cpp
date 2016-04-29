#include <iostream>
#include <thread>

using namespace std;
struct func
{
	int &i;
	func(int& i_):i(i_){}

	void operator ()()
	{
		for(unsigned j = 0; j < 1000000; ++j) {
			i = j;
			if((j & (0xfff)) == 0) {
				printf("j = %d\n", i);
			}
		}
	}
};

class thread_guard
{
public:
	explicit thread_guard(thread& t_):t(t_) {printf("Safe guard created\n");}
	~thread_guard()
	{
		if(t.joinable()) {
			printf("thread_guard join current thread\n");
			t.join();
		}
	}
	thread_guard(const thread_guard &)=delete;
	thread_guard & operator=(const thread_guard &)=delete;
private:
	thread& t;
};

void f()
{
	int some_local_state = 0;
	func my_func(some_local_state);
	thread local_thread(my_func);
	thread_guard g(local_thread);
	for (int i = 0; i < 1000; i++) {
		if( (i & (0xff)) == 0 ) {
			printf("i = %d\n", i);
		}
	}
	printf("function f is existing\n");
}

int main()
{
	f();
}