#include<stdio.h>

int main(){
char s1[100], s2[100];

printf("Nhap chuoi thu nhat : ");
scanf("%s",s1);
printf("Nhap chuoi thu hai : ");
scanf("%s",s2);

int i = 0, j = 0;
int flag = 0;

while (s1[i] != 0){
if (s1[i] == s2[j]){
j++;
if (s2[j] == 0){
flag = 1;
break;
}
}else
j = 0;

i++;
}

if (flag!=0)
printf("Chuoi thu hai nam trong chuoi thu nhat\n");
else
printf("Chuoi thu hai khong nam trong chuoi thu nhat\n");
}
