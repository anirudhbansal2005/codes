public class linkedlist {
    static class Node {
        int data;
        Node next;
    }

    static void traversal(Node head){
        while(head!=null){
            System.out.print(head.data);
            head = head.next;
        }
    }
    public static void main(String[] args) {
        Node head = new Node();
        Node second = new Node();
        Node third = new Node();
        Node forth = new Node();
        head.data = 6;
        head.next = second;
    
        second.data = 6;
        second.next = third;
    
        third.data = 6;
        third.next = forth;

        forth.data = 6;
        forth.next = null;

        traversal(head);
    }
    
}
