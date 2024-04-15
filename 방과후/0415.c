#include<stdio.h>
int main(void){
  //1번
  // int a, b;
  // printf("분자와 분모를 입력하시오 : ");
  // scanf("%d %d", &a, &b);
  // if(b==0){
  //   printf("0으로 나눌 수는 없습니다. ");    
  // } else{
  //   printf("몫은 %d입니다. ", a/b);
  // }

  //2번
  // int a, b;
  // printf("두 개의 정수를 입력하세요 : ");
  // scanf("%d %d", &a, &b);
  // printf("두 수의 합은 %d입니다.\n", a+b);
  // if(a>b)
  //   printf("두수의 차는 %d입니다. ", a-b);
  // else
  //   printf("두수의 차는 %d입니다. ", (a-b)*-1);

  //3번
  // int a;
  // printf("요일을 정수로 입력하시오 : ");
  // scanf("%d", &a);
  // if(a==5||a==6)
  //   printf("주말입니다. ");
  // else
  //   printf("주중입니다. ");

  //4번
  // char a;
  // printf("문자를 입력하시오 : ");
  // a = getchar();
  // //scanf("%c", &a); //getchar랑 같음

  // if(a >='A' && a<='Z'||a >= 'a'&& a <= 'z')
  //   printf("알파벳입니다. ");
  // else if('!'<=a&&a<='/')
  //   printf("특수문자입니다. ");
  // else
  //   printf("숫자입니다. ");

  //5번
  // char a;
  // printf("문자를 입력하시오 : ");
  // scanf("%c", &a);
  // if('A'<=a && a<='Z')
  //   printf("대문자입니다. ");
  // else if(a>='a'&&a<='z')
  //   printf("소문자입니다. ");

  //6번
  // char a;
  // printf("신호등(R, G, Y) : ");
  // scanf("%c", &a);
  // if(a=='R')
  //   printf("정지!");
  // else if(a == 'G')
  //   printf("주행!");
  // else if(a == 'Y')
  //   printf("주의!");

//7번
  // int a, b, c;
  // printf("삼각형의 세 변을 입력하시오. : ");
  // scanf("%d %d %d", &a, &b, &c);
  // if(a == b && b ==c)
  //   printf("정삼각형");
  // else if(a == b || b ==c || a == c)
  //   printf("이등변삼각형");

//8번
  // float a;
  // printf("과세 표준을 입력하시오(만 원) : ");
  // scanf("%f", &a);
  // if(a<=1000)
  //   printf("소득세는 %.f만 원입니다. ", a*0.08);
  // else if(a>1000 && a<=4000)
  //   printf("소득세는 %.f만 원입니다. ", a*0.17);
  // else if(a>4000 && a<=8000)
  //   printf("소득세는 %.f만 원입니다. ", a*0.26);
  // else 
  //   printf("소득세는 %.f만 원입니다. ", a*0.35);

//9번
  // int a, b;
  // char x;
  // printf("수식을 입력하시오 : ");
  // scanf("%d %c %d", &a, &x, &b);
  // if(x == '+')
  //   printf("%d", a+b);
  // else if(x == '-')
  //   printf("%d", a-b);
  // else if(x == '*')
  //   printf("%d", a*b);
  // else if(x == '/')
  //   printf("%d", a/b);

//10번
  // char a;
  // printf("학점을 입력하시오 : ");
  // scanf("%c", &a);
  // switch(a){
  //   case 'A' : {
  //     printf("아주 잘했어요! "); 
  //     break;
  //   }
  //    case 'B' : {
  //     printf("좋습니다. "); 
  //       break;
  //    }        
  //   case 'C' : {
  //     printf("만족스럽습니다. "); 
  //     break;
  //   }
  //   case 'D' : {
  //     printf("더 노력해보세요.");
  //     break;
  //   }
  //   case 'F' : {
  //     printf("안타깝습니다."); 
  //     break;
  //   }
  // }

//11번
  // int x,y;
  // printf("점의 좌표를 입력하시오. : ");
  // scanf("%d %d", &x, &y);
  // if(x>0 && y>0)
  //   printf("1사분면입니다. ");
  // else if(x<0 && y>0)
  //   printf("2사분면입니다.");
  // else if(x<0 && y<0)
  //   printf("3사분면입니다.");
  // else if(x>0 && y<0)
  //   printf("4사분면입니다.");

//12번
  // int a, b, c;
  // printf("주사위의 값을 입력하시오 : ");
  // scanf("%d %d %d", &a, &b, &c);
  // if(a==b && b==c)
  //   printf("상금은 10000원입니다. ");
  // else if(a==b || b==c || a==c)
  //   printf("상금은 1000원입니다. ");
  // else
  //   printf("상금은 없습니다. ");
}