/*
 * a module for expression translation, for now, only check the types
 *
 * */


typedef void *Tr_exp; // haven't touch expression translation yet
struct expty {Tr_exp exp; Ty_ty ty;}; // intermediate representation and it's type

//core func for trans language
struct expty transVar(S_table venv, S_table tenv, A_var v);
struct expty transExp(S_table venv, S_table tenv, A_exp a);
void transDec(S_table venv, S_table tenv, A_dec d);
Ty_ty transTy ( S_table tenv, A_ty a);
