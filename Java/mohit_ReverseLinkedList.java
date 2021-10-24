class mohit_ReverseLinkedList{

	//O(n) time O(1) space
	public Node reverseUsingPointers(Node head){
		if(head==null || head.next==null) return head;

		Node curr=head,prev=null,fast=null;

		while(curr!=null){
			forw = curr.next;

			curr.next = prev;
			prev=curr;
			curr=forw;
		}

		return prev;
	}



	private Node getNodeAt(int idx) {
      if (size == 0) {
        System.out.println("List is empty");
        return null;
      } else if (idx < 0 || idx >= size) {
        System.out.println("Invalid arguments");
        return null;
      } else {
        Node temp = head;
        for (int i = 0; i < idx; i++) {
          temp = temp.next;
        }
        return temp;
      }
    }

    private int getsize(Node head){
    	int len =0;
    	if(head==null) return len;

    	Node curr = head;
    	while(curr!=null){
    		curr=curr.next;
    		len++;
    	}

    	return len;
    }


//O(n*n) time , O(1) space
	public Node reverseUsingSwaps(Node head) {
        int left=0,right=getsize(head)-1;

	    while(left<right){
	        Node leftnode=getNodeAt(left);
	        Node rightnode=getNodeAt(right);
	        int temp=leftnode.data;
	        leftnode.data=rightnode.data;
	        rightnode.data=temp;
	        left++;right--;
	    }
    }

    //O(n) time , O(n) space
	 public Node reverseUsingRecursion(Node head) {
        if(head == null) {
            return head;
        }
  
        if(head.next == null) {
            return head;
        }
  
        Node newHeadNode = reverseUsingRecursion(head.next);
  
        head.next.next = head;
        head.next = null;
  
       // changing head at each recursive call
        return newHeadNode;
    }



}