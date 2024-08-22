// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNNOTELAYOUT_H
#define KNNOTELAYOUT_H

@class TSDLayout, TSWPPadding, NSMutableArray, TSWPLayout, NSString;
@protocol TSWPLayoutParent, TSWPColumnMetrics, TSWPStyleProviding, TSWPStyleProvider;



@interface KNNoteLayout : TSDLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStyleProviding, TSWPStyleProvider>

 {
    TSWPPadding *_padding;
    NSMutableArray *_invertedParagraphsStyles;
}


@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPLayout *containedLayout; // ivar: _containedLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (nonatomic) CGSize sizeOfScrollViewEnclosingCanvas; // ivar: _sizeOfScrollViewEnclosingCanvas
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(BOOL)darkModeEnabled;
-(BOOL)descendersCannotClip;
-(BOOL)p_isForPrint;
-(BOOL)textIsVertical;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(NSUInteger)initialCharIndex;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)children;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange )arg1 ;
-(id)computeLayoutGeometry;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)dropCapStyleAtParIndex:(NSUInteger)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)listStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)p_adjustedPaddingForBodyWidth:(CGFloat)arg0 ;
-(id)paragraphStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)textPropertiesForEquation:(id)arg0 basedOnProperties:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)createContainedLayoutForEditing;
-(void)dealloc;
-(void)insertChild:(id)arg0 above:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChild:(id)arg0 below:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidatePadding;
-(void)invalidateSize;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setChildren:(id)arg0 ;
-(void)updateChildrenFromInfo;


@end


#endif