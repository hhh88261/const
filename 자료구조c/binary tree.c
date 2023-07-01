#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct tfield {
    struct tfield *left;
    char name[20];
    struct tfield *right;
};
struct tfield *talloc();
struct tfield *gentree(struct tfield *, char *);
void treewalk(struct tfield *);

void main() {
    char dat[20];
    struct tfield *root;
    root=NULL;
    printf("name input(PRESS ^Z).\n");
    while (scanf("%s", dat)!=EOF) {
        root = gentree(root, dat);
    }
    treewalk(root);
}

void treewalk(struct tfield *p) {
    if (p!=NULL) {
        treewalk(p->left);
        treewalk(p->right);
        printf("%s\n", p->name);
    }
}
struct tfield *gentree(struct tfield *p, char *w) {
    if (p==NULL) {
        p=talloc();
        strcpy(p->name, w);
        p->left=p->right=NULL;
    }
    else if (strcmp(w, p->name)<0)
        p->left=gentree(p->left, w);
    else
        p->right=gentree(p->right, w);
    return p;
}
struct tfield *talloc()  {
    return (struct tfield *)malloc(sizeof(struct tfield));
}