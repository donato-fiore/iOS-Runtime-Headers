// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIQUICKLINKSPAGESECTION_H
#define SKUIQUICKLINKSPAGESECTION_H

@class NSString;
@protocol SKUIQuicklinksViewControllerDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIQuicklinksViewController.h"
#import "SKUIQuicklinksPageComponent.h"

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate>

 {
    SKUIQuicklinksViewController *_quicklinksViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_quicklinksViewController;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)quicklinksViewController:(id)arg0 didSelectLink:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif