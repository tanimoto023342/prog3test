#include<stdio.h>
#include<string.h>
int main(void){
  char test[100];
  scanf("%s",test);
  size_t len=strlen(test);
  if(test[len-3]=='s' && test[len-2]=='a' && test[len-1]=='n'){
    printf("YES");
  }else{
    printf("NO");
  }
}
