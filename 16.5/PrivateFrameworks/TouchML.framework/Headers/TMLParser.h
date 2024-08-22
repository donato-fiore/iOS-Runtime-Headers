// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLPARSER_H
#define TMLPARSER_H

@class NSString, NSMutableSet, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TMLMetaContext.h"
#import "TMLMetaObject.h"

@interface TMLParser : NSObject {
    TMLMetaContext *_context;
    NSUInteger _state;
    NSString *_lastIdent;
    BOOL _methodDeclaration;
    NSString *_declarationType;
    NSMutableSet *_declarationAttributes;
    NSString *_methodSelector;
    NSMutableArray *_activeTokens;
    TMLMetaObject *_activeObject;
    NSMutableArray *_objectStack;
    NSString *_filename;
    unsigned int _lineNo;
    NSString *_basePath;
    NSMutableDictionary *_macros;
    NSMutableSet *_preprocessorMacros;
    NSMutableSet *_functionIdentifiers;
    BOOL _lookaheadInFunction;
    NSString *_lookaheadCurrentIdent;
    BOOL _lookaheadOnly;
    BOOL _lookaheadComplete;
}


@property (readonly, nonatomic) NSString *error; // ivar: _error
@property (nonatomic) BOOL strict; // ivar: _strict


+(BOOL)isBuiltinObject:(id)arg0 ;
+(id)previousNonSpaceToken:(id)arg0 ;
+(id)transformAccessors:(id)arg0 ;
+(id)transformBreakpoints:(id)arg0 lineNo:(int)arg1 filename:(id)arg2 ;
+(id)transformFunction:(id)arg0 ;
+(id)transformObjectCreation:(id)arg0 ;
+(id)unescapeString:(id)arg0 ;
+(id)varsInCurrentScope:(id)arg0 ;
-(BOOL)consumeToken:(NSUInteger)arg0 text:(char *)arg1 ;
-(BOOL)parseFile:(id)arg0 ;
-(BOOL)parseFunctionLookaheadWithFile:(id)arg0 ;
-(BOOL)parseFunctionLookaheadWithString:(id)arg0 basePath:(id)arg1 filename:(id)arg2 ;
-(BOOL)parseString:(id)arg0 ;
-(BOOL)parseString:(id)arg0 basePath:(id)arg1 ;
-(BOOL)parseString:(id)arg0 basePath:(id)arg1 filename:(id)arg2 ;
-(BOOL)parseTokens:(id)arg0 startingLine:(NSUInteger)arg1 ;
-(NSUInteger)blockValueDepth;
-(id)compileExpression:(id)arg0 ;
-(id)compileFunction:(id)arg0 bodyOnly:(BOOL)arg1 ;
-(id)compileFunction:(id)arg0 bodyOnly:(BOOL)arg1 localVars:(id)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(void)addPreprocessorMacro:(id)arg0 ;
-(void)addToken:(NSUInteger)arg0 text:(char *)arg1 ;
-(void)commitFunction;
-(void)commitImplements;
-(void)commitInitializer;
-(void)commitMacro;
-(void)commitMethod;
-(void)commitObject;
-(void)commitPragma;
-(void)commitProperty;
-(void)commitSignal;
-(void)setup;
-(void)teardown;


@end


#endif