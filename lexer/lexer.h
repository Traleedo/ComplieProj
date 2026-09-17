#pragma once
#include"../token/token.h"
#include<fstream>
#include<sstream>
#include<iostream>
using namespace ComplieProj::token;
namespace ComplieProj{
    namespace lexer{
        class Lexer{
            public:
                Lexer();
                Lexer(const string & file);
                ~Lexer() = default;
                Token next_token();
       
            private:
                string m_input;
                char   m_ch;
                int    m_pos;
                int    m_next_pos;
                void skip_white_space();
                void read_char();
                void unread_char();
                bool is_digit(char ch);
                string read_number();
                Token new_token(Token::Type type,const string & literal);
        };
    }
}