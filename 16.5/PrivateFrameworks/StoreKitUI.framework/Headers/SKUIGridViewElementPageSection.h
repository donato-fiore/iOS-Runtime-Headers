// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGRIDVIEWELEMENTPAGESECTION_H
#define SKUIGRIDVIEWELEMENTPAGESECTION_H

@class IKColor, NSArray, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIGridViewElementPageSectionConfiguration.h"
#import "SKUIGridComponent.h"

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>

 {
    IKColor *_backgroundColor;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    CGFloat _cellPaddingInteriorHorizontal;
    CGFloat _cellPaddingLeftEdgeHorizontal;
    CGFloat _cellPaddingRightEdgeHorizontal;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    BOOL _editing;
    NSArray *_indexPathsForBackgroundItems;
    NSInteger _lastNeedsMoreCount;
    NSArray *_viewElements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;


-(BOOL)_containsOnlyShelfElements;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg0 ;
-(BOOL)requestLayoutWithReloadReason:(NSInteger)arg0 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)backgroundColorForSection;
-(id)cellForIndexPath:(id)arg0 ;
-(id)gridViewElementPageSectionConfiguration:(id)arg0 viewElementForIndexPath:(id)arg1 ;
-(id)indexPathsForBackgroundItems;
-(id)initWithPageComponent:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg0 relativeSectionIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_enumerateVisibleViewElementsUsingBlock:(id)arg0 ;
-(void)_reloadViewElementProperties;
-(void)_requestLayoutForCells;
-(void)_resetLayoutProperties;
-(void)_setContext:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidLongPressItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillScrollToOffset:(struct CGPoint )arg0 visibleRange:(struct SKUIIndexPathRange )arg1 ;
-(void)dealloc;
-(void)deselectItemsAnimated:(BOOL)arg0 ;
-(void)expandEditorialForLabelElement:(id)arg0 indexPath:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg0 completionBlock:(id)arg1 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)reloadVisibleCellsWithReason:(NSInteger)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif