#include"parser.h"
using namespace ComplieProj::parser;
std::shared_ptr<Expression> Parser::parse_infix(const std::shared_ptr<Expression> & left){
    std::shared_ptr<Infix> e (new Infix());
    e.put_token(m_curr);
    e.put_operator(m_curr.literal());
    int precedence = curr_token_precedence();
    e.set_left(left);
    next_token();
    e.set_right(parse_expression(precedence));
    return e;
}