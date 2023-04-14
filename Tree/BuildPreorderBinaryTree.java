import java.util.LinkedList;
import java.util.Queue;

public class BuildPreorderBinaryTree{
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data)
        {
            this.data = data;
            this.left= null;
            this.right=null;
        }
    }
    static class BT{
        static int idx=-1;
        public static Node buildTree(int nodes[])
        {
            idx++;
            if(nodes[idx]==-1)
            {
                return null;
            }
            Node newNode = new Node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);

            return newNode;
        }
    }
    public static void preorder(Node root)
    {
        if (root == null) {
            return;
        }
        System.out.print(root.data+" ");
        preorder(root.left);
        preorder(root.right);
    }
    public static void Inorder(Node root)
    {
        if (root == null) {
            return;
        }
        Inorder(root.left);
        System.out.print(root.data+" ");
        Inorder(root.right);
    }
    public static void postorder(Node root)
    {
        if (root == null) {
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
    public static void levelOrder(Node root)
    {
        Queue<Node>  q= new LinkedList<>();
        q.add(root);
        q.add(null);
        while (!q.isEmpty()) {
            Node currNode = q.remove();
            if(currNode == null)
            {
                System.out.println();
                if(q.isEmpty())
                {
                    break;
                }
                else{
                    q.add(null);
                }
            }
            else{
                System.out.print(currNode.data+" ");
                if(currNode.left != null)
                {
                    q.add(currNode.left);
                }
                if (currNode.right != null) {
                    q.add(currNode.right);
                }
            }
        }
    }

    //count no of nodes  in a binary tree
    public static int countNoOfNodes(Node root)
    {
        if(root == null)
        {
            return 0;
        }
        int leftNodes = countNoOfNodes(root.left);
        int rightNodes = countNoOfNodes(root.right);
        return leftNodes+rightNodes+1;
    }
    

    //sum of nodes  in a binary tree
    public static int sumOfNodes(Node root)
    {
        if(root == null)
        {
            return 0;
        }
        int leftNodeSum = sumOfNodes(root.left);
        int rightNodeSum = sumOfNodes(root.right);
        return leftNodeSum+rightNodeSum+root.data;
    }

    public static int heightOfTree(Node root)
    {
        if(root == null)
            return 0;
        int leftHeight = heightOfTree(root.left);
        int rightHeight = heightOfTree(root.right);
        if(leftHeight>=rightHeight)
            return leftHeight+1;
        else
            return rightHeight+1;
    }
    public static void main(String args[])
    {
        int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        //BT tree = new BT();
        //Node root = tree.buildTree(nodes);
        Node root = BT.buildTree(nodes);
        System.out.print("\nPreorder: ");
        preorder(root);
        System.out.print("\nInorder: ");
        Inorder(root);
        System.out.print("\nPostorder: ");
        postorder(root);
        System.out.print("\nLevelorder: ");
        levelOrder(root);
        System.out.print("\nNo. of Nodes: "+countNoOfNodes(root));
        System.out.print("\nSum of Nodes: "+sumOfNodes(root));
        System.out.print("\nHeight of Tree: "+heightOfTree(root));
    }
}
