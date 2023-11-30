#include "SimpleLanguagevisitorlmpl.h"

#include <filesystem>

std::any SimpleLanguagevisitorlmpl::visitProgram(SimpleLanguagevisitorlmpl::ProgramContext *ctx){
    // std::cout<<"visitProgram\n";
    return visitChildren(ctx);
}

std::any SimpleLanguagevisitorlmpl::visitStatement(SimpleLanguagevisitorlmpl::StatementContext *ctx){
    // std::cout<<"visitStatement\n";
    return visitChildren(ctx);
}

std::any SimpleLanguagevisitorlmpl::visitIf(SimpleLanguagevisitorlmpl::IfContext *ctx){
    // std::cout<<"visitIf\n";
    llvm::Value *bCondition = std::any_cast<llvm::Value *>(visit(ctx->expression()));

    llvm::FunctionType *FT = llvm::FunctionType::get(builder->getVoidTy(), false);
    llvm::Function *F = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "_anonIF_", module.get());

    llvm::BasicBlock *BB = llvm::BasicBlock::Create(*context, "entry", F);
    builder->SetInsertPoint(BB);

    llvm::BasicBlock* TB = llvm::BasicBlock::Create(*context, "then_Block", F);
    llvm::BasicBlock* MB = llvm::BasicBlock::Create(*context, "fi_Block", F);

    builder->CreateCondBr(bCondition, TB, MB);

    // Construir el bloque 'then'
    builder->SetInsertPoint(TB);
    visit(ctx->statement(0));
    builder->CreateBr(MB);
    builder->SetInsertPoint(MB);
    return nullptr;
}

std::any SimpleLanguagevisitorlmpl::visitPlus(SimpleLanguageParser::PlusMinusContext *ctx){
    llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expression(0)));
    llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expression(1)));
    
    return std::any(builder->CreateFAdd(L, R, "addTemp"));
}

std::any SimpleLanguagevisitorlmpl::visitMinus(SimpleLanguageParser::PlusMinusContext *ctx){
    llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expression(0)));
    llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expression(1)));
    
    return std::any(builder->CreateFSub(L, R, "subTemp"));
}

std::any SimpleLanguagevisitorlmpl::visitmultiply(SimpleLanguageParser::MulDivContext *ctx){
    llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expression(0)));
    llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expression(1)));
    
    return std::any(builder->CreateFMul(L, R, "mulTemp"));
}

std::any SimpleLanguagevisitorlmpl::visitsplit(SimpleLanguageParser::MulDivContext *ctx){
    llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expression(0)));
    llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expression(1)));
    
    return std::any(builder->CreateFDiv(L, R, "divTemp"));
}

std::any SimpleLanguagevisitorlmpl::visitgroup(SimpleLanguageParser::ParenExprContext *ctx){
    // Visitar la expresión dentro de los paréntesis y devolver su resultado
    return visit(ctx->expression());
}

std::any SimpleLanguagevisitorlmpl::visitFibonacci(SimpleLanguageParser::ParenExprContext *ctx){
    int n = std::stoi(ctx->NUMBER()->getText());

    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    std::cout << "Fibonacci(" << n << ") = " << a << std::endl;
    return a;
}
