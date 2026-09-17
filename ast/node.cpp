#include "node.h"
using namespace ComplieProj::ast;
std::map<Node::Type,string> Node::m_names ={
    {NODE_INTEGER,"interger"},
    {NODE_INFIX,"infix"},
    {NODE_EXPRESSION_STATEMENT,"ExpressionStatement"},
    {NODE_PRAGRAM,"pragram"}
 };
