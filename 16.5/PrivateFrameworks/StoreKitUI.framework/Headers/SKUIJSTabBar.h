// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIJSTABBAR_H
#define SKUIJSTABBAR_H

@class IKJSObject, NSArray;
@protocol SKUIJSTabBar;


#import "SKUIApplicationController.h"
#import "SKUIJSTabBarItem.h"

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar>

 {
    SKUIApplicationController *_applicationController;
}


@property (retain, nonatomic) SKUIJSTabBarItem *selectedTab;
@property (readonly, nonatomic) NSArray *tabs; // ivar: _tabs
@property (readonly, nonatomic) SKUIJSTabBarItem *transientTab; // ivar: _transientTab


-(id)_selectedTabBarItemForIndex:(NSInteger)arg0 ;
-(id)initWithAppContext:(id)arg0 controller:(id)arg1 ;
-(void)_reloadTabBarItemsWithPreludeMainThreadWork:(id)arg0 ;
-(void)sendOnNeedsContentForTabBarItem:(id)arg0 ;
-(void)sendOnUpdate;
-(void)sendOnUpdateWithCompletion:(id)arg0 ;


@end


#endif