
int _(int x, int l, int r) {
    return l <= x && x <= r;
}
int set_grade( struct student *p, int n ) {
    int i, res = 0;
    for (i = 0; i < n; ++i) {
        if (_(p->score, 85, 100)) { // A
            p->grade = 'A';
        } // end A
        else if (_(p->score, 70, 84)) { // B
            p->grade = 'B';
        } // end B
        else if (_(p->score, 60, 69)) { // C
            p->grade = 'C';
        } // end C
        else if (_(p->score, 0, 59)) { // D
            p->grade = 'D';
            ++ res;
        } // end D
        ++p;
    }
    return res;
}