#include<stdio.h> 

#include<stdlib.h> 

#include<math.h>   

int main()

{

	printf("                算圖中的點：矩形                 \n");

	printf("-------------------------------------------------\n");

	printf("請輸入一連串(最多10個)矩形的左上及右下座標：（輸入完畢後請輸入{*}）\n");  

    char i[5];

    int u=0;

    double map[11][4];

    int t[11];

      while(1)

      {

          scanf("%s",i);

          if(i[0]=='*') break; 

          if(i[0]=='r') 

          {

            scanf("%lf %lf %lf %lf",&map[u][0],&map[u][1],&map[u][2],&map[u][3]); 

             t[u]=1;

          } 

          else

          {

            scanf("%lf %lf %lf",&map[u][0],&map[u][1],&map[u][2]);

            t[u]=0;

          }  

          u++; 

     }

    int a,b,c,m=0;

    double x,y; 

      while(1)

      {

      	printf("請輸入座標(x,y)：");  

        scanf("%lf %lf",&x,&y);

        if(x==9999.9&&y==9999.9) break; 

        int flag=0;

        m++;

          for(a=0;a<u;a++) 

          {

            if(t[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3]) 

              {printf("判斷結果：Point %d is contained in figure %d\ u",m,a+1);flag=1;}   

            if(t[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2]) 

              {printf("判斷結果：Point %d is contained in figure %d\ u",m,a+1);flag=1;}  

         }

            if(flag==0)

               printf("判斷結果：Point %d is not contained in any figure\ u",m);  

      } 

       return 0;

}
