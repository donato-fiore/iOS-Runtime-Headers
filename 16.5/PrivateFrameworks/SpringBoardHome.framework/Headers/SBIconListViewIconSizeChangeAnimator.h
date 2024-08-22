// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTVIEWICONSIZECHANGEANIMATOR_H
#define SBICONLISTVIEWICONSIZECHANGEANIMATOR_H

@class NSString, UIView;
@protocol SBIconListLayoutAnimating;


#import "SBIconListViewClusterAnimator.h"
#import "SBHIconEditingSettings.h"
#import "SBIconView.h"

@interface SBIconListViewIconSizeChangeAnimator : SBIconListViewClusterAnimator <SBIconListLayoutAnimating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconEditingSettings *iconEditingSettings; // ivar: _iconEditingSettings
@property (readonly, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UIView *priorIconImageSnapshotView; // ivar: _priorIconImageSnapshotView
@property (retain, nonatomic) UIView *snapshotContainerView; // ivar: _snapshotContainerView
@property (readonly) Class superclass;


-(id)initWithIconView:(id)arg0 priorIconImageSnapshotView:(id)arg1 ;
-(void)iconListView:(id)arg0 wantsAnimatedLayoutForIconView:(id)arg1 withParameters:(struct SBIconListLayoutAnimationParameters )arg2 alongsideAnimationBlock:(id)arg3 ;
-(void)prepareAnimationForListView:(id)arg0 ;


@end


#endif