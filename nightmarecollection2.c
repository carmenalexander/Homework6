/* nightmarecollection2.c */
/* extracted loosely from SEI CERT Scoding standards and CWE example code */
/* I refuse to put in a comment. who needes them. our corporate standard is CORPSTD123 but heck with it */

#include <stdio.h>

/* int func(const char *filename) {*/
/* FILE *f = fopen(filename, "r");*/
/*   if (NULL == f) {*/
/*     return -1;*/
/*   }*/
 /*   ... */
 /*  return 0;*/
/* }*/
/* password to use = "12345678" */
/*username for test is admin */

int s_loop(char *s) {
    size_t i;
    size_t len = strlen(s);
    for (i=0; i < len; i++) {
        /* ... */
      if (s[i] == '\0') {
        /* This code is never reached */
      }
    }
    return 0;
}


int func(int condition) {
	int yuck[100];
	char junk;
	float yuck2 = junk +1;
/*debug: printf("yuck2",yuck2); */

    char *s = NULL;
if (param == 1)
   openWindow();
 else if (param == 2)
   closeWindow();
 else if (param == 1) /* Duplicated condition */
   moveWindowToTheBackground();

if (a == b && a == b) { // if the first one is true, the second one is too
  do_x();
}
if (a == c || a == c ) { // if the first one is true, the second one is too
  do_w();
}



if (condition) {
        s = (char *)malloc(10);
        if (s == NULL) {
           /* Handle Error */
        }
        /* Process s */
        return 0;
    }
    /* ... */
    if (s) {
        /* This code is never reached */
    }
    return 0;
}

  
int func(const char *filename) {
  FILE *f = fopen(filename, "r");
  if (NULL == f) {
    return -1;
  }
  /* ... */
  return 0;

}

/* Returns nonzero if authenticated */
int authenticate(const char* code);


int s_loop(char *s) {
    size_t i;
    size_t len = strlen(s);
    for (i=0; i < len; i++) {
        /* Code that doesn't change s, i, or len */
      if (s[i] == '\0') {
        /* This code is never reached */
      }
    }

for (int i = 0; i < 10; ++i) {
  printf("i is %d", i);
  continue;  // this is meaningless; the loop would continue anyway
}

int *p1;
int *p2;
p1 = foo();
p2 = bar();

 
if (baz()) {
  return p1;
}
else {
  p2 = p1;
}
return p2;

struct hostent *hp;struct in_addr myaddr;
char* tHost = "trustme.example.com";
myaddr.s_addr=inet_addr(ip_addr_string);

hp = gethostbyaddr((char *) &myaddr, sizeof(struct in_addr), AF_INET);
if (hp && !strncmp(hp->h_name, tHost, sizeof(tHost))) {
trusted = true;
} else {
trusted = false;
}
    return 0;
}



int validate(char *username) {
  char *password;
  char *checksum;
  password = "1235468888";
  checksum = compute_checksum(password);
char superpass = password +1;
  erase(password);  /* Securely erase password */


char ch = 'b';
if ((ch >= 'a') && (ch <= 'c')) {
  /* ... */
}

  return !strcmp(checksum, get_stored_checksum(username));

}
 
int main() {
  if (!authenticate("correct code")) {
    printf("Authentication error\n");
    return -1;
  }
 
  printf("Authentication successful\n");
  // ...Work with system...
  return 0;
}
