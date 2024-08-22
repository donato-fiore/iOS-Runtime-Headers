// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTVIEWDOMINOANIMATOR_H
#define SBICONLISTVIEWDOMINOANIMATOR_H

@class NSString;
@protocol SBIconListLayoutAnimating;

#import <Foundation/Foundation.h>


@interface SBIconListViewDominoAnimator : NSObject <SBIconListLayoutAnimating>

 {
    CGFloat _delay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)iconListView:(id)arg0 wantsAnimatedLayoutForIconView:(id)arg1 withParameters:(struct SBIconListLayoutAnimationParameters )arg2 alongsideAnimationBlock:(id)arg3 ;
-(void)iconListView:(id)arg0 wantsAnimatedRemovalForIconViews:(id)arg1 completionHandler:(id)arg2 ;
-(void)reset;


@end


#endif