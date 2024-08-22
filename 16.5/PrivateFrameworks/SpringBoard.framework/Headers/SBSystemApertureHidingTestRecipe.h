// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREHIDINGTESTRECIPE_H
#define SBSYSTEMAPERTUREHIDINGTESTRECIPE_H

@class NSArray, NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBSystemApertureHidingTestRecipe : NSObject <SBTestRecipe>

 {
    NSArray *_alphaValues;
    NSInteger _currentAlphaIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldRegisterTestRecipe;
-(id)init;
-(id)title;
-(void)_applyAlpha;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif