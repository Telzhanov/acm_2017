class myStack extends Node{
Node cur=new Node();
Node tmp=new Node();
int size=0;
void add(int value) {
			size++;
			cur.value=value;
			tmp=cur;
			Node newcur= new Node();
			cur.next=newcur;
			cur=cur.next;
			cur.prev=tmp;
	}
		
	void back() {
	System.out.println(cur.prev.value);
	}
	void pop() {
		cur=cur.prev;
		size--;
}
	void size() {
		System.out.println(size);
	}
	boolean isEmpty() {
		return size==0;
	}
}	

public class Ex2 {
	public static void main(String[] args) {
		myStack s1= new myStack();
		s1.add(2);
		s1.back();
		s1.add(4);
		s1.add(5);
		s1.back();
		s1.pop();
		s1.back();
		s1.add(3);
		s1.back();
		s1.add(4);
		s1.back();
		s1.pop();
		s1.back();
		s1.add(5);
		s1.add(6);
		s1.back();
		s1.pop();
		s1.pop();
		s1.back();
	}
	
}
