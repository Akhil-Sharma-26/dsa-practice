#include<stdio.h>
// Write a program to impliment multithreading where t1 calculates sum, t2 finds max, t3 finds min of the arr[10].
#include <pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

void *myThreadFun(void *vargp){
    int arr[10] = {4,34,3,43,5,2,3,53,6,3};
    int sum = 0;
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < 10; i++){
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Sum: %d\n", sum);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return NULL;
}
int main(){
	int arr[10] = {4,34,3,43,5,2,3,53,6,3};
	pthread_t thread_id;
    pthread_create(&thread_id, NULL, myThreadFun, NULL); // the thread, 
    pthread_join(thread_id, NULL);
    return 0;
}


// 