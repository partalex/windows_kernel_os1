#ifndef _semaphor_h_
#define _semaphor_h_
#include "List.h"
typedef unsigned int Time;
class KernelSem;
class Semaphore {
public:
    Semaphore (int init = 1);
    virtual ~Semaphore ();
    virtual int wait (Time maxTimeToWait);
    // virtual int signal(int n = 0); 2020 projekat
    virtual void signal(); // 2021 projekat
    int val () const; // Returns the current value of the semaphore
private:
    KernelSem* myImpl;
};
#endif
