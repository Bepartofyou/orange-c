#include <iostream>
#include "ATimer.hpp"

void test(void* para)
{
	struct S_INFO* info = (struct S_INFO*)para;
    std::cout << "Timer thread id: " << std::this_thread::get_id() << "  " << "url:  " << info->url << "  " << "data:  " << info->data << std::endl;
}

int main()
{
	struct S_INFO info;
	info.url = "http://127";
	info.data = "json data 111";
	struct S_INFO info1;
	info1.url = "http://128";
	info1.data = "json data 222";

    std::cout << "Main thread id: " << std::this_thread::get_id() << std::endl;

    ATimer<> t0;
	t0.Set(info1);
    //t0.setSingleShot(true);
    t0.bind(test);
    t0.start(1000);

    ATimer<> t;
	t.Set(info);
    t.bind(test);
    //t.bind([](void*){ std::cout << "Hello C++" << std::endl; });
    t.start(3000);

    std::cin.get();
    t.stop();
    std::cout << "Timer stop" << std::endl;

    std::cin.get();
    t.start();
    std::cout << "Timer restart" << std::endl;

    std::cin.get();
    t0.destroy();
    t.destroy();
    std::cout << "Timer destroy" << std::endl;

    std::cin.get();
    std::cout << "Process end" << std::endl;

    return 0;
}
