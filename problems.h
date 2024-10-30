// Problem 1
int floorFunction(float x) {
    int i = float(x);
    return i;
}
int ceilingFunction(float x) {
    int i=float(x);;
    if(x-i==0) {
        i = float(x);
    }
    else {
        i = float(x)+1;
    }
    return i;

}

// Problem 2
void swap_values(double &a, double &b) {
    a=a+b;
    b=a-b;
    a=a-b;
}
// Problem 3
int multiply(int x, int y) {
    if(y==0) {
        return 0;
    }
    return x+multiply(x,y-1);

}


// Problem 4
int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n%10+digitSum(n/10);
}

// Problem 5
int decimalToBinary(int n) {
    if(n==0) {
        return 0;
    }
    return n % 2 + 10 * decimalToBinary(n / 2);

}

// Problem 6
template <typename T,typename U, typename V>
T midValue(T a,U b, V c) {
    T mid;
    if((a>b && a<c) || (a<b && a>c)) {
        mid = a;
    }
    else if((b>a && b<c) || (b>c && a>b)) {
        mid=b;
    }
    else if((c>a && c<b) || (c<a && b<c)) {
        mid=c;
    }
    return mid;
}
    return mid;
}
