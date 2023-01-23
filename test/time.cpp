#include<iostream>
int main() {
    int n1,n2,n3,n4,n5,n6,n7,num,sal=0;
    std::cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7;
    num = n1+n2+n3+n4+n5+n6+n7;
    if(num>40) {
        sal = sal + (num-40)*25;  
    }
    if(n1>8) {
        sal = sal + (n1*100) +  (n1-8)*15 + (n1*100*0.5); 
    }
    else {
        sal = sal + (n1*100) + (n1*100*0.5); 
    }
    if(n2>8) {
        sal = sal + (n2*100) +  (n2-8)*15; 
    }
    else {
        sal = sal + (n2*100); 
    }
    if(n3>8) {
        sal = sal + (n3*100) +  (n3-8)*15;
    }
    else {
        sal = sal + (n3*100); 
    }
    if(n4>8) {
        sal = sal + (n4*100) +  (n4-8)*15;
    }
    else {
        sal = sal + (n4*100);
    }
    if(n5>8) {
        sal = sal + (n5*100) +  (n5-8)*15;
    }
    else {
        sal = sal + (n5*100);
    }
    if(n6>8) {
        sal = sal + (n6*100) +  (n6-8)*15;
    }
    else {
        sal = sal + (n6*100);
    }
    if(n7>8) {
        sal = sal + (n7*100) +  (n7-8)*15 + (n7*100*0.25);
    }
    else {
        sal = sal + (n7*100) + (n7*100*0.25);
    }

    std::cout<<sal;
}