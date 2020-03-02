#ifndef __NETWERKING_H
#define __NETWERKING_H

#define NET_OK 0
#define NET_ERR -1
#define NET_ERR_LEN 256

int initTcpServer(int port);
int netListen(int s, struct sockaddr *sa, socklen_t len);
int netSetBlock(char *err, int fd, int non_block);
int netNonBlock(char *err, int fd);
int netBlock(char *err, int fd);

#endif