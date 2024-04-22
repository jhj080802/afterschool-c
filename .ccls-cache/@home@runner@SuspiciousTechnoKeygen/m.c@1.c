// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int test(int *arr);
// int l(int *arr);

// int main(void){
//   int number, arr[6]={0,0,0,0,0,0};
//   char a;

//   printf("로또를 몇번 뽑을지 입력하세요. : ");
//   scanf("%d", &number);
//   for(int i=0; i<number; i++){
//     printf("-----6개의 번호를 입력----- \n");
    
//     for(int j = 0; j<6;j++){
//       printf("%d번 째 번호 입력 : ", j+1);
//       scanf("%d", &arr[j]);
      
//       if(test(arr) == 1){
//           printf("중복된 숫자를 입력했습니다. 다른 숫자를 입력해 주세요. \n");  
//           j--;
//       }
//     }
//   }
//   printf("l입력 : 입력한 로또의 번호들이 화면에 출력 \n");
//   printf("입력 : ");
//   scanf("%c", &a);
//   if(a == 'l'){
//     for(int i = 0; i<6; i++){
//       printf("%d ", arr[i]);
//     }
//   }
   
//   printf("f입력 : 결과 확인 \n");
//   printf("입력 : ");
//     scanf("%c", &a);
//     if(a == 'f'){
      
//     }
// }

// int test(int *arr){
//   for(int i = 0; i<6; i++){
//     for(int j = i+1; j<6; j++)
//         if(arr[i] == arr[j] && arr[i] != 0)
//           return 1;
//   }
//     return 0;
// }




// //int random = rand()%45+1;