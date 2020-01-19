#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//const char* my_strcat(const char* a, const char* b) {
//   char *c = (char *)malloc(sizeof(char) * (strlen(a) + strlen(b)));
//   while(*a){
//     *c++ = *a++;
//   }
//   while(*b){
//     *c++ = *a++;
//   }
//   *c='\0';
//   const char * d = c;
//   return d;
//}
int main() {
  const char *a = "abc";
  const char *b = "ddd";
  int l1 = strlen(a);
  int l2 = strlen(b);
  char r[l1+l2];
  r[0]='\0';
  strcat(r, a);
  strcat(r, b);
  printf("aaa%s\n",r);
}
