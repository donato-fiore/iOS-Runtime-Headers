// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPTEXTFLOWLAYOUTCONTROLLER_H
#define TPTEXTFLOWLAYOUTCONTROLLER_H

@class NSMapTable, NSString;
@protocol TSWPLayoutOwner, TSKChangeSourceObserver;

#import <Foundation/Foundation.h>

#import "TPPaginatedPageController.h"

@interface TPTextFlowLayoutController : NSObject <TSWPLayoutOwner, TSKChangeSourceObserver>

 {
    TPPaginatedPageController *_pageController;
    NSMapTable *_layoutMgrs;
    NSMapTable *_flows;
    BOOL _tornDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)caresAboutStorageChanges;
-(NSUInteger)pageIndexNeedingLayoutPreviousToPageIndex:(NSUInteger)arg0 ;
-(id)hintForFlow:(id)arg0 pageIndex:(NSUInteger)arg1 ;
-(id)initWithPageController:(id)arg0 ;
-(id)p_flowForLayoutMgr:(id)arg0 ;
-(id)p_flowsOnPage:(id)arg0 textBoxes:(id)arg1 ;
-(id)p_flowsOnPageIndex:(NSUInteger)arg0 ;
-(id)p_layoutMgrForFlow:(id)arg0 ;
-(id)p_orderedTextBoxesForFlow:(id)arg0 textBoxes:(id)arg1 ;
-(id)p_previousTextBoxForTarget:(id)arg0 ;
-(id)previousTargetLastColumnForTarget:(id)arg0 ;
-(id)textWrapper;
-(void)dealloc;
-(void)deflatePage:(id)arg0 intoHints:(id)arg1 topicNumberHints:(id)arg2 ;
-(void)didLayoutChangingDirtyRanges;
-(void)i_trimFlow:(id)arg0 pageIndex:(NSUInteger)arg1 toCharIndex:(NSUInteger)arg2 ;
-(void)invalidateFlows:(id)arg0 startingPage:(id)arg1 ;
-(void)layOutFlowsIfNeededOnPage:(id)arg0 ;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)p_setLayoutMgr:(id)arg0 forFlow:(id)arg1 ;
-(void)processWidowAndInflationOnPage:(id)arg0 ;
-(void)teardown;


@end


#endif