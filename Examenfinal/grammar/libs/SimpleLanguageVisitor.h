
// Generated from SimpleLanguage.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SimpleLanguageParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SimpleLanguageParser.
 */
class  SimpleLanguageVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimpleLanguageParser.
   */
    virtual std::any visitProgram(SimpleLanguageParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(SimpleLanguageParser::StatementContext *context) = 0;

    virtual std::any visitIfStatement(SimpleLanguageParser::IfStatementContext *context) = 0;

    virtual std::any visitExpression(SimpleLanguageParser::ExpressionContext *context) = 0;

    virtual std::any visitFibonacciCall(SimpleLanguageParser::FibonacciCallContext *context) = 0;


};

