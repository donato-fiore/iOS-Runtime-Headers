// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUT_H
#define TSTLAYOUT_H

@class TSWPTextHostLayout, TSUPointerKeyDictionary, TSWPLayout, NSString, TSWPPadding, TSWPStorage;
@protocol TSWPStyleProviding, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver;


#import "TSTLayoutEngine.h"
#import "TSTLayoutHint.h"
#import "TSTLayoutSpaceBundle.h"
#import "TSTTableInfo.h"

@interface TSTLayout : TSWPTextHostLayout <TSWPStyleProviding, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>

 {
    CGRect mCanvasVisibleRect;
    CGRect mCanvasSafeRect;
    CGRect mPreviousVisibleStrokeFrame;
    BOOL mTabsVisible;
    BOOL mTableNameVisibilityIsValid;
    BOOL mTableNameVisible;
    ? mCached;
    CGRect mRenderingFrameForLayoutGeometryFromInfo;
    CGRect mComputedEditingCellContentFrame;
    int mCachedVerticalAlignmentForEditingCell;
    CGSize mAdjustableTableSize;
    CGSize mFixedTableSize;
    CGSize mCapturedStrokeFrameSizeForInline;
    NSInteger mContainedTextEditorParagraphAlignment;
    BOOL mRemovingContainedTextEditorLayout;
    CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
    BOOL mShouldUpdateAttachmentChildren;
    NSUInteger mPageCount;
    NSUInteger mPageNumber;
}


@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly) TSUPointerKeyDictionary *attachmentCellStorageToLayoutMap; // ivar: _attachmentCellStorageToLayoutMap
@property (nonatomic) CGRect cellRangeVisibleRect; // ivar: _cellRangeVisibleRect
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) CGRect computedEditingCellContentFrame;
@property (retain, nonatomic) TSWPLayout *containedTextEditingLayout; // ivar: mContainedTextEditingLayout
@property (readonly, nonatomic) BOOL containedTextEditorSpills; // ivar: mContainedTextEditorSpills
@property (readonly, nonatomic) BOOL containedTextEditorWraps; // ivar: mContainedTextEditorTextWraps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSUCellRect editingSpillingTextRange; // ivar: mEditingSpillingTextRange
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // ivar: mLayoutDirectionIsLeftToRight
@property (retain, nonatomic) TSTLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (retain, nonatomic) TSTLayoutHint *layoutHint; // ivar: mLayoutHint
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (nonatomic) BOOL newCanvasRevealedHorizontally; // ivar: mNewCanvasRevealedHorizontally
@property (nonatomic) BOOL newCanvasRevealedVertically; // ivar: mNewCanvasRevealedVertically
@property (readonly, nonatomic) UIEdgeInsets paddingForEditingCell; // ivar: mCachedPaddingForEditingCell
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (nonatomic) TSUCellRect prevEditingSpillingTextRange; // ivar: mPrevEditingSpillingTextRange
@property (nonatomic) BOOL processChangesFiltering; // ivar: mProcessChangesFiltering
@property (nonatomic) CGSize scaleToFit;
@property (readonly, nonatomic) CGSize scaleToFitParent;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // ivar: mSpaceBundle
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (weak, nonatomic) TSWPStorage *tableNameEditingStorage; // ivar: _tableNameEditingStorage
@property (readonly, nonatomic) CGFloat textScaleFactor;


+(id)findLayoutIfAvailableInSet:(id)arg0 intersectingRow:(unsigned int)arg1 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canRotateChildLayout:(id)arg0 ;
-(BOOL)canvasShouldScrollForSelectionPath:(id)arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)forceParentAutosizeFlagsForTextLayout:(id)arg0 ;
-(BOOL)forceParentAutosizedFrameForTextLayout:(id)arg0 ;
-(BOOL)inFindReplaceMode;
-(BOOL)inPrintPreviewMode;
-(BOOL)inspectorGeometryIsAffectedByChangeRecord:(id)arg0 ;
-(BOOL)isBeingManipulated;
-(BOOL)isDraggable;
-(BOOL)isStrokeEditing;
-(BOOL)orderedBefore:(id)arg0 ;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(BOOL)p_layoutWhollyContainsGridRange:(struct ? )arg0 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldShowCaption;
-(BOOL)supportsRotation;
-(BOOL)suppressFrozenHeadersForEditing;
-(BOOL)textIsVertical;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowLineWidthForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)tabsRowWidthAndOptionalLeftGap:(*CGFloat)arg0 ;
-(CGFloat)viewScaleForZoomingToSelectionPath:(id)arg0 targetPointSize:(CGFloat)arg1 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSInteger)naturalAlignmentForCellID:(struct TSUCellCoord )arg0 ;
-(NSInteger)naturalAlignmentForTextLayout:(id)arg0 ;
-(NSInteger)p_defaultAlignmentForTableWritingDirection;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(id)alignedStrokeFramePathForGridRange:(struct ? )arg0 frameType:(int)arg1 viewScale:(CGFloat)arg2 inset:(CGFloat)arg3 reoriginToZero:(BOOL)arg4 clipToVisibleRect:(BOOL)arg5 cornerRadius:(CGFloat)arg6 outMaskPath:(*id)arg7 ;
-(id)alignedStrokeFramePathForRange:(struct TSUCellRect )arg0 frameType:(int)arg1 viewScale:(CGFloat)arg2 inset:(CGFloat)arg3 reoriginToZero:(BOOL)arg4 clipToVisibleRect:(BOOL)arg5 cornerRadius:(CGFloat)arg6 outMaskPath:(*id)arg7 ;
-(id)attachmentCellLayoutForCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)cellIteratorWithRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)childInfosForChildLayouts;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 layoutHint:(id)arg1 ;
-(id)initialInfoGeometry;
-(id)inspectorGeometry;
-(id)layoutGeometryFromInfo;
-(id)p_getStyleProvidingAncestorLayout;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)unscaledCommentFlagAnchorInfoForSearchReference:(id)arg0 ;
-(int)reapCoordinatesChangedMaskForChrome;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(int)wrapFitType;
-(struct CGPoint )activityLineUnscaledEndPointForSearchReference:(id)arg0 ;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )calculatePointFromSearchReferenceWithoutValidation:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )minimumPositionOffset;
-(struct CGRect )_visibleFrameForOverscrolledChildFrame:(struct CGRect )arg0 ;
-(struct CGRect )adjustRect:(struct CGRect )arg0 forScrollingToSelectionPath:(id)arg1 forZoom:(BOOL)arg2 ;
-(struct CGRect )alignedStrokeFrame;
-(struct CGRect )alignedStrokeFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )alignedStrokeFrameForRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )frameForCaptionPositioning;
-(struct CGRect )maskRectForTextLayout:(id)arg0 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGRect )p_autosizedFrameForRichTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )p_autosizedFrameForTextEditingLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )p_computeSpillingTextFrameForEditingLayout:(id)arg0 textSize:(struct CGSize )arg1 editingSpillRange:(struct TSUCellRect *)arg2 ;
-(struct CGRect )p_maskRectForRichTextLayout:(id)arg0 ;
-(struct CGRect )p_maskRectForTextEditingLayout:(id)arg0 ;
-(struct CGRect )p_nonAutosizedFrameForRichTextLayout:(id)arg0 ;
-(struct CGRect )p_nonAutosizedFrameForTextEditingLayout:(id)arg0 ;
-(struct CGRect )p_textFrameForWrappingCell:(struct TSUCellCoord )arg0 defaultRowHeight:(*BOOL)arg1 ;
-(struct CGRect )selectionHighlightFrameFittingParentWidthForChildWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )initialTextSize;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(struct CGSize )p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(struct ? )arg0 ;
-(struct TSUCellCoord )p_cellIDForWPLayout:(id)arg0 ;
-(struct TSUCellRect )_floatingCellRangeAtRect:(struct CGRect )arg0 inLayoutSpace:(id)arg1 withTransform:(struct CGAffineTransform )arg2 ;
-(struct TSUCellRect )extendedPartitionRangeSingleSpaceIntersectionWithCellRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )floatingHeaderColumnRangeAtRect:(struct CGRect )arg0 ;
-(struct TSUCellRect )floatingHeaderRowRangeAtRect:(struct CGRect )arg0 ;
-(struct TSUCellRect )p_maximumSpillRangeForCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellRect )p_spillRangeForMaskingRichTextLayout:(id)arg0 ;
-(struct TSUCellRect )p_spillRangeToRightForCellID:(struct TSUCellCoord )arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(struct UIEdgeInsets )captionEdgeInsets;
-(void)bezierPathsForCellRegion:(id)arg0 selectionMask:(unsigned int)arg1 transform:(struct CGAffineTransform )arg2 viewScale:(CGFloat)arg3 inset:(CGFloat)arg4 clipToVisibleRect:(BOOL)arg5 cornerRadius:(CGFloat)arg6 block:(id)arg7 ;
-(void)dealloc;
-(void)didEndTableNameEditing;
-(void)invalidate;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidateLayoutSpaceCoordinates;
-(void)invalidateLayoutSpaceCoordinatesAfterColumn:(unsigned short)arg0 ;
-(void)invalidateLayoutSpaceCoordinatesAfterRow:(unsigned int)arg0 ;
-(void)invalidateLayoutSpaceTableOffsets;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)invalidateTableNameVisibility;
-(void)iterateCellsAndTerminateWithIterator:(id)arg0 usingBlock:(id)arg1 ;
-(void)iterateCellsInRange:(struct TSUCellRect )arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_prepareAttachmentCellsIfNeeded;
-(void)p_updateCachedStyleInformationFromCellID:(struct TSUCellCoord )arg0 ;
-(void)removeAttachmentCellLayouts;
-(void)removeContainedTextEditingLayout;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setupContainedTextEditingLayout:(struct TSUCellCoord )arg0 ;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)validatePageNumberCount;
-(void)validateTableNameVisibility;
-(void)willBeginTableNameEditingWithStorage:(id)arg0 ;


@end


#endif