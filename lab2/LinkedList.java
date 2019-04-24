import java.util.Scanner;

public class LinkedList
{
    static class Node
    {
        int data;
        Node next;
        
        Node()
        {
            next = null;
            data = 0;
        }
    
        
        Node( int value )
        {
            data = value;
            next = null;
        }
    }
    
    private Node head, tail;
    
    public LinkedList()
    {
        head = null;
        tail = null;
    }
    
    public void createNode( int value )
    {
        Node temp = new Node(value);
        
        if( head==null )
        {
            head = temp;
            tail = temp;
            temp = null;
        }
        else
        {
            tail.next = temp;
            tail = temp;
        }
    }
    
    public void display()
    {
        Node temp=head;
        
        while( temp!=null )
        {
            System.out.print( temp.data + "-->" );
            temp=temp.next;
        }
        System.out.println("NULL");
    }
    
    public void insertStart( int value )
    {
        Node temp = new Node(value);
        temp.next = head;
        head = temp;
    }
    
    public void insertEnd(int value)
    {
        Node temp = new Node();
        temp = tail;
        tail = new Node(value);
        temp.next = tail;
    }
    
    public void insertPosition( int pos, int value )
    {
        Node pre = new Node();
        Node cur = new Node();
        cur = head;
        
        for( int i=1; i<pos; i++ )
        {
            pre = cur;
            cur = cur.next;
        }
        
        Node temp = new Node(value);
        pre.next = temp;
        temp.next = cur;
    }
    
    public void deleteStart()
    {
        head = head.next;
    }
    
    public void deleteEnd()
    {
        Node cur = new Node();
        Node pre = new Node();
        cur = head;
        
        while( cur.next!=null )
        {
            pre = cur;
            cur = cur.next;
        }
        
        tail = pre;
        tail.next = null;
    }
    
    public void deletePosition( int pos )
    {
        Node cur = new Node();
        Node pre = new Node();
        cur = head;
        for( int i=1; i<pos; i++)
        {
            pre = cur;
            cur = cur.next;
        }
        pre.next = cur.next;
    }
    
    public static void main( String[] arg )
    {
        LinkedList L = new LinkedList();
        int n;
        Scanner keyboard = new Scanner(System.in);
        System.out.print("n = ");
        n = keyboard.nextInt();

        for (int i= 1;i<=n; i++)
        {
	        int value;
    
        	System.out.print("value = ");
        	value = keyboard.nextInt();
        	
        	L.createNode(value);
        }
        
        L.display();
          
        L.insertStart(8);
        L.insertEnd(5);
        L.insertPosition(3,6);
        L.display();
        
        L.deleteStart();
        L.deleteEnd();
        L.deletePosition(3);
        L.display();
    } 
}


















