#include<bits/stdc++.h>
int main()
{
    int b[]  = {21,23,43,45,56,6,7,8,89,7,65,54,43,32,2,45,7,685,57,45,54,32,42,453,64,7,79,7,9,6,65,354,435} ; 
     int kp ; 
      for ( int i = 0 ; i < sizeof(b)/sizeof(b[0]) ; i++ )
    {
       for (int j = 0; j < sizeof(b)/sizeof(b[0])-i; j++)
       {
        if(b[j]>b[j+1])
            {
                 kp  =  b[j+1]  ; 
                b[j+1] = b[j]; 
                b[j] = kp ;  

            }
       }
          
    }
    int haha =  12313;
}