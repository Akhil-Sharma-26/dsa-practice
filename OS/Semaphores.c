#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
int common = 10;
sem_t mutex;
void* fun1(void* argc){
    sem_wait(&mutex); // wait for the semaphore to be available
    int x = common;
    sleep(2);
    x++;
    common = x;
    printf("Thread 1: %d\n", common); 
    sem_post(&mutex); // signal the semaphore that it is available
    pthread_exit(NULL);
}
void fun2(void* argc){
    sem_wait(&mutex);
    int x = common;
    x--;
    common = x;
    printf("Thread 2: %d\n", common);
    sem_post(&mutex);
    pthread_exit(NULL);
}
int main(){
    sem_init(&mutex, 0, 1); // initialize the semaphore. 0 because of thread and 1 is the value of the semaphore
    pthread_t thread1, thread2;
    int thread_id[2] = {1,2};
    pthread_create(&thread1, NULL, fun1, &thread_id[0]);
    pthread_create(&thread2, NULL, fun2, &thread_id[1]);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    sem_destroy(&mutex); // destroy the semaphore
    printf("The value of the commonn variable is %d\n", common);
    return 0;
}


