class _Node{
	int value;
	_Node left;
	_Node right;
	_Node head;
}
class Heap extends _Node {
	_Node cur;
	_Node head;
	_Node top;
	void swap(_Node cur, _Node head) {
		if (cur.head==null) {
			return;
		}
		else if (cur.value>cur.head.value) {
			return;
		}
		else {
			
			swap(cur.head,cur.head.head);
		}
	}
	void position(_Node cur, _Node head) {
		if (cur==head.left) {
			_Node newcur = new _Node();
			head.right=newcur;
			cur=head.right;
		}
		if (cur==head.right) {
			if (head.right.left==null) {
				_Node newcur = new _Node();
				head.right.left=newcur;
				cur=head.right.left;
			}
		}
	}
	void add(int value) {
		if (head==null) {
			head=new _Node();
			head.value=value;
			head.left=new _Node();
			cur=head.left;
			cur.head=head;
			top=head;
		}
		else {
			cur.value=value;
			swap(cur,cur.head);
				
			}
		}
	}

public class HeapTester {
	public static void main(String[] args) {
		Heap h1= new Heap();
		h1.add(5);
		h1.add(3);
		System.out.println(h1.top.value);
		
	}
}