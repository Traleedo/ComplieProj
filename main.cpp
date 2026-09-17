#include<iostream>
#include "lexer/lexer.h"
using namespace ComplieProj::lexer;
int main(){
    auto lexer = new Lexer("./code.pi");
    while(true){
        auto token = lexer->next_token();
        token.show();
        if(token.type() == Token::TOKEN_EOF){
            break;
        }

    }
    return 0;
}