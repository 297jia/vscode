//课后作业
#include <stdio.h>
int main(){
   int n;
   printf("请输入班级的学生人数：");
   scanf("%d",&n);
   int student[n];
   float score[n];
   //输入学生学号和成绩
   for (int i=0;i<=n;i++){
      printf("请输入第 %d 位 学生的学号和成绩：");
      scanf ("%d %f\n",&student[i],&score[i]);
   }
   // 比较高低
    int x,y,z;int temp;
    for(x = 0;x<n-1;x++){
        z = x;
        for(y =y+1;y<n;y++){
            if(student[y] > student[z])
            z = y;
            temp = student[z];student[z] = student[x];student[x] = temp;
            printf("student[z],studennt[y],student[x]");
        }
    }

   return 0;
}