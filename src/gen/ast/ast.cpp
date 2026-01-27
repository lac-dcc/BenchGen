#include "ast.h"

void Statement::accept(Visitor& v) const {
    v.visit(*this);
}

void Lambda::accept(Visitor& v) const {
    v.visit(*this);
}

void Id::accept(Visitor& v) const {
    v.visit(*this);
}

void New::accept(Visitor& v) const {
    v.visit(*this);
}

void Insert::accept(Visitor& v) const {
    v.visit(*this);
}

void Remove::accept(Visitor& v) const {
    v.visit(*this);
}

void Contains::accept(Visitor& v) const {
    v.visit(*this);
}

void Loop::accept(Visitor& v) const {
    v.visit(*this);
}

void Call::accept(Visitor& v) const {
    v.visit(*this);
}

void Seq::accept(Visitor& v) const {
    v.visit(*this);
}

void If::accept(Visitor& v) const {
    v.visit(*this);
}
