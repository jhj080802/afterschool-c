#include<stdio.h>
#include <string.h>
int main(){
  char str[1001];
  int count[26]={};
  
  printf("텍스트를 입력하시오: ");
  scanf("%1000s", str);
  for(int i=0; i<strlen(str); i++){
    if(str[i]>='a' && str[i]<='z'){
      count[str[i]-'a']++;
    }else if(str[i]>='A' && str[i]<='Z'){
      count[str[i]-'A']++;
    }
  }
  for(int i=0; i<26; i++){
    if(count[i]>0){
      printf("%c문자가 %d번 등장하였음!\n", 'a'+i, count[i]);
    }
  }
}