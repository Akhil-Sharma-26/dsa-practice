#include<stdio.h>
#include<stdlib.h>
#pragma Comment (Lib, "pthreadvc2.lib ") //  This sentence must be added.
#include<pthread.h>
#include<unistd.h>
#define NUM_THREADS 3
int arr[10] = {4,34,3,43,5,2,3,53,6,3};

void* sum(void* argc){ // why void*? because we don't know what type of data we are going to get
    int* thread_id = (int*)argc; // why int*? because we know that the thread_id is an integer and we are typecasting it to an integer pointer
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    sleep(5);
    printf("Thread: %d \t Sum: %d\n",*thread_id, sum);
    pthread_exit(NULL); // why NULL? because we don't want to return anything from the function 
}
void* max(void* argc){
    int* thread_id = (int*)argc; 
    int max = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    } 
    sleep(5); // 5 means 5 seconds
    printf("Thread: %d \t Max: %d\n",*thread_id, max);
    pthread_exit(NULL);
}
void* min(void* argc){
    int* thread_id = (int*)argc;
    int min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    sleep(5); // why sleep? to show that the threads are running in parallel
    printf("Thread: %d \t Min: %d\n",*thread_id, min);
    pthread_exit(NULL); 
}
int main(){
    pthread_t threads[NUM_THREADS]; // array of threads. They help us to create multiple threads at once 
    int thread_id[NUM_THREADS]; // array of thread_id's. They help us to identify the threads
    for(int i = 0; i < NUM_THREADS; i++){
        thread_id[i] = i; // why i? because we want to assign the thread_id's as 0, 1, 2
        printf("Creating thread: %d\n", thread_id[i]);
        if(i == 0){
            pthread_create(&threads[i], NULL, sum, (void*)&thread_id[i]); // why &thread_id[i]? because we want to pass the address of the thread_id
        }
        else if(i == 1){
            pthread_create(&threads[i], NULL, max, (void*)&thread_id[i]); // void* is a generic pointer which is used to pass any type of data and here &thread_id[i] is an integer pointer
        }
        else if(i == 2){
            pthread_create(&threads[i], NULL, min, (void*)&thread_id[i]);
        }
    }
    for(int i = 0; i < NUM_THREADS; i++){
        pthread_join(threads[i], NULL); // why NULL? because we don't want to return anything from the function 
    }
    return 0;
}