// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTOCLAYOUT_H
#define TSWPTOCLAYOUT_H



#import "TSWPShapeLayout.h"
#import "TSWPTOCLayoutHint.h"

@interface TSWPTOCLayout : TSWPShapeLayout {
    TSWPTOCLayoutHint *_hint;
    NSUInteger _initialCharIndex;
    NSUInteger _storageChangeCount;
    BOOL _textIsVertical;
}


@property (readonly, nonatomic) TSWPTOCLayoutHint *hint;
@property (readonly, nonatomic) NSUInteger initialCharIndex;
@property (readonly, nonatomic, getter=isLastLayoutInTOC) BOOL lastLayoutInTOC;
@property (nonatomic) CGSize maxSize; // ivar: _maxSize


-(BOOL)alwaysStartsNewTarget;
-(BOOL)descendersCannotClip;
-(BOOL)isDraggable;
-(BOOL)shrinkTextToFit;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg0 ;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(NSUInteger)columnCount;
-(id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(id)computeLayoutGeometry;
-(id)initWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 initialCharIndex:(NSUInteger)arg1 textIsVertical:(BOOL)arg2 maxSize:(struct CGSize )arg3 ;
-(id)layoutMargins;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;


@end


#endif