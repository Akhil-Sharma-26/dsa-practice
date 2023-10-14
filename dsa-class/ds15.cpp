// trees
// iterative approach of traversal is not in our syllabus
// therefor using recursive approach
// BST
void preorder(node *temp){ // parent,left,right
    if(temp!=NULL){
        cout<<temp->data;
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}
void inorder(node *temp){
    if(temp!=NULL){
        inorder(temp->lchild);
        cout<<temp->data;
        inorder(temp->rchild);
    }
}
void postorder(node* temp){
    if(temp!=NULL){
        postorder(temp->lchild);
        postorder(temp->rchild);
        cout<<temp->data;
    }
}

// level-order traversal
// zig-zag traversal
// diagonal traversal


// Searching in Tree
// recurssive approach , Corman book convention used (dot)
int tree_search(int x,int k){
    if(x==NULL || k==x.key){
        return x;
    }
    if(k<x.key){
        return tree_search(x.left,k);
    }
    else{
        return tree_search(x.right,k);
    }
}

// iterative search approach:
while(x!=NULL && k!=x.key){
    if(k<x.key){
        x=x.left;
    }
    else{
        x=x.right;
    }
    return x
}
// Time complexity is: O(h) ; h is height of the tree.


// Minmum and maximum for BST:
// min:
while(x.left!=NULL){
    x=x.left;
}

// max:
while(x.right!=NULL){
    x=x.right;
}

// create BST using the given sequence:
// 8,3,1,10,6,14,4,7,13

void tree_insert_without_parent(T.root,int z){
    x=T.root;
    if(x==NULL){
        return z;
    }
    if(z.key<x.key){
        x.left = tree_insert_without_parent(x.left,z);
        
    }
    else if(z.key>x.key){
        x.right = tree_insert_without_parent(x.right,z);
    }
    return x;
}
// tree normal insert
void tree_insert(node* t,int z){
    y=NULL;
    x=t.root;
    while(x!=NULL){
        y=x;
        if(z.key<x.key){
            x=x.left;
        }
        else{
            x=x.right;
        }
    }
    z.p=y; // p=parent
    if(y==NULL){
        t.root = z; //tree was empty
    }
    elseif(z.key<y.key){
        y.left = z;
        y.right = z;
    }

}