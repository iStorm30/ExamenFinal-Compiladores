#ifndef __SIMPLE_LANGUAGE_VISITOR_IMPL__
#define __SIMPLE_LANGUAGE_VISITOR_IMPL__

#include "libs/SimpleLanguageBaseVisitor.h"
#include "libs/SimpleLanguageParser.h"

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"

#include <algorithm>
#include <any>
#include <iostream>
#include <map>
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/CommandLine.h"
#include <memory>
#include <string>
#include <system_error>

class SimpleLanguagevisitorlmpl : SimpleLanguageBaseVisitor{
public:
    SimpleLanguagevisitorlmpl()
      : context(std::make_unique<llvm::LLVMContext>()),
        module(std::make_unique<llvm::Module>("Simple", *context)),
        builder(std::make_unique<llvm::IRBuilder<>>(*context)) {}

    virtual std::any visitProgram(finalParser::ProgramContext *ctx) override;
    
    virtual std::any visitStatement(finalParser::StatementContext *ctx) override;
    
    virtual std::any visitgroup(finalParser::groupContext *ctx) override;
    
    virtual std::any visitIf(finalParser::IfContext *ctx) override;

    virtual std::any visitPlus(finalParser::PlusContext *ctx) override;

    virtual std::any visitMinus(finalParser::MinusContext *ctx) override;

    virtual std::any visitmultiply(finalParser::multiplyContext *ctx) override;

    virtual std::any visitsplit(finalParser::splitContext *ctx) override;

    virtual std::any visitFibonacci(finalParser::FibonacciContext *ctx) override

    void test(){
		std::error_code error;
		llvm::raw_fd_stream outLL("pruebas.ll", error);
		module->print(outLL, nullptr);
	}

private:
    std::map<std::string, std::any> memory;
    std::map<std::string, std::any> functions;
    std::map<std::string, std::any> externVar;
	  std::unique_ptr<llvm::LLVMContext> context;
	  std::unique_ptr<llvm::Module> module;
	  std::unique_ptr<llvm::IRBuilder<>> builder;
};

#endif
