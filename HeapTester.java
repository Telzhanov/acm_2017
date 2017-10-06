class _Node{
	int value;
	_Node left;
	_Node right;
	_Node head;
}
class Heap extends _Node {
	_Node cur = new _Node();
	_Node top;
	void swap(_Node cur) {
		if (cur.head==null) {
			return;
		}
		else if (cur.value>cur.head.value) {
			return;
		}
		else {
			_Node tmp= new _Node();
			tmp.value=this.cur.value;
			this.cur.value=this.cur.head.value;
			this.cur.head.value=tmp.value;
			swap(this.cur.head);
		}
	}
	void position() {
		if (cur==cur.head.left) {
			_Node newnode = new _Node();
			newnode.head=cur;
			cur=newnode;
			cur.head.right=cur;
		}
		
	}
	void add(int value) {
		if (cur.head==null) {
			cur.head= new _Node();
			cur.head.value=value;
			cur.head.left= new _Node();
			cur.head.left=cur;
		}
		else {
			cur.value=value;
			position();
			}
		}
	}

public class HeapTester {
	public static void main(String[] args) {
		Heap h1= new Heap();
		h1.add(5);
		h1.add(2);
		System.out.println(h1.cur.value);
		
	}
}