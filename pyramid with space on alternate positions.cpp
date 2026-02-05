// Online C++ compiler to run C++ program online
    *    
   * *   
  * * *  
 * * * * 
* * * * *

#include <iostream>

using namespace std;

int main() 
{
    
    for(int i=1; i<=5; i++)
    {
        int c=5-i;
        for(int j=1; j<10; j++)
        {
            if(j<=c or j>=10-c)
                cout<<" ";
            else
                if((j%2==1 and i%2==1) or (j%2==0 and i%2==0))
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
* * * * *
 * * * * 
  * * *  
   * *   
    *    

#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<10; j++)
        {
            if(j>=i and j<=10-i)
            {
                if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                    cout<<"*";
                else
                    cout<<" ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
* * * * *
 * * * * 
  * * *  
   * *   
    *    
    *    
   * *   
  * * *  
 * * * * 
* * * * *
   
#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<10; j++)
        {
            if(i<=5)
                if(j>=i and j<=10-i)
                    if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                        cout<<"*";
                    else
                        cout<<" ";
                else
                    cout<<" ";
            else
                if(j>10-i and j<i)
                    if((i%2==1 and j%2==1) or (i%2==0 and j%2==0))
                        cout<<" ";
                    else
                        cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online

// P     P
//  R   R 
//   O O  
//   G   
//   R R  
//  A   A 
// M     M

#include <iostream>
#include <string>

using namespace std;
 
int main() 
{
    string s = "PROGRAM";
    
    int size = s.length();
    
    int array[size-1][size-1];
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i==j || i+j==size-1)
                cout<<s[i];
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
    *    
   * *   
  *   *  
 *     * 
*********

#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=5; i++)
    {
        int c=5-i;
        for(int j=1; j<10; j++)
        {
            if(j>=c and j<=10-c)
                if(i!=5)
                    if(j==5-i+1 or j==5+i-1)
                        cout<<"*"; // print * only at the border positions. 
                    else
                        cout<<" "; // print space within the pyramid
                else
                    cout<<"*"; //If i==5 i.e, if 5th row, print only *
            else
                cout<<" ";   // print space on both sides of the pyramid.
                
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
    *    
   * *   
  *   *  
 *     * 
*       *
 *     * 
  *   *  
   * *   
    *    
       
#include <iostream>

using namespace std;

int main() 
{
    for(int i=1; i<=9; i++)
    {
        int c=5-i;
        for(int j=1; j<10; j++)
        {
            if(i<=5)
                if(j==5-i+1 or j==5+i-1)
                    cout<<"*"; // print * only at the border positions. 
                else
                    cout<<" "; // print space within the pyramid
            else
                if(j==i-5+1 or j==10-i+4) // -- Downward pyramid, we can also reduce nested if-else by specifying the border index. 
                // Refer previous problem  to reduce nested if-else on upward border only pyramid printing. 
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Online C++ compiler to run C++ program online
    1    
   212   
  32123  
 4321234 
543212345
 4321234 
  32123  
   212   
    1    

#include <iostream>

using namespace std;

int main() 
{
    int n=5;
    for(int i=1; i<2*n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
            if(i<=n)
                if(j>n-i and j<n+i)
                    if(j<=n)
                        cout<<n-j+1;
                    else
                        cout<<j-n+1;
                else
                    cout<<" ";
            else
                if(j>i-n and j<(2*n)-(i-n))
                    if(j<=n)
                        cout<<n-j+1;
                    else
                        cout<<j-n+1;
                else
                    cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

#include <iostream>

using namespace std;

int main() 
{
    int n=5;
    for(int i=1; i<=2*n; i++)
    {
        for(int j=1; j<=2*n; j++)
        {
            if(i<=n)
                if(j>n-i+1 and j<n+i)
                    cout<<" ";
                else
                    cout<<"*";
            else
                if(j>i-n and j<=(2*n)-(i-n))
                    cout<<" ";
                else
                    cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// 1      1
// 12    21
// 123  321
// 12344321

#include <iostream>

using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if(j <= i)
                { cout << j; continue; }
            if(2*n - j + 1 <= i)
                { cout << 2*n - j + 1; continue; }
            
            cout << " ";
        }
            
        cout << endl;
    }
}

int main()
{
    pattern(4);   

    return 0;
}

// Online C++ compiler to run C++ program online
1
01
101
0101
10101

#include <iostream>

using namespace std;

int main() 
{
    // int n=5;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==0) // Can be done this way also instead of writing 
            // if((i%2==0 and j%2==0) or (i%2==1 and j%2==1)) --> Like this !!! Refer previous problem for this type of if() statements.
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
    1
   212
  32123
 4321234
543212345

#include <iostream>

using namespace std;

int main() 
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int space=1; space<=n-i; space++)  // More Efficient ! ! ! Printing, we embedded the logic in the for loop itself. largely eliminating the need for nested if-else. 
            cout<<" ";
        for(int j=i; j>=1; j--)
            cout<<j;
        for(int j=2; j<=i; j++)
            cout<<j;
        // for(int space=n+i; space<2*n; space++)  // Also the loop wont run 5*5 = 25 times, the spaces right after the pyramid are ignored, hence reducing the no.of times loop iterates.
        //     cout<<" ";
        cout<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
1 1 1 1 1 1 1 
1 2 2 2 2 2 1 
1 2 3 3 3 2 1 
1 2 3 4 3 2 1 
1 2 3 3 3 2 1 
1 2 2 2 2 2 1 
1 1 1 1 1 1 1

#include <iostream>

using namespace std;

int min(int x, int y)
{
    if(x>y)
        return y;
    else
        return x;
}
int main() 
{
    int n=4;
    int index;
    for(int i=1; i<2*n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
            if(i>n)
                index=min(2*n-i,j);  // n=4
            if(j>n)
                index=min(i,2*n-j);  // n=4
            if(i>n and j>n)
                index=min(2*n-i,2*n-j); // if i or j is greater than n, then 2n-i/j to make the pattern similar.
            if(i<=n and j<=n)
                index=min(i,j); // finding the minimum distance from the nearest of 4 borders, here it is the minimum value of (i,j)
            cout<<index<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6 
   
#include <iostream>

using namespace std;

int min(int x, int y)
{
    if(x>y)
        return y;
    else
        return x;
}
int main() 
{
    int n=6;
    int index;
    for(int i=1; i<2*n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
            index=min(min(i,j),min(2*n-i,2*n-j)); // Instead of multiple if cases, we handed over the headache of comapring to the function.
            cout<<n+1-index<<" "; // Same logic as previous problem, simply subtract the number from n+1 to make the oder reverse.
        }
        cout<<endl;
    }
    return 0;
}

// Online C++ compiler to run C++ program online
      A 
     A B 
    A B C 
   A B C D 
  A B C D E 
 A B C D E F 
A B C D E F G 
 A B C D E F 
  A B C D E 
   A B C D 
    A B C 
     A B 
      A 
      
#include <iostream> 

using namespace std;

int main() {

    int n=8;
    for(int i=1; i<2*n; i++)  // Most Efficient code of all above.
    {
        for(int space=1; space<= ((i<8) ? n-i-1 : i-n+1); space++)
                    cout<<" ";
        for(int j=1; j< ((i<8) ? i+1 : (2*n)-i-1); j++)
                cout<<char(j+64)<<" ";
        
        cout<<endl;
    }
    return 0;
}
