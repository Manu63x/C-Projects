#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * func(void *arg){
  *(int*)arg*=*(int*)arg;
  pthread_exit( NULL );
}

int main(int argc, char *argv[]){
    int num[2];
    pthread_t tid1, tid2;
    if(argc!=3){
      printf("Errore!\n");
      system("PAUSE");
      return 1;
    }else{
      //conversione ascii to int
      num[0]=atoi(argv[1]);
      num[1]=atoi(argv[2]);
      //creazione thread
      pthread_create(&tid1 , NULL, func, (void *) &num[0]);
      pthread_create(&tid2 , NULL, func, (void *) &num[1]);
      //join per aspettare la terminazione dei thread
      pthread_join(tid1, NULL);
      pthread_join(tid2, NULL);
      //stampa della somma del quadrato eseguito dai 2 thread
      printf("%d\n", num[0]+num[1]);
      system("PAUSE");
      return 0;
    }
}