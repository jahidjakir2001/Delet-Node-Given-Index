
#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void Traverse(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
struct node *DeletionatGivenIndexNode(struct node *head,int index)
{
      struct node *ptr=NULL;
      ptr=(struct node *)malloc(sizeof(struct node));
      ptr=head;
      int cnt=0;
      while(cnt!=index-1)
      {
            ptr=ptr->next;
            cnt++;
      }
      ptr->next=ptr->next->next;
      return head;
};
int main()
{
      struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
      head=(struct node *)malloc(sizeof(struct node));
      first=(struct node *)malloc(sizeof(struct node));
      second=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
      head->data=10;
      head->next=first;
      second->data=30;
      second->next=third;
      first->data=20;
      first->next=second;
      third->data=40;
      third->next=NULL;
      cout<<"Traverse Node left to right:"<<endl;
      Traverse(head);
      cout<<"Deletion After Given Index Node:"<<endl;
      head=DeletionatGivenIndexNode(head,2);
      Traverse(head);
}


