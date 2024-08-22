// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCOMPLETIONTOKEN_H
#define TSTCOMPLETIONTOKEN_H

@class NSString, TSUColor;
@protocol TSTCanvasReferenceProvider;


#import "TSTWPTokenAttachment.h"
#import "TSTReferenceNode.h"

@interface TSTCompletionToken : TSTWPTokenAttachment

@property (weak, nonatomic) NSObject<TSTCanvasReferenceProvider> *canvasReferenceProvider; // ivar: _canvasReferenceProvider
@property (retain, nonatomic) NSString *completionText; // ivar: _completionText
@property (retain, nonatomic) TSTReferenceNode *editingReferenceNode; // ivar: _editingReferenceNode
@property (nonatomic) _NSRange prefixRange; // ivar: _prefixRange
@property (retain, nonatomic) TSUColor *referenceColor; // ivar: _referenceColor
@property (readonly, nonatomic) int renderAsTokenType; // ivar: _renderAsTokenType


-(id)copyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 ;
-(id)description;
-(id)initWithContext:(id)arg0 completionText:(id)arg1 ;
-(id)initWithContext:(id)arg0 expressionNode:(id)arg1 ;
-(id)tokenText;
-(void)dealloc;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)makeTokenReflectChoice:(id)arg0 ;
-(void)p_createCanvasReference;
-(void)p_removeCanvasReference;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setExpressionNode:(id)arg0 ;


@end


#endif