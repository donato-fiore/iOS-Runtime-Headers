// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTDURATIONNODE_H
#define TSTDURATIONNODE_H

@class TSKDurationFormat;


#import "TSTExpressionNode.h"

@interface TSTDurationNode : TSTExpressionNode

@property (nonatomic, getter=isBlank) BOOL blank; // ivar: _blank
@property (retain, nonatomic) TSKDurationFormat *durationFormat; // ivar: _durationFormat
@property (nonatomic) CGFloat durationInterval; // ivar: _durationInterval


-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(id)date;
-(id)description;
-(id)exportString;
-(id)format;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 asBlank:(BOOL)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 children:(id)arg1 firstIndex:(NSUInteger)arg2 lastIndex:(NSUInteger)arg3 ;
-(id)initWithContext:(id)arg0 durationInterval:(CGFloat)arg1 durationFormat:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4 ;
-(id)string;
-(int)tokenType;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif