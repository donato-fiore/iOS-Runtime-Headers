// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDUALINDICATORITEM_H
#define _UISTATUSBARDUALINDICATORITEM_H

@class NSLayoutConstraint;


#import "UIStatusBarItem.h"
#import "_UIStatusBarImageView.h"
#import "_UIStatusBarDisplayableContainerView.h"

@interface _UIStatusBarDualIndicatorItem : UIStatusBarItem

@property (nonatomic) CGFloat additionRemovalDuration; // ivar: _additionRemovalDuration
@property (nonatomic) CGFloat additionRemovalScale; // ivar: _additionRemovalScale
@property (retain, nonatomic) _UIStatusBarImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) _UIStatusBarDisplayableContainerView *iconsView; // ivar: _iconsView
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (retain, nonatomic) NSLayoutConstraint *itemSpacingConstraint; // ivar: _itemSpacingConstraint
@property (retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // ivar: _secondaryIconView


-(id)additionRemovalAnimationForSubItem:(id)arg0 image:(id)arg1 update:(id)arg2 displayItem:(id)arg3 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)dependentEntryKeys;
-(id)imageForUpdate:(id)arg0 secondary:(BOOL)arg1 ;
-(id)indicatorEntryKey;
-(id)secondaryIndicatorEntryKey;
-(id)secondarySystemImageNameForUpdate:(id)arg0 ;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif