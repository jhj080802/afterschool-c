#include <stdio.h>
// #include<unistd.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 1
  //  for(int i=10;i>0;i--){
  //    printf("%d \n", i);
  //    sleep(1);
  //  }
  //  printf("발사!");

  // 2
  //  int a;
  //  printf("반복 횟수 : ");
  //  scanf("%d", &a);
  //  for(int i=0;i<a;i++)
  //    printf("안녕하세요? \n");

  // 3
  //  for(int i = 1; i<8; i++){
  //    for(int j = 0; j<i; j++)
  //      printf("%d", j+1);
  //    for(int j=i; j<7; j++)
  //      printf("*");
  //    printf("\n");
  //  }

  // 4
  //  int a, sum=0;
  //  while(1){
  //    printf("정수 입력 : ");
  //    scanf("%d", &a);
  //    sum+=a;
  //    if(a==0){
  //      break;
  //    }
  //  }
  //  printf("합계 = %d", sum);

  // 5
  //  for(int i=1; i<=100; i++){
  //    if(i%3==0)
  //      printf("%d ", i);
  //  }

  // 6
  //  for(int i = 1; i<=100; i++){
  //    if(i%3==0 && i%5==0){
  //      printf("%d ", i);
  //    }
  //  }

  // 7
  //  int a, b, sum=0;
  //  printf("시작 정수 : ");
  //  scanf("%d", &a);
  //  printf("종료 정수 : ");
  //  scanf("%d", &b);
  //  for(int i=a; i<=b; i++){
  //    sum += i;
  //  }
  //  printf("%d", sum);

  // 8
  //  for(int i = 65; i<=90; i++){
  //    printf("%d : %c \n", i, i);
  //  }

  // 9
  //  int sum =0;
  //  while(1){
  //    char a;
  //    printf("문자 입력 : ");
  //    scanf(" %c", &a);
  //    if(a=='.')
  //      break;
  //    else if(a=='a')
  //      sum++;
  //  }
  //  printf("%d", sum);

  // 10
  //  printf("=====================\n");
  //  printf("화씨온도\t섭씨온도\n");
  //  printf("=====================\n");
  //  for(int i =0; i<=100; i+=10){
  //    printf("%d\t%d\n", i, (i-32)*5/9);
  //  }

  // 11
  //  int a;
  //  printf("정수를 입력하시오 : ");
  //  scanf("%d", &a);
  //  for(int i=1; i<=a; i++){
  //    for(int j=1; j<=i; j++)
  //      printf("%3d ", j);
  //    printf("\n");
  //  }

  // 12
  //  int a;
  //  srand(time(NULL));
  //  for(int i=0; i<10; i++){
  //    a = rand()%50+10;
  //    for(int j = 0; j< a; j++)
  //      printf("*");
  //    printf("\n");
  //  }

  // 13
  //  int a,x=0,y=1, cnt=0, i=0;
  //  printf("몇 번째 항까지 구할까요? ");
  //  scanf(" %d", &a);
  //  printf("%d", x);
  //  while(cnt!=a){
  //    i = y+1;
  //    while(1){
  //      if(x+y==i){
  //        printf(" %d", i);
  //        x=y;
  //        y=i;
  //        cnt++;
  //        break;
  //      }else
  //        i++;
  //    }
  //  }

  // 14
  //  int n, sum =0, i;
  //  printf("n의 값을 입력하시오. : ");
  //  scanf("%d", &n);
  //  for(i=1; i<=n; i++){

  //   sum +=i*i;
  // }
  //   printf("계산값 = %d", sum);

  // 15
  return 0;
}