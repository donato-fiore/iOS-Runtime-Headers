// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPAGINATEDPAGELAYOUT_H
#define TPPAGINATEDPAGELAYOUT_H

@class TSURetainedPointerKeyDictionary, NSMutableSet, NSSet, TSDFill, NSArray, TPiOSMarginAdjustLayout;
@protocol TSDWrapInvalidationParent, TSWPHeaderFooterProvider, TPSectionTemplateDrawableProvider, NSFastEnumeration, TPMasterDrawableProvider;


#import "TPPageLayout.h"
#import "TPBodyLayout.h"
#import "TPFootnoteContainerLayout.h"

@interface TPPaginatedPageLayout : TPPageLayout <TSDWrapInvalidationParent>

 {
    id<TSWPHeaderFooterProvider> *_headerFooterProvider;
    NSUInteger _pageNumber;
    NSUInteger _pageCount;
    BOOL _shouldHeaderFooterBeVisible;
    BOOL _childLayoutsValid;
    TSURetainedPointerKeyDictionary *_oldChildLayouts;
    id<TPSectionTemplateDrawableProvider> *_sectionTemplateDrawableProvider;
    NSUInteger _contentFlags;
    int _inInvalidationClusterCount;
    BOOL _childTextLayoutsNeedInvalidationForExteriorWrap;
    NSMutableSet *_anchoredDrawableLayouts;
}


@property (readonly, nonatomic) BOOL allowsBody;
@property (readonly, nonatomic) BOOL allowsFootnotes;
@property (readonly, nonatomic) NSSet *anchoredDrawableLayouts;
@property (retain, nonatomic) TSDFill *backgroundFill; // ivar: _backgroundFill
@property (readonly, weak, nonatomic) TPBodyLayout *bodyLayout;
@property (readonly, nonatomic) CGRect bodyRect;
@property (readonly, nonatomic) BOOL canHavePreviousPageFootnotes;
@property (readonly, nonatomic) NSObject<NSFastEnumeration> *childTextLayoutsForExteriorWrap;
@property (readonly, nonatomic) NSArray *floatingDrawableLayouts;
@property (readonly, nonatomic) TPFootnoteContainerLayout *footnoteContainerLayout; // ivar: _footnoteContainerLayout
@property (readonly, nonatomic) TPiOSMarginAdjustLayout *marginAdjustLayout;
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, weak, nonatomic) NSObject<TPMasterDrawableProvider> *masterDrawableProvider; // ivar: _masterDrawableProvider
@property (nonatomic) BOOL overrideAllowFootnotes; // ivar: _overrideAllowFootnotes
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageIndex;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (nonatomic, getter=isValidating) BOOL validating; // ivar: _validating


-(BOOL)allowIntersectionOfChildLayout:(id)arg0 ;
-(BOOL)allowsHeaderFooter;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)columnsAreLeftToRight;
-(BOOL)descendersCannotClip;
-(BOOL)hasFooters;
-(BOOL)hasHeaders;
-(BOOL)headerFooterProviderValid;
-(BOOL)isReadyForBodyLayout;
-(BOOL)isRootLayoutForInspectorGeometry;
-(BOOL)isRootLevelForInlineGeometry;
-(BOOL)p_isHeaderFooterLayout:(id)arg0 ;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)shouldHeaderFooterBeVisible:(NSInteger)arg0 ;
-(BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
-(BOOL)shrinkTextToFit;
-(BOOL)textIsVertical;
-(CGFloat)blockHeightAvailableForFootnotes;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(CGFloat)maxAutoGrowLineWidthForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSInteger)naturalAlignmentForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(NSUInteger)columnCount;
-(NSUInteger)pageCountForAttachment:(id)arg0 ;
-(NSUInteger)pageNumberForAttachment:(id)arg0 ;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)existingAttachmentLayoutForInfo:(id)arg0 ;
-(id)headerFooterProvider;
-(id)layoutForChildInfo:(id)arg0 ;
-(id)layoutMargins;
-(id)layoutsCausingWrapOnTextLayoutTarget:(id)arg0 ignoreIntersection:(BOOL)arg1 ;
-(id)layoutsForChildInfo:(id)arg0 ;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_childLayoutInParentLayout:(id)arg0 forChildInfo:(id)arg1 ;
-(id)p_existingChildLayoutForInfo:(id)arg0 ;
-(id)p_insertBodyLayout;
-(id)p_insertChildLayoutForInfo:(id)arg0 ;
-(id)p_insertFootnoteContainerLayout;
-(id)p_insertValidatedChildLayoutForInfo:(id)arg0 ;
-(id)p_insertValidatedFloatingLayouts;
-(id)p_insertValidatedMasterLayouts;
-(id)p_orderedChildInfos;
-(id)pageLayout;
-(id)primaryLayoutForInfo:(id)arg0 ;
-(id)sectionTemplateDrawableProvider;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )footnoteContainerFrameWithSize:(struct CGSize )arg0 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGSize )maximumFrameSizeForChild:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(struct pair<double, double> )p_sideMargins;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)beginResizeWrapInvalidationCluster;
-(void)dealloc;
-(void)endResizeWrapInvalidationCluster;
-(void)evacuateOldChildLayoutCache;
-(void)inflateFootnotesInFootnoteContainer:(id)arg0 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateBodyAndMarginLayouts;
-(void)invalidateFootnoteContainers;
-(void)invalidateFootnoteSeparatorLine;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidateHeaderFooterLayouts;
-(void)invalidateHeaderFooterLayoutsCache;
-(void)invalidateLayoutsForPageCountChange;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)p_addLayoutIfAttached:(id)arg0 ;
-(void)p_addLayoutsForInfos:(id)arg0 toArray:(id)arg1 ;
-(void)p_populateOldChildLayoutsWithLayouts:(id)arg0 ;
-(void)p_removeInlineLayoutsFromPageLayout;
-(void)p_removeNoLongerInlineLayoutsFromBodyLayout;
-(void)p_sortChildLayouts;
-(void)p_updateFromLayoutInfoProvider;
-(void)p_validateTextLayoutsForExteriorWrapAffectedByAnchoredAttachments;
-(void)parentDidChange;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)processWidowAndInflation;
-(void)rebuildChildLayoutsOnNextValidationForcingTextLayoutOnTopLevelObjects:(BOOL)arg0 ;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setChildren:(id)arg0 ;
-(void)setNeedsInflation;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)wrappableChildInvalidated:(id)arg0 ;


@end


#endif