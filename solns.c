/* Enter your solutions in this file */
#include <stdio.h>


float average(int numbers[], int length){
 int sum = 0;
 for(int i = 0; i < length;i++){
 sum+= numbers[i];
 }
 return (float)sum/length;
 }



int factors(int num , int arr[]){
int c = num, cnt=0,cnt1=0;
for( int i = 2 ;i<=num;i++){
if(num%i==0){
for(int j = 2; j<=i;j++){
if(i%j==0)
cnt++;
}
if(cnt == 1){
while(c%i==0){
arr[cnt1] = i;
c/=i;
cnt1++;
}
c = num;
}
cnt=0;
}
else
continue;
}
return cnt1;
}

 

int max(int numbers[], int length){
int maximum;
maximum = numbers[0];
for(int i = 0; i<length; i++){
if(numbers[i] >= maximum){
maximum = numbers[i];
}
}
return maximum;
}



int min(int numbers [], int length){
 int minimum;
 minimum = numbers[0];
 for(int i = 0; i < length ; i++){
 if(numbers[i] <= minimum){
 minimum = numbers[i];
 }
 }
 return minimum;
 }




int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; i++) {
      int count = 0;
      
      for (j = 0; j < n; j++) {
         if (a[j] == a[i])
         count++;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}
