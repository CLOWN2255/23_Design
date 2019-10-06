#include"leaf1.h"
#include"leaf1_1.h"
#include"composite.h"
int main()
{
   Leaf1 *leaf1=new Leaf1;
   Leaf1 *leaf2=new Leaf1;
   Leaf1 *leaf1_1=new Leaf1_1;
   Composite *com=new Composite;
   leaf1->AddLeaf(leaf1_1);
   leaf1->AddLeaf(leaf1_1);
   cout<<endl;
   leaf2->AddLeaf(leaf1_1);
   com->AddCom(leaf1);
   com->AddCom(leaf2);
   Composite *com1=new Composite;
   com1->AddCom(com);
   com1->operation();
    return 0;
}
