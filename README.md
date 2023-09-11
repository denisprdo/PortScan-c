## Resumo
Scanner de portas para efetuar pentest.

## Pré-requisitos
Antes de compilar e executar este programa, você precisará ter o GCC (GNU Compiler Collection) instalado em seu sistema. Você pode verificar se o GCC está instalado executando o seguinte comando no terminal:

```bash
gcc --version
```

## Compilação
Para compilar o programa, siga estas etapas:

1 - Abra o terminal e navegue até o diretório onde o arquivo do programa está localizado.

2 - Use o comando gcc para compilar o código-fonte. Por exemplo, se o arquivo do programa se chama PortScan-c, você pode usar o seguinte comando:

```
gcc PortScan-c.c -o PortScan-c
```

Isso irá compilar o código e criar um arquivo executável chamado 'PortScan-c' no mesmo diretório.

## Execução
Após a compilação bem-sucedida, você pode executar o programa usando o seguinte comando:

```
./PortScan ip_address porta_inicial porta_final
```

Exemplo:
```
./PortScan 192.168.0.1 1 25
```
