#include <pthread.h>
#include <iostream>
#include <stdarg.h>

#define NTD 180

using namespace std;

class ThreadManager
{
    public:
    ThreadManager();
    ~ThreadManager();

    private:
    /**
     * Thread function who is sent to thread_t
     * @param void* args 
     *  arguments from fucntion
    */
    void* threadfn(int n, void* args...);



    // Struct to hold thread mutex
    typedef struct result
    {
   	pthread_mutex_t lock;
	int lastid;

    }*result_t;

    pthread_t threadpool[NTD];
    //threadarg data[NTD];
    result r;


};
