Node* temp=head;
while(temp->next!=target)
{
    temp=temp->next;
}
temp->next=temp->next->next;