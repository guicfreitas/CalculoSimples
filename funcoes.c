float mediaTresNum(float n1,float n2,float n3){

float result;

result=(n1+n2+n3)/3;

return result;


}


int main(){
    float n1,n2,n3;
    n1=5.0;
    n2=7.0;
    n3=2.0;

    printf("%.2f",mediaTresNum(n1,n2,n3));
}