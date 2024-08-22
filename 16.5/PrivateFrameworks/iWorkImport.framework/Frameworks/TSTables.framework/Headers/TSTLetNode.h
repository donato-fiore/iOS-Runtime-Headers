// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLETNODE_H
#define TSTLETNODE_H

@class NSString;


#import "TSTExpressionNode.h"

@interface TSTLetNode : TSTExpressionNode

@property (retain, nonatomic) NSString *whitespaceAfterDelimiter; // ivar: _whitespaceAfterDelimiter
@property (retain, nonatomic) NSString *whitespaceAfterEquals; // ivar: _whitespaceAfterEquals
@property (retain, nonatomic) NSString *whitespaceAfterIdentifier; // ivar: _whitespaceAfterIdentifier
@property (retain, nonatomic) NSString *whitespaceAfterLet; // ivar: _whitespaceAfterLet


+(id)defaultNameWithIndex:(unsigned int)arg0 ;
+(id)letString;
+(id)newBareLetNodeWithContext:(id)arg0 ;
-(*void)argumentSpec;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 baseHostCell:(struct TSUCellCoord )arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(*void)arg4 oldToNewNodeMap:(id)arg5 ;
-(id)formulaPlainText;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)string;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(unsigned int)boundSymbol;
-(void)addAllIdentifiersToSymbolTable:(*void)arg0 ;
-(void)addVariablesMatchingPrefix:(id)arg0 forFormulaIndex:(NSUInteger)arg1 toDictionary:(id)arg2 symbolTable:(*void)arg3 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_fixupNodeIfFunctionNode:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setChildren:(id)arg0 ;


@end


#endif