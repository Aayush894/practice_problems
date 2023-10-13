From <https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?leftPanelTab=0> 

class NStack
{
    /* maintain three array 
    1. arr => where the value of stack is stored or stack is implement of size s ; 
    2. top => maintianing the index of the top of the stack, of size n ;
    3. next => .containing the index of the next element after stack.top() of size s ;
               .next freespot for push operation 
    */
    int *arr ;
    int *top ; 
    int *next ; 
    int n , s;
    int freespot ; 

public: 
    NStack(int N, int S)
    {
        n = N ; 
        s = S ;
        arr = new int[s] ; 
        top = new int[n] ; 
        next = new int[s] ; 
        // top initialise 
        for(int i = 0;i < n;i++)
        top[i] = -1 ;
        
        // next initialise 
        for(int i = 0 ;i < s;i++){
            next[i] = i+1 ;
        }
        next[s-1] = -1 ; // denote that no freespot is available
        // freespot initialise 
        freespot = 0 ;
    }
    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check for overflow 
        if(freespot == -1)
        return false ;
        
        // find index for push element x 
        int index = freespot ;
        // update freespot 
        freespot = next[index] ; 
        // push element 
        arr[index] = x ; 
        // store prev top in the next 
        next[index] = top[m-1] ;//zero based indexing
        // update top 
        top[m-1] = index ;
        return true ;
    }
    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check for underflow 
        if(top[m-1] == -1)
        return -1 ;
        // find index for pop element 
        int index = top[m-1] ; 
        //update top 
        top[m-1] = next[index] ; 
        
        //update next 
        next[index] = freespot ; 
        // update freespot 
        freespot = index ;
        return arr[index] ;
    }
};
