// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABBARCONTROLLERVISUALSTYLE_H
#define _UITABBARCONTROLLERVISUALSTYLE_H


#import <Foundation/Foundation.h>

#import "UITabBarController.h"

@interface _UITabBarControllerVisualStyle : NSObject

@property (readonly, weak, nonatomic) UITabBarController *tabBarController; // ivar: _tabBarController


-(BOOL)transitionFromViewController:(id)arg0 toViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(NSInteger)tabBarPosition;
-(NSUInteger)defaultMaxItems;
-(id)initWithTabBarController:(id)arg0 ;
-(void)loadViews;
-(void)prepare;
-(void)teardown;
-(void)updateViewControllers:(BOOL)arg0 ;


@end


#endif