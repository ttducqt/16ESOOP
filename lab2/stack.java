public class STACK
{
    private int arr[];
    private int top;

    STACK()
    {
        arr = new int[10];
        top = -1;
    }
    
    boolean isEmpty()
    {
        if( top==-1 )
            return true;
        return false;
    }
    
    boolean isFull()
    {
        if( top==arr.length-1 )
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
        return arr.length;
    }
    
    int getTop()
    {
        return arr[top];
    }
}
