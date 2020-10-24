
#include <iostream>
#include <string>
#include <future>
#include <condition_variable>
#include <chrono>

std::mutex m1;
std::condition_variable cv;

bool t1_flag = true;    
bool t2_flag = false; 

constexpr int max = 20;
int iter=1;

void printID(bool* thisflag,bool* otherFlag,int threadID)
{
    std::unique_lock<std::mutex> lck(m1);
    while(iter<max)
    {
        cv.wait(lck,[=](){return *thisflag;}); 
        if(iter>max)                           
            break;
        
        std::cout << "T:"<< threadID <<"--start"<<std::endl;
        
        for(int i=iter;i<iter+5;i++)
        {
        std::cout << "Process-"<<i<<std::endl;
        }
        
        iter += 5;

        *thisflag=false;
        *otherFlag=true;           
        cv.notify_one();      

    }
}


int main(){

std::cout<<"Main-Start"<<std::endl;

std::thread t1(printID,&t1_flag,&t2_flag,1);
std::thread t2(printID,&t2_flag,&t1_flag,2);

t1.join();
t2.join();

std::cout<< "Main-end"<<endl;
return 0;

}

