 // Egyptian collegiate programming\ contest
// #include <stdio.h>
//     int main(){
//         char s[1000001];
//         fgets(s,sizeof(s),stdin);
//         for(int i = 0; s[i] != '\\' ; i++){
//             printf("%c",s[i]);
//         }
        
//         return 0;
//     }

   
   #include <stdio.h>
   #include <string.h>
   int main(){
     char s[1000001];
     scanf("%s",s);
     int length = strlen(s);
     int count = 0;
     for(int i = 0; i <length; i++){ 
        count += s[i] - 48;
     }

     printf("%d",count);
     

   }

   