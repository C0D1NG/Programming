    #include <iostream>  
    
    int main()  
    {  
    int a[10], n, i;    
    std::cout<<"Enter the decimal number to convert to binary: ";    
    std::cin >> n;    
    for(i=0; n>0; ++i)    
    {    
    a[i]=n%2;    
    n= n/2;  
    }    
    std::cout<<"Binary of the given number = ";    
    for(i=i-1;i>=0 ;--i)    
    {    
    std::cout<<a[i];    
    }    
    return 0;
    }  
