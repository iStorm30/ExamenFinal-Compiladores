
// Generated from SimpleLanguage.g4 by ANTLR 4.13.1


#include "SimpleLanguageVisitor.h"

#include "SimpleLanguageParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SimpleLanguageParserStaticData final {
  SimpleLanguageParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimpleLanguageParserStaticData(const SimpleLanguageParserStaticData&) = delete;
  SimpleLanguageParserStaticData(SimpleLanguageParserStaticData&&) = delete;
  SimpleLanguageParserStaticData& operator=(const SimpleLanguageParserStaticData&) = delete;
  SimpleLanguageParserStaticData& operator=(SimpleLanguageParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simplelanguageParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SimpleLanguageParserStaticData *simplelanguageParserStaticData = nullptr;

void simplelanguageParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplelanguageParserStaticData != nullptr) {
    return;
  }
#else
  assert(simplelanguageParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimpleLanguageParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "ifStatement", "expression", "fibonacciCall"
    },
    std::vector<std::string>{
      "", "'IF'", "'THEN'", "'ELSE'", "'('", "')'", "'+'", "'-'", "'*'", 
      "'/'", "'FIB'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,12,59,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,4,0,12,8,0,11,0,
  	12,0,13,1,1,1,1,1,1,3,1,19,8,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,27,8,2,1,3,
  	1,3,1,3,1,3,1,3,1,3,3,3,35,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,5,3,49,8,3,10,3,12,3,52,9,3,1,4,1,4,1,4,1,4,1,4,1,4,0,1,6,5,
  	0,2,4,6,8,0,0,62,0,11,1,0,0,0,2,18,1,0,0,0,4,20,1,0,0,0,6,34,1,0,0,0,
  	8,53,1,0,0,0,10,12,3,2,1,0,11,10,1,0,0,0,12,13,1,0,0,0,13,11,1,0,0,0,
  	13,14,1,0,0,0,14,1,1,0,0,0,15,19,3,4,2,0,16,19,3,6,3,0,17,19,3,8,4,0,
  	18,15,1,0,0,0,18,16,1,0,0,0,18,17,1,0,0,0,19,3,1,0,0,0,20,21,5,1,0,0,
  	21,22,3,6,3,0,22,23,5,2,0,0,23,26,3,2,1,0,24,25,5,3,0,0,25,27,3,2,1,0,
  	26,24,1,0,0,0,26,27,1,0,0,0,27,5,1,0,0,0,28,29,6,3,-1,0,29,35,5,11,0,
  	0,30,31,5,4,0,0,31,32,3,6,3,0,32,33,5,5,0,0,33,35,1,0,0,0,34,28,1,0,0,
  	0,34,30,1,0,0,0,35,50,1,0,0,0,36,37,10,4,0,0,37,38,5,6,0,0,38,49,3,6,
  	3,5,39,40,10,3,0,0,40,41,5,7,0,0,41,49,3,6,3,4,42,43,10,2,0,0,43,44,5,
  	8,0,0,44,49,3,6,3,3,45,46,10,1,0,0,46,47,5,9,0,0,47,49,3,6,3,2,48,36,
  	1,0,0,0,48,39,1,0,0,0,48,42,1,0,0,0,48,45,1,0,0,0,49,52,1,0,0,0,50,48,
  	1,0,0,0,50,51,1,0,0,0,51,7,1,0,0,0,52,50,1,0,0,0,53,54,5,10,0,0,54,55,
  	5,4,0,0,55,56,5,11,0,0,56,57,5,5,0,0,57,9,1,0,0,0,6,13,18,26,34,48,50
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplelanguageParserStaticData = staticData.release();
}

}

SimpleLanguageParser::SimpleLanguageParser(TokenStream *input) : SimpleLanguageParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimpleLanguageParser::SimpleLanguageParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimpleLanguageParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simplelanguageParserStaticData->atn, simplelanguageParserStaticData->decisionToDFA, simplelanguageParserStaticData->sharedContextCache, options);
}

SimpleLanguageParser::~SimpleLanguageParser() {
  delete _interpreter;
}

const atn::ATN& SimpleLanguageParser::getATN() const {
  return *simplelanguageParserStaticData->atn;
}

std::string SimpleLanguageParser::getGrammarFileName() const {
  return "SimpleLanguage.g4";
}

const std::vector<std::string>& SimpleLanguageParser::getRuleNames() const {
  return simplelanguageParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimpleLanguageParser::getVocabulary() const {
  return simplelanguageParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimpleLanguageParser::getSerializedATN() const {
  return simplelanguageParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

SimpleLanguageParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleLanguageParser::StatementContext *> SimpleLanguageParser::ProgramContext::statement() {
  return getRuleContexts<SimpleLanguageParser::StatementContext>();
}

SimpleLanguageParser::StatementContext* SimpleLanguageParser::ProgramContext::statement(size_t i) {
  return getRuleContext<SimpleLanguageParser::StatementContext>(i);
}


size_t SimpleLanguageParser::ProgramContext::getRuleIndex() const {
  return SimpleLanguageParser::RuleProgram;
}


std::any SimpleLanguageParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLanguageVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SimpleLanguageParser::ProgramContext* SimpleLanguageParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleLanguageParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(10);
      statement();
      setState(13); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3090) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SimpleLanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleLanguageParser::IfStatementContext* SimpleLanguageParser::StatementContext::ifStatement() {
  return getRuleContext<SimpleLanguageParser::IfStatementContext>(0);
}

SimpleLanguageParser::ExpressionContext* SimpleLanguageParser::StatementContext::expression() {
  return getRuleContext<SimpleLanguageParser::ExpressionContext>(0);
}

SimpleLanguageParser::FibonacciCallContext* SimpleLanguageParser::StatementContext::fibonacciCall() {
  return getRuleContext<SimpleLanguageParser::FibonacciCallContext>(0);
}


size_t SimpleLanguageParser::StatementContext::getRuleIndex() const {
  return SimpleLanguageParser::RuleStatement;
}


std::any SimpleLanguageParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLanguageVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleLanguageParser::StatementContext* SimpleLanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleLanguageParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleLanguageParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(15);
        ifStatement();
        break;
      }

      case SimpleLanguageParser::T__3:
      case SimpleLanguageParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(16);
        expression(0);
        break;
      }

      case SimpleLanguageParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(17);
        fibonacciCall();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

SimpleLanguageParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleLanguageParser::ExpressionContext* SimpleLanguageParser::IfStatementContext::expression() {
  return getRuleContext<SimpleLanguageParser::ExpressionContext>(0);
}

std::vector<SimpleLanguageParser::StatementContext *> SimpleLanguageParser::IfStatementContext::statement() {
  return getRuleContexts<SimpleLanguageParser::StatementContext>();
}

SimpleLanguageParser::StatementContext* SimpleLanguageParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<SimpleLanguageParser::StatementContext>(i);
}


size_t SimpleLanguageParser::IfStatementContext::getRuleIndex() const {
  return SimpleLanguageParser::RuleIfStatement;
}


std::any SimpleLanguageParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLanguageVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleLanguageParser::IfStatementContext* SimpleLanguageParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleLanguageParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(SimpleLanguageParser::T__0);
    setState(21);
    expression(0);
    setState(22);
    match(SimpleLanguageParser::T__1);
    setState(23);
    statement();
    setState(26);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(24);
      match(SimpleLanguageParser::T__2);
      setState(25);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SimpleLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleLanguageParser::ExpressionContext::NUMBER() {
  return getToken(SimpleLanguageParser::NUMBER, 0);
}

std::vector<SimpleLanguageParser::ExpressionContext *> SimpleLanguageParser::ExpressionContext::expression() {
  return getRuleContexts<SimpleLanguageParser::ExpressionContext>();
}

SimpleLanguageParser::ExpressionContext* SimpleLanguageParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<SimpleLanguageParser::ExpressionContext>(i);
}


size_t SimpleLanguageParser::ExpressionContext::getRuleIndex() const {
  return SimpleLanguageParser::RuleExpression;
}


std::any SimpleLanguageParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLanguageVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


SimpleLanguageParser::ExpressionContext* SimpleLanguageParser::expression() {
   return expression(0);
}

SimpleLanguageParser::ExpressionContext* SimpleLanguageParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimpleLanguageParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SimpleLanguageParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, SimpleLanguageParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleLanguageParser::NUMBER: {
        setState(29);
        match(SimpleLanguageParser::NUMBER);
        break;
      }

      case SimpleLanguageParser::T__3: {
        setState(30);
        match(SimpleLanguageParser::T__3);
        setState(31);
        expression(0);
        setState(32);
        match(SimpleLanguageParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(50);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(48);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          match(SimpleLanguageParser::T__5);
          setState(38);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(39);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(40);
          match(SimpleLanguageParser::T__6);
          setState(41);
          expression(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(42);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(43);
          match(SimpleLanguageParser::T__7);
          setState(44);
          expression(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(45);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(46);
          match(SimpleLanguageParser::T__8);
          setState(47);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(52);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FibonacciCallContext ------------------------------------------------------------------

SimpleLanguageParser::FibonacciCallContext::FibonacciCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleLanguageParser::FibonacciCallContext::NUMBER() {
  return getToken(SimpleLanguageParser::NUMBER, 0);
}


size_t SimpleLanguageParser::FibonacciCallContext::getRuleIndex() const {
  return SimpleLanguageParser::RuleFibonacciCall;
}


std::any SimpleLanguageParser::FibonacciCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLanguageVisitor*>(visitor))
    return parserVisitor->visitFibonacciCall(this);
  else
    return visitor->visitChildren(this);
}

SimpleLanguageParser::FibonacciCallContext* SimpleLanguageParser::fibonacciCall() {
  FibonacciCallContext *_localctx = _tracker.createInstance<FibonacciCallContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleLanguageParser::RuleFibonacciCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(SimpleLanguageParser::T__9);
    setState(54);
    match(SimpleLanguageParser::T__3);
    setState(55);
    match(SimpleLanguageParser::NUMBER);
    setState(56);
    match(SimpleLanguageParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SimpleLanguageParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SimpleLanguageParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void SimpleLanguageParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplelanguageParserInitialize();
#else
  ::antlr4::internal::call_once(simplelanguageParserOnceFlag, simplelanguageParserInitialize);
#endif
}
