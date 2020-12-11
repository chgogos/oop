#include <stdio.h>
#include <limits.h>
#include <string.h>

struct person {
    char* name;
    int age;
};

void insertion_sort(struct person arr[], int n)  
{  
    struct person key;
    int i,  j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;    
        while (j >= 0 && strcmp(arr[j].name, key.name)>0) // http://www.cplusplus.com/reference/cstring/strcmp/
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

int main()
{
    struct person a[]={{"nikos", 20}, {"petros", 25}, {"maria", 30}, {"kostas", 22}, {"andreas", 37}};
    int n= sizeof(a)/sizeof(struct person);

    // εύρεση μεγαλύτερης και μικρότερης ηλικίας
    printf("1. MIN + MAX\n");
    int max = 0;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if (a[i].age>max){
            max=a[i].age;
        }
        if (a[i].age<min){
            min=a[i].age;
        }
    }
    printf("MIN AGE=%d\n", min);
    printf("MAX AGE=%d\n", max);

    // αναζήτηση ηλικίας με βάση το όνομα 
    printf("2. SEARCH\n");
    char *key = "kostas";
    int found=0;
    for(int i=0;i<n;i++){
        if(a[i].name==key){
            printf("Found %s %d\n", a[i].name, a[i].age);
            found=1;
            break;
        }
    } 
    if (!found){
        printf("Not found %s\n", key);
    }

    // ταξινόμηση με βάση το όνομα
    printf("3. SORT BY NAMES IN ASCENDING ORDER\n");
    insertion_sort(a, n);
    for(int i=0;i<n;i++){
        printf("%s %d\n", a[i].name, a[i].age);
    }
}

/*
1. MIN + MAX
MIN AGE=20
MAX AGE=37
2. SEARCH
Found kostas 22
3. SORT BY NAMES IN ASCENDING ORDER
andreas 37
kostas 22
maria 30
nikos 20
petros 25
*/