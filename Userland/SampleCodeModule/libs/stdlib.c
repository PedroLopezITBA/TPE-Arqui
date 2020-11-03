#ifndef STD_LIB_C
#define STD_LIB_C value
#include <stdlib.h>

int atoi(char * str);
double strToDouble(char * str);
int intToStr(char *str, int num);
int strlen(char *str);
int strcmp(char * str1, char * str2);
int intToBase(unsigned long long num, int base, char*buffer);

int atoi(char * str){
  int aux = 0;
  while (*str!=0){
    aux = aux*10 + (*str)+'0';
    str++;
  }
  return aux;
}

int intToBase(unsigned long long num, int base, char*buffer){
    char stack[11];
    int c = 0;
    int i=0;
    int remainder = 0;
    if(num==0) stack[i++]='0';
    while(num!=0){
        remainder = num % base;
        stack[i]=remainder>=10? remainder+'A'-10:remainder+'0';
        num = num/base;
        i++;
    }
    c=i;
    i--;
    while(i>=0){
        *buffer=stack[i];
        buffer++;
        i--;
    }
    *buffer=0;
    return c;
}

double strToDouble(char * str){
  double aux = 0;
  while (*str!=','){
    aux = aux*10 + (*str)+'0';
  }
  int i =0;
  while (*str!=0){
    aux = aux*10+(*str)+'0';
    i++;
    str++;
  }
  aux/=(double) 10 * i;
  return aux;
}


int intToString(unsigned long long num, char * buffer){
    return intToBase(num,10,buffer);
}

int strlen(char *str){
  int i =0;
  for ( i = 0; *(str+i); i++)
  {
    
  }
  return i;
}

int strcmp(char * str1, char * str2){
    int i =0;
    while(str1[i] != 0 && str2[i] != 0 ){
        if(str1[i] != str2[i]){
            return str1[i]-str2[i];
        }
        i++;
    }
    return str1[i]-str2[i];
}

#endif
