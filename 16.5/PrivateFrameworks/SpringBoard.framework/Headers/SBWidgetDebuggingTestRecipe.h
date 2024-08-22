// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWIDGETDEBUGGINGTESTRECIPE_H
#define SBWIDGETDEBUGGINGTESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBWidgetDebuggingTestRecipe : NSObject <SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)__systemService;
-(id)title;
-(void)_openNotificationCenter;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif