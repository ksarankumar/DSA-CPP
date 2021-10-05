
#include <iostream>

#include "STL_Vector.h"
#include "LinkedList.h"

int main()
{
   //---------STL_Vector
          //vectorExample();
  //----------

  //--------Linked List
     Node* head;
   /* head = insertAtBeginning_LL(nullptr, 10);
    head = insertAtBeginning_LL(head, 20);
    head = insertAtBeginning_LL(head, 30);
    head = insertAtBeginning_LL(head, 40);*/

    /* head = insertAtEnd_LL(nullptr, 10);
     head = insertAtEnd_LL(head, 20);
     head = insertAtEnd_LL(head, 30);
     head = insertAtEnd_LL(head, 40);*/

     head = insertAtGivenPos_LL(nullptr, 10, 1);
     head = insertAtGivenPos_LL(head, 20, 2);
     head = insertAtGivenPos_LL(head, 30, 1);
     head = insertAtGivenPos_LL(head, 40,4 );
     head = insertAtGivenPos_LL(head, 50, 6);
     head = insertAtGivenPos_LL(head, 100, 2);

    //traverse_LL(head);
     recursiveTraversal_LL(head);
     //cout << search_LL(head, 100) << endl;
     cout << recursiveSearch_LL(head, 20,1)<<endl;
     cout << recursiveSearch2_LL(head, 400)<<endl;
 //--------


}


