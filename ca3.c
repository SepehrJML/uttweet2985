#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define OPERATOR_SIZE 10
#define MAX_SIZE 100
#define ZERO 0
#define ONE 1

typedef struct User U;
typedef struct Post P;


struct User {
    char* username;
    char* password;
    U* next;
};


struct Post {
    char* username;
    char* post;
    int* post_id;
    int* like;
    P* next;
};




void main() {
    int a=ONE;
    U* user1=(U*)malloc(sizeof(U));
    P* post1=(P*)malloc(sizeof(P));
    char operator[OPERATOR_SIZE];
    char SignupCheck[MAX_SIZE],SignupUserCheck[MAX_SIZE],SignupPassCheck[MAX_SIZE];
    char signup[OPERATOR_SIZE]="signup";
    char login[OPERATOR_SIZE]="login";
    char find_user[OPERATOR_SIZE]="find_user";
    char post[OPERATOR_SIZE]="post";
    char like[OPERATOR_SIZE]="like";
    char logout[OPERATOR_SIZE]="logout";
    char info[OPERATOR_SIZE]="info";
    char delete[OPERATOR_SIZE]="delete";
    while(a==ONE) {

    printf("what do you want to do?\n");
    scanf("%s", operator); /*operator is the given command*/
    int k=ZERO;

    if(strcmp(signup,operator)==ZERO) { /*signup begin*/

        
        printf("signup please\n"); /*sign up shit*/
        printf("enter username & password\n");
        int i=ZERO;
        scanf("%s %s %s", SignupCheck, SignupUserCheck, SignupPassCheck);
        /*entered strings will be stored in user */
        user1->username=SignupUserCheck;
        user1->password=SignupPassCheck;
        while(a==ONE) {
        printf("what do you want to do?\n");
        scanf("%s", operator); /*operator is the given command*/
        if(strcmp(login,operator)==ZERO) {
            int l=ZERO;
            while(l==ZERO) /*a loop body when user is loged in into the system*/ {


    

                char LoginCheck[MAX_SIZE],LoginUserCheck[MAX_SIZE], loginPassCheck[MAX_SIZE],h[MAX_SIZE],i[MAX_SIZE];
                printf("login please\n");
            
                scanf("%s %s %s", LoginCheck, LoginUserCheck, loginPassCheck);
                int j=ZERO;
            
                

                
               if((strcmp(user1->username,LoginUserCheck)==ZERO)&&(strcmp(user1->password,loginPassCheck)==ZERO)) /*it check if user exists */ {
                        printf("welcome\n");
                        k++;
                        printf("what do you want to do?'\n");
                        scanf("%s", operator);
                        if(strcmp(operator,post)==ZERO) {
                                int j=ZERO;
        
                                char TypedLine[MAX_SIZE];
                                char TypedLineWithoutPost[MAX_SIZE];
                                char ch;
                                while(j==ZERO) /*it will get the string using getchar*/ {
            
                                    printf("share a post\n");
                                    j++;
                                    int i=ZERO;
                                    char garbage=getchar(); /*it will get the previous \n*/
                                    do     {  
                                        ch = getchar();  
                                        TypedLine[i] = ch;   
                                        i++; 
                                    } while (ch != '\n');
                                    int l=ZERO;
                                    for(l=ZERO;l<MAX_SIZE;l++) {
                                         TypedLineWithoutPost[l]=TypedLine[l+5];
                                    }
                                    post1->post=TypedLineWithoutPost;
                                    post1->like=ZERO;
                                    post1->post_id=ONE;
                                    post1->username=user1->username;
                                    printf("user: %s\n", post1->username);
                                    printf("post_id: %d\n", post1->post_id);
                                    printf("like: %d\n", post1->like);
                                    printf("%s\n", post1->post);
            
                                    j++;
                                    }
                        } 
               


                        else if(strcmp(operator,like)==0) {
                                    post1->like=ONE;
                                    printf("user: %s\n", post1->username);
                                    printf("post_id: %d\n", post1->post_id);
                                    printf("like: %d\n", post1->like);
                                    printf("%s\n", post1->post);
                            }
                        else if(strcmp(operator,logout)==0) {
                                    l++;
                            }
                        else if(strcmp(operator,info)==0) {
                            printf("user: %s\n", post1->username);
                            printf("post_id: %d\n", post1->post_id);
                            printf("like: %d\n", post1->like);
                            printf("%s\n", post1->post);
                            }   
                        else if(strcmp(operator,find_user)==0) {
                            char SearchedUser[100];
                            printf("enter user\n");
                            scanf("%s %s", find_user, SearchedUser);
                            if(strcmp(SearchedUser,user1->username)==0) {
                            printf("post_id: %d\n", post1->post_id);
                            printf("like: %d\n", post1->like);
                            printf("%s\n", post1->post);
                            }
                            else printf("not found\n");
                        }    
               }
                else printf("error\n");
    

            }       



        }
        else printf("login first\n"); 
        } /*signup end*/


    }
            else if(strcmp(login,operator)==ZERO) {
        
                    printf("signup first\n");

        }
    
        else printf("login first\n");
    }
    free(user1);
    free(post1);
}