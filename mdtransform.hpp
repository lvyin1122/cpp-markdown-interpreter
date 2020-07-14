//
// mdtransform.hpp
//

typedef struct Cnode {
    vector <Cnode *> ch;
    string heading;
    string tag;
    Cnode(const string &hd): heading(hd) {}
}Cnode;

