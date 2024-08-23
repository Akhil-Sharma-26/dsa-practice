#include <sys/types.h> // for socket(), bind(), listen(), accept(), recv(), send()
#include <sys/socket.h> // for socket(), bind(), listen(), accept(), recv(), send()
#include <netdb.h> // for sockaddr_in structure
#include <stdio.h> // for printf()
#include <string.h> // for bzero()
#include <unistd.h> // for close()
int main()
{
    char str[100];
    int listen_fd, comm_fd;
    struct sockaddr_in servaddr;
    listen_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET; // AF_INET: Address Family Network -> IPv4: 2 or IPv6: 10
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY); // INADDR_ANY means any IP address can connect to this server. It's like CORS. htonl() is used to convert host byte order to network byte order.
    servaddr.sin_port = htons(22000);
    bind(listen_fd, (struct sockaddr *)&servaddr, sizeof(servaddr));// bind() is used to bind the socket to the address and port number specified in servaddr.
    listen(listen_fd, 10); // can handle 10 clients at a time. It's like a queue. If the queue is full, the client will get a connection refused error. 
    while (1)
    {
        printf("Waiting\n");
        comm_fd = accept(listen_fd, (struct sockaddr *)NULL, NULL);
        printf("Connected\n");
        bzero(str, 100);
        // fgets(str, 100, stdin); 
        // send(comm_fd, str, strlen(str), 0);
        // int n=recv(comm_fd, str, 100, 0);
        while(1){
            bzero(str, 100);
            int n = recv(comm_fd, str, 100, 0);
            if(n<=0) break;
            printf("Echoing back - %s", str);
            send(comm_fd, str, strlen(str), 0);
        }
        // recv(comm_fd, str, 100, 0);
        // printf("Echoing back - %s", str);
        // send(comm_fd, str, strlen(str), 0); 
        // close(comm_fd); 
    }
    // close(comm_fd); // for closing the connection in every iteration
}

