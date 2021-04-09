include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j;
    printf("Enter Your String\n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=' '){
           a[i]=a[i]+32;//a[i]=a[i]-32; //lower 2 upper
        }
    }
    printf("%s",a);

}
