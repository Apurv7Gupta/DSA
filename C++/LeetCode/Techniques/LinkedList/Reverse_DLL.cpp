Node *reverseDLL(Node *head)
{
    Node *curr = head;
    Node *temp = nullptr;

    while (curr != nullptr)
    {
        temp = curr->prev;               // save prev
        curr->prev = curr->next;        // new prev = old next
        curr->next = temp;             // new next = old prev (swap complete)

        curr = curr->prev;            // move to the next node
    }

    if (temp != nullptr)                // update head
        head = temp->prev;


    return head;
}
