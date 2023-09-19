Node *removeDuplicates(Node *head)
{
    Node* slow=head;
   
 while(slow->next!=NULL){
     if(slow->data==slow->next->data){
         
         slow->next=slow->next->next;
         
     }
     else{
         slow=slow->next;
     }
 }
 return head;
}
