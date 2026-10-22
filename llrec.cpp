#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {
  if (head == NULL) {
    smaller = NULL;
    larger = NULL;
    return;
  }

  Node* curr = head; // save curr head
  head = head->next; // move head to next

  llpivot(head, smaller, larger, pivot); // split

  // get curr to correct list
  if (curr->val <= pivot) {
    curr->next = smaller;
    smaller = curr;
  }

  else {
    curr->next = larger;
    larger = curr;
  }
}
