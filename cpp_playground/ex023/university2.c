// polymporhism using function pointers

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum S_TYPE
{
    GS, // graduate student
    PGS // post graduate student
};

typedef void (*st_func_p)(void *);

struct graduate_student
{
    char *name;
    double gpa;
};
struct graduate_student *init_graduate_student(const char *name, double g)
{
    struct graduate_student *gs = (struct graduate_student *)malloc(sizeof(struct graduate_student));
    gs->name = strdup(name);
    gs->gpa = g;
    return gs;
}

void free_graduate_student(struct graduate_student gs)
{
    free(gs.name);
}

void grade_of_graduate_student(void *v)
{
    struct graduate_student *s = (struct graduate_student *)v;
    printf("Compute grade of graduate student %s\n", s->name);
}

struct post_graduate_student
{
    char *name;
    char *diploma;
};
struct post_graduate_student *init_post_graduate_student(const char *name, const char *diploma)
{
    struct post_graduate_student *pgs = (struct post_graduate_student *)malloc(sizeof(struct post_graduate_student));
    pgs->name = strdup(name);
    pgs->diploma = strdup(diploma);
    return pgs;
}

void free_postgraduate_student(struct post_graduate_student pgs)
{
    free(pgs.name);
    free(pgs.diploma);
}

void grade_of_postgraduate_student(void *v)
{
    struct post_graduate_student *s = (struct post_graduate_student *)v;
    printf("Compute grade of post graduate student %s\n", s->name);
}

struct student
{
    enum S_TYPE type;
    void *p;
};

int main()
{
    st_func_p pf[] = {
        grade_of_graduate_student,
        grade_of_postgraduate_student};

    struct student students[] = {
        {GS, init_graduate_student("nikos", 19.5)},
        {GS, init_graduate_student("maria", 12.3)},
        {GS, init_graduate_student("petros", 13.4)},
        {PGS, init_post_graduate_student("aristea", "mathematics")},
        {PGS, init_post_graduate_student("george", "physics")}};

    for (int i = 0; i < sizeof(students) / sizeof(struct student); i++)
    {
        pf[students[i].type](students[i].p);
    }

    for (int i = 0; i < sizeof(students) / sizeof(struct student); i++)
    {
        free(students[i].p);
    }

    return 0;
}
