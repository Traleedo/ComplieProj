#pragma once
namespace ComplieProj{
    namespace ast{
        class ExpressionStatement : public Statement{
            public:
                ExpressionStatement() : Statement(NODE_EXPRESSION_STATEMENT){}
                ~ExpressionStatement(){}
                set_expression(std::shared_ptr<Expression> expression){m_expression = expression;}
            private:
                std::shared_ptr<Expression> m_expression;
        };
    }
}