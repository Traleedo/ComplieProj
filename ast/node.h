#pragma once
#include "../token/token.h"
using namespace ComplieProj::token;

namespace ComplieProj{
    namespace ast{
        class Node{
            public:
                enum Type{
                    NODE_INTEGER= 0,
                    NODE_INFIX,
                    NODE_EXPRESSION_STATEMENT,
                    NODE_PRAGRAM,
                };
                Node(){}
                Node(Type type):m_type(type){}
                virtual~Node(){}
                 
                Type type() const{ return m_type;}
                string name() const;
            private:
                Type m_type;
                Token m_token;
                static std::map<Type,string> m_names;
        };

        class Expression : public Node{
            public:
                Expression():Node(){}
                Expression(Type type):Node(type){}
                ~Expression(){}
        };
        
        class Statement : public Node{
            public:
                Statement():Node(){}
                Statement(Type type):Node(type){}
                ~Statement(){}

        };
    }
}