#include "../include/ThreadManager.h"


ThreadManager::ThreadManager()
{
	
}

ThreadManager::~ThreadManager()
{

}



// Create Thread Function
void* ThreadManager::threadfn(int n , void* args,...)
{
	va_list vl;
	va_start(vl, args);

	//init thread arg
//	pthread_mutex_init(&r->lock);
		
	for(int i = 0; i < n; i++)
	{
	    if(sizeof(vl) == sizeof(int))
	    {
	    	int i = va_arg(vl, int);
		std::cout << i << '\n';

	    }
//	    if (*args == static_cast<char*>)
//	    {

//	    }
	}
//	pthread_
	va_end(vl);

}

