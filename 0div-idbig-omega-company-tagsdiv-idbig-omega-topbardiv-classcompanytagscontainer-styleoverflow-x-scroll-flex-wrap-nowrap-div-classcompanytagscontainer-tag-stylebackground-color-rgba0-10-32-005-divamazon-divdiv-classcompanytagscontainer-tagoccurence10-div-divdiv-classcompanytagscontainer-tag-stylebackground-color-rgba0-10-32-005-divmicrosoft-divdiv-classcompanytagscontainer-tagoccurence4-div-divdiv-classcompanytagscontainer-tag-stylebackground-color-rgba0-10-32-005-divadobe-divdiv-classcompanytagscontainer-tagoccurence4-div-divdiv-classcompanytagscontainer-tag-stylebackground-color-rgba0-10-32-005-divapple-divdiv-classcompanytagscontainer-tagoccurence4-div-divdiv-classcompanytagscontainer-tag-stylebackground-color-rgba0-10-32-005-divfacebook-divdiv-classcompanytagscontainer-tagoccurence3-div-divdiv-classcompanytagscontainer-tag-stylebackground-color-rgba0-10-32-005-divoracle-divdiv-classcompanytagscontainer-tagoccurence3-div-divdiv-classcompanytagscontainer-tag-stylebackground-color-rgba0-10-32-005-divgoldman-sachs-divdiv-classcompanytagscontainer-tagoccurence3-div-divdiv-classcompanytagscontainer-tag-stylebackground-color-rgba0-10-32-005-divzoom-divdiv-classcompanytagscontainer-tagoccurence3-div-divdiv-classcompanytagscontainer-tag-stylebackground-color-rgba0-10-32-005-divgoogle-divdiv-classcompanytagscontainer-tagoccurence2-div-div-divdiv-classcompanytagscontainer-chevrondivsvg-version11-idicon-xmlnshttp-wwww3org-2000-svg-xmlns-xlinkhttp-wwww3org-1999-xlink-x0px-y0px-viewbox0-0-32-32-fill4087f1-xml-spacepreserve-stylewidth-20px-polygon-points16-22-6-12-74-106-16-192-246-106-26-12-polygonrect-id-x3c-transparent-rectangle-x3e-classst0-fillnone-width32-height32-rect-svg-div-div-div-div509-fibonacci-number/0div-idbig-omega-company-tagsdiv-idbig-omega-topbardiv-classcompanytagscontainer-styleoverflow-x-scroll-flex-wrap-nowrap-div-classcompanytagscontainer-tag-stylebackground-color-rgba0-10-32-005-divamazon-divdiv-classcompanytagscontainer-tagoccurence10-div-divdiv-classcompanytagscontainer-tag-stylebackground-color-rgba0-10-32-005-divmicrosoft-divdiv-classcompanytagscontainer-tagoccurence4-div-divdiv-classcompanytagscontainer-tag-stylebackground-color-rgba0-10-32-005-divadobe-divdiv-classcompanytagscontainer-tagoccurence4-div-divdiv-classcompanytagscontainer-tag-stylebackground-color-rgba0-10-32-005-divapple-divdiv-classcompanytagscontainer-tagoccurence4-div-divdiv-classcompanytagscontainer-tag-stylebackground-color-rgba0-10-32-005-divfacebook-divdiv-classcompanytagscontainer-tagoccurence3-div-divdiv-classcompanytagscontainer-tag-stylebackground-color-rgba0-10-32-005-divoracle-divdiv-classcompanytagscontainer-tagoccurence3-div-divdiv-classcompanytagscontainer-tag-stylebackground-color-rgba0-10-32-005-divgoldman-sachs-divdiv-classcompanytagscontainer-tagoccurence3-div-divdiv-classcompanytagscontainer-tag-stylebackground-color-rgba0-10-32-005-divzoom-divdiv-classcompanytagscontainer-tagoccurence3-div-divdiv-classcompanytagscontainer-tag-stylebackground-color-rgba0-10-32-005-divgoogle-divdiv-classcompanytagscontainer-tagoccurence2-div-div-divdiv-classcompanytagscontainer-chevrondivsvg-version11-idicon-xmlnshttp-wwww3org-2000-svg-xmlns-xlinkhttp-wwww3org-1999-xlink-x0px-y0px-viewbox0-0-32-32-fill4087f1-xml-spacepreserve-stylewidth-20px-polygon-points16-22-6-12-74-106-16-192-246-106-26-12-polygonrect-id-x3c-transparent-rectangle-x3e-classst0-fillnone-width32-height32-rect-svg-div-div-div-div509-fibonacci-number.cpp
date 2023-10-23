class Solution {
public:
    int fib(int n) {
        long double Phi;
        long double phi;
        // Phi=((double)pow(5,1/2)+1)/2;
        // phi=(double)(1/Phi);
        // Phi=(sqrt(5)+1)/2;
        // phi=(double)(1/Phi);
        // cout<<Phi<<"  "<<phi<<endl;
        // cout<<pow(Phi,n)/sqrt(5)<<"  "<<pow(phi,n)/sqrt(5)<<endl;
        // return (pow(Phi,n)-(-pow(phi,n)))/(pow(5,1/2));
        if(n==1)
            return 1;
        Phi = (sqrt(5.0) + 1) / 2;
        phi = 1 / Phi;

        cout << Phi << "  " << phi << endl;
        cout << pow(Phi, n) / sqrt(5.0) << "  " << pow(-1, n) * pow(phi, n) / sqrt(5.0) << endl;
        cout<<(pow(Phi, n) - (pow(-1, n) * pow(phi, n))) / sqrt(5.0);

        return (pow(Phi, n) - (pow(-1, n) * pow(phi, n))) / sqrt(5.0);
    }
};