#include<iostream>
using namespace std;

class treeNode{

public:
    int data;
    treeNode*left;
    treeNode*right;

    treeNode()
    {
        data=0;
        left=NULL;
        right=NULL;
    }
};

class BinarySearchTree{
public:
    treeNode* root;

    BinarySearchTree()
    {
        root=NULL;
    }
    bool isEmpty()
    {
        if(root=NULL)
            return true;
        else
            return false;
    }
    void insertNode(treeNode* newNode){
        if(root==NULL)
        {
            root=newNode;
            cout<<"Inserted as Root"<<endl;
        }
        else{
            treeNode* value=root;

            while(value!=NULL){
                if((newNode->data<value->data) && (value->left==NULL))
                {
                    value->left=newNode;
                    cout<<"Inserted as left"<<endl;
                    break;
                }
                else if(newNode->data<value->data){
                    value=value->left;
                }

                else if((newNode->data>value->data) && (value->right==NULL)){
                    value->right=newNode;
                    cout<<"Inserted as right"<<endl;
                    break;
                }
                else{
                    value=value->right;
                }
            }
        }
    }
    void preOrder(treeNode* root){
        if(root == NULL)
            return;
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
};
int main()
{
    int Array[7]={6,8,10,4,16,12};
    BinarySearchTree a;
    treeNode* newNode = new treeNode();
    treeNode* newNodeA = new treeNode();
    treeNode* newNodeB = new treeNode();
    treeNode* newNodeC = new treeNode();
    treeNode* newNodeD = new treeNode();
    treeNode* newNodeE = new treeNode();
    newNode->data=Array[0];
    newNodeA->data=Array[1];
    newNodeB->data=Array[2];
    newNodeC->data=Array[3];
    newNodeD->data=Array[4];
    newNodeE->data=Array[5];
    a.insertNode(newNode);
    a.insertNode(newNodeA);
    a.insertNode(newNodeB);
    a.insertNode(newNodeC);
    a.insertNode(newNodeD);
    a.insertNode(newNodeE);

    cout<<"Pre Order Traversal: ";
    a.preOrder(newNode);
    cout<<endl;
}
