class Deque extends Node{
	Node cur = new Node();
	Node tmp= new Node();
	Node head= new Node();
	int size=0;
	void pushBack(int value) {
		if (size==0) {
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
		size++;
	}
	void pushFront(int value) {
		if (size==0) {
			head.value=value;
			cur=head;
			tmp=cur;
			Node newNode= new Node();
			cur.next=newNode;
			cur=cur.next;
			cur.prev=tmp;
		}
		else{
		Node prevNode= new Node();
		tmp=head;
		head.prev=prevNode;
		head=head.prev;
		head.value=value;
		head.next=tmp;
		
		}
		size++;
	}
	void popBack() {
		cur=cur.prev;
		size--;
	}
	void popFront() {
		head=head.next;
		size--;
	}
	void front() {
		System.out.println(head.value);
	}
	void back() {
		System.out.println(cur.prev.value);
	}
	void size() {
		System.out.println(size);
		
	}
}
public class Ex3 {
	public static void main(String[] args) {
		Deque d1= new Deque();
		d1.pushBack(2);
		d1.pushBack(4);
		d1.pushBack(6);
		d1.popFront();
		d1.front();
		d1.popFront();
		d1.front();
		d1.pushFront(2);
		d1.front();
		d1.size();
		d1.pushBack(3);
		d1.size();
		d1.back();
		d1.popBack();
		d1.back();
	}
}
