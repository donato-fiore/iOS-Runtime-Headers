// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTWPTOKENATTACHMENT_H
#define TSTWPTOKENATTACHMENT_H

@class TSWPUIGraphicalAttachment;


#import "TSTExpressionNode.h"

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) *CGImage cachedImage; // ivar: _cachedImage
@property (nonatomic) CGFloat cachedImageScreenScale; // ivar: _cachedImageScreenScale
@property (retain, nonatomic) TSTExpressionNode *expressionNode; // ivar: _expressionNode
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) BOOL inInvalidate; // ivar: _inInvalidate
@property (nonatomic, getter=neverShowsMenu) BOOL neverShowsMenu; // ivar: _neverShowsMenu
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)copyIntoContext:(id)arg0 ;
-(id)copyIntoContext:(id)arg0 bakeModes:(BOOL)arg1 ;
-(id)description;
-(id)detokenizedText;
-(id)formulaPlainText;
-(id)initWithContext:(id)arg0 expressionNode:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)requestRedraw;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif