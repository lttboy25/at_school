#include <stdio.h>
int main() {
    
    int ngay,thang,nam;
    printf("Vui long nhap ngay, thang, nam ");
    scanf("%d%d%d",&ngay,&thang,&nam);

    if  (nam>0) {
        if ((nam%4==0 && nam%100 !=0) || nam%400==0) {
            
            if (thang>=1&&thang<=12) {
                if (thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12) {
                    if (ngay >=1 &&ngay<=31) {
                        printf("Ngay thang nam hop le\nDay la nam nhuan");     

                }
                else {printf("Ngay thang nam khong hop le");}  

            }

            else if (thang==4 || thang==6 || thang==9 || thang==11) {
                if (ngay >=1 &&ngay<=30) {
                   printf("Ngay thang nam hop le\nDay la nam nhuan");     

                }
                else {printf("Ngay thang nam khong hop le");}  

            }
            else {
                if (ngay >=1 &&ngay<=29) {
                    printf("Ngay thang nam hop le\nDay la nam nhuan");     

                    }
                else {printf("Ngay thang nam khong hop le");}
            }
            
            }        
        }           
        else {
            if (thang>=1&&thang<=12) {
                    if (thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12) {
                        if (ngay >=1 &&ngay<=31) {
                            printf("Ngay thang nam hop le\nDay khong phai la nam nhuan");     

                    }
                    else {printf("Ngay thang nam khong hop le");}  

                }

                else if (thang==4 || thang==6 || thang==9 || thang==11) {
                    if (ngay >=1 &&ngay<=30) {
                    printf("Ngay thang nam hop le\nDay khong phai la nam nhuan");     

                    }
                    else {printf("Ngay thang nam khong hop le");}  

                }
                else {
                    if (ngay >=1 &&ngay<=28) {
                        printf("Ngay thang nam hop le\nDay khong phai la nam nhuan");     

                        }
                    else {printf("Ngay thang nam khong hop le");}
                    }
                    
            }        
        }           
    }            
    else {printf("Ngay thang nam khong hop le");}                
                    
                    
                    }
    

        
        
        
        
        