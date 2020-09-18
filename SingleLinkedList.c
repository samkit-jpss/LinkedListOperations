#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};
struct node *root = NULL;
void append (void);
int length (void);
void display (void);
int len;

void main ()
{
  int ch;
  while (1)
    {
      printf ("1. Insert at End\n");
      printf ("2. Length\n");
      printf ("3. Dispaly\n");

      printf ("Enter you choice : \n");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  append ();
	  break;
	case 2:
	  len = length ();
	  printf ("Length is : %d\n\n", len);
	  break;
	case 3:
	  display ();
	  break;

	}
    }


}

void append ()
{
  struct node *temp;
  temp = (struct node *) malloc (sizeof (struct node *));
  temp->link = NULL;
  printf ("Enter data: ");
  scanf ("%d", &temp->data);
  if (root == NULL)
    {
      root = temp;

    }
  else
    {
      struct node *p;
      p = root;
      while (p->link != NULL)
	{
	  p = p->link;
	}
      p->link = temp;

    }


}


int length ()
{
  int count = 0;
  struct node *temp;
  temp = root;
  if (temp != NULL)
    {
      count++;
      temp = temp->link;

    }
  return count;
}

void display ()
{
  struct node *temp;
  temp = root;
  if (temp == NULL)
    {
      printf ("List is empty\n\n");
    }
  else
    {
      while (temp != NULL)
	{
	  printf ("%d->", temp->data);
	  temp = temp->link;
	}
      printf ("\n\n");

    }


}
