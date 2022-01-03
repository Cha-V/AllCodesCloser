#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void returnRunLengthEncoding(char src[], char dest[])
{
    int i=0, j=0, count=0, t=1;
    dest[0] = '\0';    
    char ch=src[0];
    while(i<strlen(src)){
        if(src[i]==ch){
            count++;
        }
        else{
            if(count>1){
                t=0;
              if(count<=9){
              	dest[j++]=ch;
            	dest[j++]='0'+count;
                count=1;
                ch=src[i];
              }
                else{
                  dest[j++]=ch;
                    int rev=0;
                    while(count>0){
                        rev=rev*10+count%10;
                        count/=10;
                    }
                    while(rev>0){
                        dest[j++]='0'+(rev%10);
                        rev/=10;
                    }
                    count=1;
                    ch=src[i];
                }
            }
            else{
            count=1;
            dest[j++]=ch; 
              ch=src[i];
               t=1; 
            }
        }
        i++;
    }
    if(count>1){
                dest[j++]=ch;
                    int rev=0;
                    while(count>0){
                        rev=rev*10+count%10;
                        count/=10;
                    }
                    while(rev>0){
                        dest[j++]='0'+(rev%10);
                        rev/=10;
                    }
            }
    else{ 
        if(t==1||t==0){
        dest[j++]=ch; 
        }
    } 
  dest[j]='\0';
}