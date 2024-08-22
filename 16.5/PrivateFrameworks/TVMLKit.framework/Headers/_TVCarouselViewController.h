// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVCAROUSELVIEWCONTROLLER_H
#define _TVCAROUSELVIEWCONTROLLER_H

@class UIViewController, IKCollectionElement, _TVCarouselView, IKViewElement, NSString;
@protocol TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate, TVAppTemplateImpressionable;


#import "TVCarouselLayout.h"

@interface _TVCarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, TVCollectionViewLockupCellDelegate, TVAppTemplateImpressionable>

 {
    TVCarouselLayout *_carouselLayout;
    IKCollectionElement *_collectionElement;
    _TVCarouselView *_carouselView;
    IKViewElement *_headerElement;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)headerElementFromCollectionElement:(id)arg0 ;
-(BOOL)_needsDefaultCarouselCells;
-(NSUInteger)numberOfItemsInCarouselView:(id)arg0 ;
-(id)carouselView:(id)arg0 cellForItemAtIndex:(NSUInteger)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )viewSizeThatFits:(struct CGSize )arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_cancelImpressionsUpdate;
-(void)_dispatchEvent:(id)arg0 forItemAtIndex:(NSUInteger)arg1 cell:(id)arg2 ;
-(void)_playButtonAction:(id)arg0 ;
-(void)_recordImpressionsForVisibleView;
-(void)_registerCellClasses;
-(void)_selectButtonAction:(id)arg0 ;
-(void)_updateAutoScrollInterval;
-(void)_updateHeaderView;
-(void)_updateImpressions;
-(void)_updateLayout;
-(void)_updateLayoutAndReload;
-(void)carouselView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndex:(NSUInteger)arg2 ;
-(void)carouselView:(id)arg0 didEndDisplayingItemAtIndex:(NSUInteger)arg1 ;
-(void)carouselView:(id)arg0 didFocusItemAtIndex:(NSUInteger)arg1 ;
-(void)carouselView:(id)arg0 didSelectItemAtIndex:(NSUInteger)arg1 ;
-(void)carouselView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndex:(NSUInteger)arg2 ;
-(void)carouselView:(id)arg0 willDisplayItemAtIndex:(NSUInteger)arg1 ;
-(void)carouselViewDidScroll:(id)arg0 ;
-(void)centerItemAtPageIndex:(NSInteger)arg0 ;
-(void)collectionViewCellDidSelect:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)updateWithViewElement:(id)arg0 layout:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif