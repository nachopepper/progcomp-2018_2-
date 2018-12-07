#include <iostream>
#include <cstring>
using namespace std;
 
/*Codigo Copiado*/
/*
    Se le da un asiento a cada adolescente por backtracking
    Se chequea cada asiento ocupado, si se contradice  el contraint
    Cuando se llegan todos los asientos, esta es la soulicon

Se crea un array que guarda los constraints
Para sentar a un adolescente en un asiento seatI, se cequea el array por un constraint
que define la posicion de la persona, por cada constraint se ve donde esta sentada la persona setI
y si lo contradice, si la persona en el asiento setI pasa todos los test de constraint, ok,
despues se empiezan a llenar los asientos por recursion
*/
 
 
 
struct constraint {
    int a, b, c;
};
 
int nPerson, nConstraint;
constraint constraint[20];
int seat[8], seatI;
bool used[8], isConstrained[8];
int nSolutions;
 
bool isGood(int person) {
    for (int constraintI = 0; constraintI < nConstraint; ++constraintI) {
        // find constraint buddy
        struct constraint con = constraint[constraintI];
        int prevPerson;
        if (con.a == person)
            prevPerson = con.b;
        else if (con.b == person)
            prevPerson = con.a;
        else
            continue;
        if (!used[prevPerson])
            continue;
        // calculate distance
        int d = 0;
        do
            d++;
        while (seat[seatI - d] != prevPerson);
        // compare
        if ((con.c > 0 && d > con.c) || (con.c < 0 && d < -con.c))
            return false;
    }
    return true;
}
 
void solve() {
    if (seatI == nPerson) {
        ++nSolutions;
    } else
        for (int i = 0; i < nPerson; ++i)
            if (!used[i] && (!isConstrained[i] || isGood(i))) {
                seat[seatI++] = i;
                used[i] = true;
                solve();
                used[i] = false;
                --seatI;
            }
}
 
int main() {
    while (cin >> nPerson) {
        // nPerson & nConstraint
        cin >> nConstraint;
        if (nPerson == 0 && nConstraint == 0)
            break;
        // reset
        nSolutions = 0;
        seatI = 0;
        memset(used, false, nPerson);
        memset(isConstrained, false, nPerson);
        // constraint
        for (int i = 0; i < nConstraint; ++i) {
            struct constraint c;
            cin >> c.a;
            isConstrained[c.a] = true;
            cin >> c.b;
            isConstrained[c.b] = true;
            cin >> c.c;
            constraint[i] = c;
        }
        // solve
        solve();
        cout << nSolutions << endl;
    }
    return 0;
}
