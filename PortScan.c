#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int meusocket;
	int conecta;

	int porta;
	int inicio = atoi(argv[2]);
	int final = atoi(argv[3]);
	char *destino = argv[1];

	struct sockaddr_in alvo;

	if (argc<3)
	{
		printf("Modo de uso: ./PortScan 192.168.0.1 1 25");
	}
	else
	{
		for(porta=inicio;porta<=final;porta++)
		{
			meusocket = socket(AF_INET,SOCK_STREAM,0);
			alvo.sin_family = AF_INET;
			alvo.sin_port = htons(porta);
			alvo.sin_addr.s_addr = inet_addr(destino);

			conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

			if(conecta == 0)
			{
				printf("Porta %d - status [ABERTA] \n",porta);
				close(meusocket);
				close(conecta);
			}
			else
			{
				printf("Porta %d - status [Fechada] \n",porta);
				close(meusocket);
				close(conecta);
			}
		}
	}

	return 0;
}
