#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

int mMoney;
std::mutex mMoneyMutex;

void thread_function()
{
  std::lock_guard<std::mutex> guard(mMoneyMutex);
  std::cout<<"thread function "<< ++mMoney << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void thread_loop(int t_number, int time)
{
    //std::lock_guard<std::mutex> guard(mMoneyMutex);
    
    //std::unique_lock<std::mutex> guard(mMoneyMutex);
  while(true)
  {
    //guard.try_lock();
    //std::lock (guard);
    //std::lock_guard<std::mutex> guard(mMoneyMutex );
    //std::lock_guard<std::mutex> guard(mMoneyMutex, std::adopt_lock);
    //std::lock(mMoneyMutex);
    //std::lock_guard<std::mutex> guard(mMoneyMutex, std::adopt_lock);
    if (mMoneyMutex.try_lock())
    {
      std::cout << "Thread #"<< t_number << " money: "<< ++mMoney << std::endl;
      mMoneyMutex.unlock();
    }
    //guard.unlock();
    std::this_thread::sleep_for(std::chrono::milliseconds(time));

  }
}


int main()
{
  mMoney=0;
  std::thread thread1( thread_loop, 1, 100);
  std::thread thread2( thread_loop, 2, 100);
  std::thread thread3( thread_loop, 3, 100);
  std::thread threadObj( thread_function );
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  threadObj.join();
  thread1.join();
  thread2.join();
  thread3.join();
  std::cout<<"Exit main function"<<std::endl;
  return 0;
}
