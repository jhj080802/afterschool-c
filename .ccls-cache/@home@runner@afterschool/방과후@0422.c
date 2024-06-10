// #include <stdio.h>
// // #include<unistd.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//   // 1
//   //  for(int i=10;i>0;i--){
//   //    printf("%d \n", i);
//   //    sleep(1);
//   //  }
//   //  printf("발사!");

//   // 2
//   //  int a;
//   //  printf("반복 횟수 : ");
//   //  scanf("%d", &a);
//   //  for(int i=0;i<a;i++)
//   //    printf("안녕하세요? \n");

//   // 3
//   //  for(int i = 1; i<8; i++){
//   //    for(int j = 0; j<i; j++)
//   //      printf("%d", j+1);
//   //    for(int j=i; j<7; j++)
//   //      printf("*");
//   //    printf("\n");
//   //  }

//   // 4
//   //  int a, sum=0;
//   //  while(1){
//   //    printf("정수 입력 : ");
//   //    scanf("%d", &a);
//   //    sum+=a;
//   //    if(a==0){
//   //      break;
//   //    }
//   //  }
//   //  printf("합계 = %d", sum);

//   // 5
//   //  for(int i=1; i<=100; i++){
//   //    if(i%3==0)
//   //      printf("%d ", i);
//   //  }

//   // 6
//   //  for(int i = 1; i<=100; i++){
//   //    if(i%3==0 && i%5==0){
//   //      printf("%d ", i);
//   //    }
//   //  }

//   // 7
//   //  int a, b, sum=0;
//   //  printf("시작 정수 : ");
//   //  scanf("%d", &a);
//   //  printf("종료 정수 : ");
//   //  scanf("%d", &b);
//   //  for(int i=a; i<=b; i++){
//   //    sum += i;
//   //  }
//   //  printf("%d", sum);

//   // 8
//   //  for(int i = 65; i<=90; i++){
//   //    printf("%d : %c \n", i, i);
//   //  }

//   // 9
//   //  int sum =0;
//   //  while(1){
//   //    char a;
//   //    printf("문자 입력 : ");
//   //    scanf(" %c", &a);
//   //    if(a=='.')
//   //      break;
//   //    else if(a=='a')
//   //      sum++;
//   //  }
//   //  printf("%d", sum);

//   // 10
//   //  printf("=====================\n");
//   //  printf("화씨온도\t섭씨온도\n");
//   //  printf("=====================\n");
//   //  for(int i =0; i<=100; i+=10){
//   //    printf("%d\t%d\n", i, (i-32)*5/9);
//   //  }

//   // 11
//   //  int a;
//   //  printf("정수를 입력하시오 : ");
//   //  scanf("%d", &a);
//   //  for(int i=1; i<=a; i++){
//   //    for(int j=1; j<=i; j++)
//   //      printf("%3d ", j);
//   //    printf("\n");
//   //  }

//   // 12
//   //  int a;
//   //  srand(time(NULL));
//   //  for(int i=0; i<10; i++){
//   //    a = rand()%50+10;
//   //    for(int j = 0; j< a; j++)
//   //      printf("*");
//   //    printf("\n");
//   //  }

//   // 13
//    // int a,x=0,y=1, cnt=0, i=1;
//    // printf("몇 번째 항까지 구할까요? ");
//    // scanf(" %d", &a);
//    // printf("%d", x);
//    // while(cnt!=a){
//    //   while(1){
//    //     if(x+y==i){
//    //       printf(" %d", i);
//    //       x=y;
//    //       y=i;
//    //       cnt++;
//    //       break;
//    //     }else
//    //       i++;
//    //   }
//    // }

//   // 14
//   //  int n, sum =0, i;
//   //  printf("n의 값을 입력하시오. : ");
//   //  scanf("%d", &n);
//   //  for(i=1; i<=n; i++){

//   //   sum +=i*i;
//   // }
//   //   printf("계산값 = %d", sum);

//   // 15
//   // float feul=200.0,b;
//   // char a;
//   // printf("초기 연료량 : %.0f \n", feul);
//   // while(feul>10.0){
//   //   printf("연료 충전은 +, 소모는 -로 입력해주세요. : ");
//   //   scanf(" %c%f", &a, &b);
//   //   if(a=='+'){
//   //     feul+=b;
//   //     printf("현재 남아있는 양은 %f입니다. \n", feul);
//   //   }
//   //   else if(a=='-'){
//   //     feul-=b;
//   //     printf("현재 남아있는 양은 %f입니다. \n", feul);
//   //   }  
//   //   else
//   //     printf("지원하지 않는 값입니다. \n");
//   // }
//   // printf("\n(경고) 연료가 10 이하입니다. ");

//   // 16
//   // int a,cnt=0;
//   // printf("정수를 입력하시오. : ");
//   // scanf("%d", &a);
//   // for(int i=2; i<a; i++){
//   //   if(a%i==0){
//   //     printf("%d는(은) 약수가 아닙니다. ", a);
//   //     break;
//   //   }
//   //   else 
//   //     cnt++;
//   // }
//   // if(cnt==a-2)
//   //   printf("%d는(은) 소수입니다. ", a);

//   // 17
//   // int cash = 50, last = 250, bets=0, a=0;
//   // printf("초기 금액 $%d\n", cash);
//   // printf("목표 금액 $%d\n", last);
//   // bets++;
//   // srand(time(NULL));
//   // while(cash>0 && cash<last){
//   //   if((double)rand()/RAND_MAX< 0.5){
//   //     cash++;
//   //   }else if((double)rand()%a+2 >= 0.5)
//   //     cash--;
//   // }
//   // printf("1000번 중의 %d번 승리\n", bets);
//   // printf("이긴 확률 = %f", (double)bets/1000);

//   // 18
//   // double son = 4.0, mom = 1.0, PI=0;
//   // int cnt = 0,cnt2;
//   // printf("반복 횟수 : ");
//   // scanf("%d", &cnt2);
//   // while(cnt<cnt2){
//   //   if(cnt%2==0)
//   //     PI += son/mom;
//   //   else
//   //     PI -= son/mom;
//   //   cnt++;
//   //   mom+=2;
//   // }printf("PI = %f\n", PI);

//   // 19
//   // int amount = 12;
//   // printf("현재 스틱의 개수 : %d", amount);

//   // 18
//   // printf("1부터 100 사이의 수를 생각하세요.\n");
  
//   return 0;
// }