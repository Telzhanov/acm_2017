class Node{
	int value;
	Node next;
	Node prev;
}
class Queue{
	Node cur= new Node();
	Node tmp = new Node();
	Node head= new Node();
	int size=0;
	void push(int value) {
		size++;
		if (cur.prev==null && cur.next==null) {
			cur.value=value;
			head=cur;
			tmp=cur;
			Node newNode= new Node();
			cur.next=newNode;
			cur=cur.next;
			cur.prev=tmp;
		}
		else {
			cur.value=value;
			tmp=cur;
			Node newNode= new Node();
			cur.next=newNode;
			cur=cur.next;
			cur.prev=tmp;
		}
	}
	void front() {
		System.out.println(head.value);
	}
	void pop() {
		size--;
		head=head.next;
	}
	void size() {
		System.out.println(size);
	}
	boolean isEmpty() {
		return size==0;
	}
}
public class Ex1{
	public static void main(String[] args) {
		Queue q1=new Queue();
		q1.push(3);
		q1.push(4);
		q1.push(5);
		q1.front();
		q1.pop();
		q1.front();
		q1.pop();
		q1.front();
		q1.push(7);
		q1.front();
	}
}