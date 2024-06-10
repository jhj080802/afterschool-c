//1 
// #include <stdio.h>
// int main(void) {
//   float x=0,y=0;
//   while(1){
//     printf("x=%f, y=%f, f(x,y)=%f\n", x, y, 1.5*x+3.0*y);
//     y++;
//   }
//   return 0;
// }

//2
// #include <stdio.h>
// int main(){
//   float num1, num2;
//   printf("실수를 입력하시오 : ");
//   scanf("%f", &num1);
//   printf("실수를 입력하시오 : ");
//   scanf("%f", &num2);
//   printf("더 큰 수는 %f입니다. ", (num1>num2)?num1:num2);
//   return 0;
// }

//3
// #include<stdio.h>
// void draw_stars(void);
// int main(){
//   draw_stars();
//   printf("Hello World!\n");
//   draw_stars();
// }

// void draw_stars(void){
//   printf("*********************************\n");
// }

//4
// #include<stdio.h>
// void get_divisor(int a);
// int main(){
//   printf("8의 약수 : ");
//   get_divisor(8);
// }

// void get_divisor(int a){
//   for(int i=1; i<=a; i++){
//     if(a%i==0) printf("%d ", i);
//   }
// }

//5
// #include<stdio.h>
// #include<math.h>
// int main(){
//   int x1,y1;
//   int x2,y2;
//   printf("첫 번째 점의 좌표를 입력하시오(x,y) :");
//   scanf("%d %d", &x1, &y1);
//   printf("두 번째 점의 좌표를 입력하시오(x,y) :");
//   scanf("%d %d", &x2, &y2);
//   printf("두 점 사이의 거리는 %f입니다. ", sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
// }

//6
// #include<math.h>
// #include<stdio.h>
// void quad_eqn(int a, int b, int c);

// int main(void){
//   int a,b,c;
  
//   printf("2차 방정식의 개수를 입력하시오 : \n");
//   printf("a : ");
//   scanf(" %d", &a);
//   printf("b : ");
//   scanf(" %d", &b);
//   printf("c : ");
//   scanf(" %d", &c);
//   quad_eqn(a, b, c);

// }

// void quad_eqn(int a, int b, int c){
//   if(b*b-4*a*c>0){
//     printf("첫 번째 근 = %f\n", (-b+sqrt(b*b-4*a*c))/2*a);
//     printf("두 번째 근 = %f", (-b-sqrt(b*b-4*a*c))/2*a);
//   }
//   else printf("근이 없습니다. ");
// }

//7
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//   int num, random;
//   srand(time(NULL));
//   while(1){
//     random = rand()%2;
//     printf("앞(0) 또는 뒤(1)를 선택하세요(종료는 -1) : ");
//     scanf("%d", &num);
//     if(num==random){
//       printf("사용자가 이겼습니다. \n");
//     } 
//     else if(num==-1) break;
//     else printf("컴퓨터가 이겼습니다. \n");
//   }
// }
