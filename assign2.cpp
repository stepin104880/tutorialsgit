#include <iostream>
#include <string>
#include <thread>
#include <future>


#define str(i) std::to_string(i)

int sumArray(int *arr,int start,int end){
    int sum=0;
    for(int i=start;i<end;i++)
        sum+=arr[i];
    return sum;
}   


int main(){
std::cout<<"Main"<<std::endl;
	     //0,1,1,1,1,1,1,1,1,,1
int arr[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

std::future<int> result1;
std::future<int> result2;
std::future<int> result3;

result1 = std::async(sumArray, arr, 0,10);
result2 = std::async(sumArray, arr, 11,20);
result3 = std::async(sumArray, arr, 21,30);

std::cout<<"Waiting for results"<<std::endl;

int res = result1.get()+ result2.get()+result3.get();

//std::cout << res << std::endl;



//int res = result1.get()+result2.get()+result3.get();
std::cout<<"Result: "<<res<<std::endl;
std::cout<<"Process finished"<<std::endl;


}
