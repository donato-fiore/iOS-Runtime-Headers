// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARFULLBACKGROUNDACTIVITYITEM_H
#define _UISTATUSBARFULLBACKGROUNDACTIVITYITEM_H

@class UIStatusBarBackgroundActivityItem;


#import "_UIStatusBarStringView.h"

@interface _UIStatusBarFullBackgroundActivityItem : UIStatusBarBackgroundActivityItem

@property (retain, nonatomic) _UIStatusBarStringView *detailStringView; // ivar: _detailStringView


+(id)detailDisplayIdentifier;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;
-(void)_create_backgroundView;


@end


#endif