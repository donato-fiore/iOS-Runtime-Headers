// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURETESTRECIPE_H
#define SBSYSTEMAPERTURETESTRECIPE_H

@class NSArray, NSMutableArray, NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBSystemApertureTestRecipe : NSObject <SBTestRecipe>

 {
    NSArray *_prototypeElementClasses;
    NSMutableArray *_elementAssertions;
    NSInteger _elementClassToInsertIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldRegisterTestRecipe;
-(id)init;
-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif