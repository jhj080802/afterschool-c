// #include<stdio.h>
// int main(void){
  
//1번
//   float weight,hight;
//   printf("체중을 입력하세요. : ");
//   scanf("%f", &weight);
//   printf("신장을 입력하세요. : ");
//   scanf("%f", &hight);
//   printf("BMI : %.2f", weight/(hight*hight));

//2번
  // int price;
  // double disc_rate;
  // printf("상품 가격을 입력하세요. : ");
  // scanf("%d", &price);
  // printf("할인율을 입력하세요. : ");
  // scanf("%lf", &disc_rate);
  // printf("할인된 가격은 %.0lf원 입니다. ", price - price *disc_rate/100.0);

//3번
  // int price;
  // double rate;
  // printf("할인률(%) : ");
  // scanf("%lf", &rate);
  // printf("상품 가격(원) : ");
  // scanf("%d", &price);

  // printf("할인 전 가격은%.0lf원입니다. ", price * 100.0/(100-rate));

//4번
  // float korea, english, math;
  // printf("3과목의 점수를 입력하세요 : ");
  // scanf("%f %f %f", &korea, &english, &math);
  // printf("\n");
  // printf("총점 = %.2f\n", korea+english+math);
  // printf("평균 = %.2f", (korea + english + math)/3);

//5번
  // int A, a, b, c;
  // printf("세 자리 양의 정수를입력하세요 : ");
  // scanf("%d", &A);
  // a = A%10; //일의자리 수
  // b = (A/10) %10; //십의자리 수
  // c = A/100; //백의 자리 수
  // if((a==b)&&(b==c)&&(c==a)){
  //   printf("일치 여부 = 1");
  // }
  // else{
  //   printf("일치 여부 = 0");
  // }

//6번
  // float a,b;
  // int c;
  // printf("실수를 입력하세요. : ");
  // scanf("%f", &a);
  // c = a;
  // printf("\n정수부: %d", c);
  // printf("\n소수부 : %.2f", a-c);

//7번
  // int a;
  // printf("숫자를 입력하세요. : ");
  // scanf("%d", &a);
  // printf("LSB는 %d입니다. ", a&1);
  
//8번
  // int a, n;
  // printf("숫자를 입력하시오. : ");
  // scanf("%d", &a);
  // printf("\nn을 입력하시오 : ");
  // scanf("%d", &n);
  // printf("새로운 값 = %d", (1<<n)| a);

//9번
  // int A,B,C;
  // printf("세개의 숫자를 입력하세요. : ");
  // scanf("%d %d %d", &A, &B, &C);
  // printf("\n(A+B)%%C = %d\n", (A+B)%C);
  // printf("((A%%C)+(B%%C))%%C = %d",((A%C)+(B%C))%C);
  
//   return 0;
// }