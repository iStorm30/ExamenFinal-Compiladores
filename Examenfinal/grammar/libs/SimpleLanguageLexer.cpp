
// Generated from SimpleLanguage.g4 by ANTLR 4.13.1


#include "SimpleLanguageLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SimpleLanguageLexerStaticData final {
  SimpleLanguageLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimpleLanguageLexerStaticData(const SimpleLanguageLexerStaticData&) = delete;
  SimpleLanguageLexerStaticData(SimpleLanguageLexerStaticData&&) = delete;
  SimpleLanguageLexerStaticData& operator=(const SimpleLanguageLexerStaticData&) = delete;
  SimpleLanguageLexerStaticData& operator=(SimpleLanguageLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simplelanguagelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SimpleLanguageLexerStaticData *simplelanguagelexerLexerStaticData = nullptr;

void simplelanguagelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simplelanguagelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(simplelanguagelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimpleLanguageLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,12,66,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,
  	8,1,8,1,9,1,9,1,9,1,9,1,10,4,10,56,8,10,11,10,12,10,57,1,11,4,11,61,8,
  	11,11,11,12,11,62,1,11,1,11,0,0,12,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,1,0,1,3,0,9,10,13,13,32,32,67,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,1,25,
  	1,0,0,0,3,28,1,0,0,0,5,33,1,0,0,0,7,38,1,0,0,0,9,40,1,0,0,0,11,42,1,0,
  	0,0,13,44,1,0,0,0,15,46,1,0,0,0,17,48,1,0,0,0,19,50,1,0,0,0,21,55,1,0,
  	0,0,23,60,1,0,0,0,25,26,5,73,0,0,26,27,5,70,0,0,27,2,1,0,0,0,28,29,5,
  	84,0,0,29,30,5,72,0,0,30,31,5,69,0,0,31,32,5,78,0,0,32,4,1,0,0,0,33,34,
  	5,69,0,0,34,35,5,76,0,0,35,36,5,83,0,0,36,37,5,69,0,0,37,6,1,0,0,0,38,
  	39,5,40,0,0,39,8,1,0,0,0,40,41,5,41,0,0,41,10,1,0,0,0,42,43,5,43,0,0,
  	43,12,1,0,0,0,44,45,5,45,0,0,45,14,1,0,0,0,46,47,5,42,0,0,47,16,1,0,0,
  	0,48,49,5,47,0,0,49,18,1,0,0,0,50,51,5,70,0,0,51,52,5,73,0,0,52,53,5,
  	66,0,0,53,20,1,0,0,0,54,56,2,48,57,0,55,54,1,0,0,0,56,57,1,0,0,0,57,55,
  	1,0,0,0,57,58,1,0,0,0,58,22,1,0,0,0,59,61,7,0,0,0,60,59,1,0,0,0,61,62,
  	1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,64,1,0,0,0,64,65,6,11,0,0,65,24,
  	1,0,0,0,3,0,57,62,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simplelanguagelexerLexerStaticData = staticData.release();
}

}

SimpleLanguageLexer::SimpleLanguageLexer(CharStream *input) : Lexer(input) {
  SimpleLanguageLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *simplelanguagelexerLexerStaticData->atn, simplelanguagelexerLexerStaticData->decisionToDFA, simplelanguagelexerLexerStaticData->sharedContextCache);
}

SimpleLanguageLexer::~SimpleLanguageLexer() {
  delete _interpreter;
}

std::string SimpleLanguageLexer::getGrammarFileName() const {
  return "SimpleLanguage.g4";
}

const std::vector<std::string>& SimpleLanguageLexer::getRuleNames() const {
  return simplelanguagelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SimpleLanguageLexer::getChannelNames() const {
  return simplelanguagelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SimpleLanguageLexer::getModeNames() const {
  return simplelanguagelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SimpleLanguageLexer::getVocabulary() const {
  return simplelanguagelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimpleLanguageLexer::getSerializedATN() const {
  return simplelanguagelexerLexerStaticData->serializedATN;
}

const atn::ATN& SimpleLanguageLexer::getATN() const {
  return *simplelanguagelexerLexerStaticData->atn;
}




void SimpleLanguageLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simplelanguagelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(simplelanguagelexerLexerOnceFlag, simplelanguagelexerLexerInitialize);
#endif
}
