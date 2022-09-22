#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const double PI = 3.14159;

void exitInvalid()
{
    printf("-1");
    exit(0);
}

int main()
{
    float x,n,m,p,a,b,c;
    int menu_code,i,dem,x2;
    scanf("%d", &menu_code);
    if(menu_code == 1) {

       scanf("%f",&n);
       scanf("%f",&m);
       scanf("%f\n",&p);

       if (!(n == 1 || n == 2 || n == 3))
            exitInvalid;

       if (!(m == 0 || m == 1))
            exitInvalid();

       if (!(p == 2 || p == 4 || p==7))
            exitInvalid();

        scanf("%f",&x);

        if (m==0 && x<0)
          exitInvalid();
        else if (m==0 && x>180)
          exitInvalid();
        else if (m==1 && x<0)
          exitInvalid();
        else if(m==1 && x>PI)
          exitInvalid();
        if (n==3)
        {
            if(m==0 && x==90)
              exitInvalid();
            else if (m==1 && x==(PI/2))
              exitInvalid();
        }
        if (x>=0 &&x<=180)
        {
        if(n==1 && m==0)
          {
            x=x*(PI/180);
            a=x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880-(x*x*x*x*x*x*x*x*x*x*x)/39916800;
            if (p==2)
            printf("%.2f",a);
            else if(p==4)
            printf("%.4f",a);
            else if (p==7)
            printf("%.7f",a);
          }

     if(n==1 && m==1)
        {
        a=x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880-(x*x*x*x*x*x*x*x*x*x*x)/39916800;
        if(p==2)
          printf("%.2f",a);
        else if(p==4)
          printf("%.4f",a);
        else if (p==7)
          printf("%.7f",a);
        }

    if(n==2 && m==0){
        x=x*(PI/180);
        b=1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320-(x*x*x*x*x*x*x*x*x*x)/3628800;
        if(p==2)
          printf("%.2f",b);
        else if(p==4)
          printf("%.4f",b);
        else if(p==7)
          printf("%.7f",b);
        }

   if(n==2 && m==1){
        b=1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320-(x*x*x*x*x*x*x*x*x*x)/3628800;
        if(p=2)
          printf("%.2f",b);
        else if(p=4)
          printf("%.4f",b);
        else if (p==7)
          printf("%.7f",b);
        }

   if(n==3 && m==0){
        x=x*(PI/180);
        a=x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880-(x*x*x*x*x*x*x*x*x*x*x)/39916800;
        b=1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320-(x*x*x*x*x*x*x*x*x*x)/3628800;
        c=a/b;
        if(p==2)
          printf("%.2f",c);
        else if(p==4)
          printf("%.4f",c);
        else if (p==7)
          printf("%.7f",c);
        }

   if(n==3 && m==1){
      a=x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880-(x*x*x*x*x*x*x*x*x*x*x)/39916800;
      b=1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320-(x*x*x*x*x*x*x*x*x*x)/3628800;
      c=a/b;
      if(p==2)
        printf("%.2f",c);
      else if(p==4)
        printf("%.4f",c);
      else if(p==7)
      printf("%.7f",c);
      }

      }
    }

    else if (menu_code == 2){

      dem=0;
      scanf ("%f/n", &m);
      if (!(m==1 || m == 2))
	      exitInvalid ();
        scanf ("%d/n", &x2);
      if (x2 <= 1)
	      exitInvalid ();
      if (x2 > 1)
	    {
      if (m == 1)
	    {
	      for (i = 1; i<=x2; i++)
        {
          if (x2 % i == 0){
		        dem++;

	          if (dem <2)
		          printf ("%d", i);
		      else
		          printf (" %d", i);
              	}
	    }
	}

if (m == 2)
	  {
	    for (i = 2; i <= x2; i++)
	    {
		    dem = 0;
        while (x2 % i == 0)
		      {
            ++dem;
            x2 /= i;
		      }
		  if (dem)
		    {
		      if (dem > 1)
			printf ("%d^%d", i, dem);
		      else
			printf ("%d", i);
		      if (x > i)
			printf ("*");

		    }

		  }
	 }
	}
}


  else exitInvalid();
  return 0;
}
