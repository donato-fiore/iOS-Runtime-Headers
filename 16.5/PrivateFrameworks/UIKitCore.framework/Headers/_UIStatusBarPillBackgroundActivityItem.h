// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARPILLBACKGROUNDACTIVITYITEM_H
#define _UISTATUSBARPILLBACKGROUNDACTIVITYITEM_H

@class UIStatusBarBackgroundActivityItem;


#import "_UIStatusBarPillView.h"
#import "_UIStatusBarDisplayableContainerView.h"

@interface _UIStatusBarPillBackgroundActivityItem : UIStatusBarBackgroundActivityItem

@property (retain, nonatomic) _UIStatusBarPillView *combinedView; // ivar: _combinedView
@property (retain, nonatomic) _UIStatusBarDisplayableContainerView *iconsView; // ivar: _iconsView
@property (nonatomic) CGSize pillSize; // ivar: _pillSize


+(BOOL)_identifierContainsItemImage:(id)arg0 ;
+(BOOL)_identifierContainsSecondaryItemImage:(id)arg0 ;
+(BOOL)shouldKeepIconVisibleForActivityType:(NSInteger)arg0 ;
+(id)pillCombinedDisplayIdentifier;
-(BOOL)_shouldBounceWhenTransitioningFromType:(NSInteger)arg0 toType:(NSInteger)arg1 ;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg0 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg0 ;
-(id)_backgroundColorForActivityType:(NSInteger)arg0 ;
-(id)_textLabelForActivityType:(NSInteger)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif