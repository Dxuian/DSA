#include<bits/stdc++.h>
using namespace std ; 
// void shiftl(int a[] , int i )
// {
//     int h = a[i] ; 
//     int it = i-1 ; 
//     while (it>=0)
//     {
//         a[it+1] = a[it] ;
//         it-- ; 
//     }
//     a[0] = h ; 

    
// }
// void shiftr(int a[] , int i )
// {
//     int ite = 1;
//     while (a[ite]<a[i])
//     {
//         ite++ ;  /* code */
//     }
    
//     int h = a[i] ; 
//     int it = i-1 ; 
//     while (it>=0)
//     {
//         a[it+1] = a[it] ;
//         it-- ; 
//     }
//     a[0] = h ; 

    
// }


int main()
{
    int b[]  = {21,23,43,45,56,6,7,8,89,7,65,54,43,32,2,45,7,685,57,45,54,32,42,453,64,7,79,7,9,6,65,354,435} ; 
    //10,2,1,23,12,32,1
    for (int i = 1; i < sizeof(b)/sizeof(b[0]); i++)
    {
        if(b[i-1]<b[i])
        {
            continue;
        }
        else if (b[i-1]>b[i])
        {
            int si  ; 
            int h = b[i] , temp; 
          for (int j = i ; j > 0 ; j--)
          {
            if (b[j-1]<b[j])
            {
               b[j] = h ; 
               break  ; 
            }
            else
            {
                temp =  b[j] ; 
                b[j] = b[j-1] ; 
                b[j-1] = temp ; 
            }
            
          }
          
           
        }
        





        // if (b[i]<b[0])
        // {
        //    shiftl(b , i) ;       
        // }
        // if(b[i]>b[0])
        // {
        //     shiftr(b , i) ; 
        // }
        
        

    }
    

    int haha =  12313;
}
