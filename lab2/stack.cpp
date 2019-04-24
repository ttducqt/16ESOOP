#include <iostream>

using namespace std;

const int MAXSIZE = 10;

class STACK
{
    private:
        int arr[MAXSIZE];
        int top;
    public:
        STACK()
        {
            top = -1;
        }
        
        bool isEmpty()
        {
            if( top==-1 )
                return true;
            return false;
        }
        
        bool isFull()
        {
            if( top==MAXSIZE-1 )
                return true;
            return false;
        }
        
        void push( int value )
        {
            if( !isFull() )
            {
                ++top;
                arr[top] = value;
            }
        }
        
        void pop()
        {
            if( !isEmpty() )
            {
                arr[top] = 0;
                --top;
            }
        }
        
        int getSize()
        {
            return MAXSIZE;
        }
        
        int getTop()
        {
            return arr[top];
        }
};

main()
{
    
}
