#include <stdio.h>

int main(int argc, char const *argv[]) {
  int bil=0,i=1,bil2=0,max=0,min=999999999999;
  float rata;
  char kar;
  printf("Masukan bilangan ke-1 :");
  scanf("%d",&bil );
  fflush (stdin);
  printf("Masukan data lagi [y/t] ?\n");
  scanf("%c",&kar);

  if (bil>max) {
    /* code */max=bil;
  }
  else {
    max=max;
  }
  if (bil<min) {
    /* code */min=bil;
  }
  else{
    min=min;
  }
i=1;
bil=bil;
max=max;
min=min;
while (kar=='y') {
  /* code */i++;
  printf("Masukan bilangan ke-%d :", i);
  scanf("%d",&bil2 );
  fflush(stdin);
  printf("Masukan data lagi [y/t] ?");
  scanf("%c",&kar );

  bil2=bil2;
  if (bil2>max) {
    /* code */max=bil2;
  }
  else{
    max=max;
  }
  if (bil2<min) {
    /* code */min=bil2;
  }
  else{
    min=min;
  }
}
bil=bil+bil2;
rata=(float)bil/i;
max=max;
min=min;
printf("\n\n\n Jumlah :%d \n",bil );
printf("\n\n\n Rata-rata :%2.2f \n",rata );
printf("\n\n\n Nilai Maximum :%d \n",max );
printf("\n\n\n Nilai Minimum :%d \n",min );

  return 0;
}
