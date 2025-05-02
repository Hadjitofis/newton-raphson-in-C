#include <stdio.h> //Κάνω include τις βιβλιοθήκες που θα χρειαστώ για να τρέξω το πρόγραμμα μου
#include <math.h>
#include <stdlib.h>

double fun(double a, double b, double c, double d, double e, double f, double x) //Η συναρτηση fun λύνει το f(x) για χ
{
    return f * pow(x, 5) + e * pow(x, 4) + d * pow(x, 3) + c * pow(x, 2) + b * x + a;
}

double df(double b, double c, double d, double e, double f, double x) //Η συνάρτηση df λύνει την παράγωγο του f(x) δηλαδή το f'(x) για χ 
{
    return   b + 2 * c * x + (3 * d) * pow(x, 2) + (4 * e) * pow(x, 3) + (5 * f) * pow(x, 4);
}

double newton(double a, double b, double c, double d, double e, double f, double x0) //Η συνάρτηση newton είναι η πιο κύρια του προγράμματος και σκοπός της είναι να εφαρμόσει την μεθοδο του newton όπως παρουσιάζεται στο φυλλάδιο
{
    double almost0 = pow(10, -6);
    for (int i = 0; i < 1000; i++)//Αν η συνάρτηση μας δεν τερματήσει σε 1000 επαναλήψεις τότε σταματά
    {
        
        double fx = fun(a, b, c, d, e, f, x0); //Δηλώνουμε μια μεταβλητή fx η οποία είναι ίσα με την συνάρτηση fun που εξηγίσαμε πιο πάνω
        if (fabs(fx) < almost0) //Αν ισχύει Χν-1 -Χν<10-6 τότε επιστρέφει το Χ 
        {
            return x0;
        }
        double dfx = df(b, c, d, e, f, x0); //Δηλώνουμε μια μεταβλητή dfx η οποία είναι ίσα με την συνάρτηση df που εξηγίσαμε πιο πάνω
        if (dfx == 0) //Αν το αποτέλεσμα του dfx ειναι ίσο με 0 σημαίνει ότι θα υπάρξει διαιρεση με το 0 αρα το προγραμμα σταματά
        {
            printf("nan\n");
            return 0;
        }
        x0 = x0 - fx / dfx; // Από το χ0 που εισάγαμε στηνα αρχή αφερούμε το fx/dfx ώστε να μπορούμε να ξανακάνουμε την επανάληψη μέχρι να φτάσουμε σε αποτέλεσμα
        if (fun(a, b, c, d, e, f, x0) < almost0)
            return x0;
    }
    printf("incomplete\n");
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 8) {
        return 0;
    }
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double d = atof(argv[4]);
    double e = atof(argv[5]);
    double f = atof(argv[6]);
    double x0 = atof(argv[7]);
    double root = newton(a, b, c, d, e, f, x0);
    if (root != 0)
    {
        printf("%.2lf\n", root);//Τυπώνω τη ρίζα με ακρίβεια 2 δεκαδικών

        return 0;
    }
}
