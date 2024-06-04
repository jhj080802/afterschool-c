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
