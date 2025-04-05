#include <iostream>
#include <thread>

/*
 thread_local 修饰的变量在每个线程中都有独立的实例，因此每个线程对该变量的操作不会影响其他线程。

独立性：每个线程都有自己独立的变量副本，不同线程之间的读写操作互不干扰。
生命周期：thread_local 变量在其线程结束时自动销毁。
初始化：thread_local 变量可以进行静态初始化或动态初始化，支持在声明时初始化。
*/

thread_local int threadSpecificVar = 0;

void threadFunction(int id){
    threadSpecificVar = id;
    std::cout <<"Thread"<<id<<":threadSpecificVar="<<threadSpecificVar<<std::endl;
}

int main(){
    std::thread t1(threadFunction,1);
    std::thread t2(threadFunction,2);

    t1.join();
    t2.join();

    return 0;
}