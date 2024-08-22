// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTVIEWDOMINOPIVOTANIMATOR_H
#define SBICONLISTVIEWDOMINOPIVOTANIMATOR_H

@class NSString;
@protocol SBIconListLayoutAnimating, SBIconListViewDominoPivotAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "SBHIconEditingSettings.h"
#import "SBIcon.h"

@interface SBIconListViewDominoPivotAnimator : NSObject <SBIconListLayoutAnimating>

 {
    SBHIconEditingSettings *_iconEditingSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIconListViewDominoPivotAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *pivotIcon; // ivar: _pivotIcon
@property (nonatomic) NSUInteger pivotIconIndex; // ivar: _pivotIconIndex
@property (readonly) Class superclass;


-(id)initWithPivotIcon:(id)arg0 ;
-(void)iconListView:(id)arg0 wantsAnimatedLayoutForIconView:(id)arg1 withParameters:(struct SBIconListLayoutAnimationParameters )arg2 alongsideAnimationBlock:(id)arg3 ;
-(void)iconListView:(id)arg0 wantsAnimatedRemovalForIconViews:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif