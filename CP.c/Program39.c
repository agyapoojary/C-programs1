#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
  int main()
{
    struct Book b1={101,"C Programming","dennis ristchie"};
    struct Book b2={102,"data structures","mark allen weiss"};
    struct Book b3={103,"alogorithms","robert sedgewick"};
    struct Book *books[3]={&b1,&b2,&b3};
    int serach_id,i,found=0;
    printf("Enter book id to search:");
    scanf("%d",&serach_id);
    for(i=0;i<3;i++)
  {
    if(books[i]->id==serach_id)
    {
        printf("Book found:\n");
        printf("ID:%d\n",books[i]->id);
        printf("Title:%s\n",books[i]->title);
        printf("Author:%s\n",books[i]->author);
        found=1;
        break;
    }
  }
 if(!found)
  {
    printf("Book with ID %d not found.\n",serach_id);
  } 
}   