#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

//helper function
short socketCreate(void) {
    short hSocket;
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM, 0);
    return hSocket;
}

//helper function
int socketConnect(int hSocket){
    int iRetval = -1;
    int ServerPort = 12345; //as to match with the port # in the server code

    struct sockaddr_in remote = {0};
    remote.sin_addr.s_addr = inet_addr("127.0.0.1"); //local host
    remote.sin_family = AF_INET;
    remote.sin_port = htons(ServerPort);

    iRetval = connect(hSocket,(struct sockaddr *)&remote, sizeof(remote));
    return iRetval;
}

int socketSend(int hSocket, char* Rqst, short lenRqst){
    int shortRetval = -1;
    struct timeval tv;
    tv.tv_sec = 20; /* 20 Secs Timeout */
    tv.tv_usec = 0;

    if(setsockopt(hSocket, SOL_SOCKET, SO_SNDTIMEO,(char*)&tv, sizeof(tv)) < 0) {
        printf("Time Out\n");
        return -1;
    }

    shortRetval = send(hSocket, Rqst, lenRqst, 0);
    return shortRetval;
}

//receive the data from the server
int socketReceive(int hSocket, char* Rsp, short RvcSize) {
    int shortRetval = -1;
    struct timeval tv;
    tv.tv_sec = 20;
    tv.tv_usec = 0;

    if(setsockopt(hSocket, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv, sizeof(tv)) < 0){
        printf("Time Out\n");
        return -1;
    }

    shortRetval = recv(hSocket, Rsp, RvcSize, 0);
    printf("Response %s\n", Rsp);

    return shortRetval;
}

//main driver program
int main()
{
    int hSocket = 0, read_size = 0;
    struct sockaddr_in server;
    char sendToServer[100] = {0};
    char server_reply[200] = {0};

    //Create socket
    hSocket = socketCreate();

    if(hSocket == -1){
            printf("Could not create socket\n");
    }

    printf("Socket is created\n");
    //connect to remote server
    if(socketConnect(hSocket) < 0){
        perror("connect failed.\n");
        return 1;
    }

    printf("Sucessfully connected with server\n");
    printf("Enter the Message: ");
    fgets(sendToServer, 100, stdin);

    //Send data to the server
    socketSend(hSocket, sendToServer, strlen(sendToServer));

    //Received the data from the server
    read_size = socketReceive(hSocket, server_reply, 200);
    printf("Server response: %\n\n", server_reply);

    close(hSocket);
    return 0;
}
