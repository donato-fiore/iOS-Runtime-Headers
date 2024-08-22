// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARCUSTOMIZEVIEW_H
#define UITABBARCUSTOMIZEVIEW_H

@class NSMutableArray, NSArray;


#import "UIView.h"
#import "UITabBar.h"
#import "UITabBarItemProxy.h"
#import "UITabBarItem.h"
#import "UISnapshotView.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UINavigationBar.h"

@interface UITabBarCustomizeView : UIView {
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    CGPoint _startPoint;
    NSInteger _itemsInRowCount;
    CGFloat _gridOffset;
    CGRect _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    BOOL _isBeingDismissed;
}


@property (retain, nonatomic) NSArray *availableItems; // ivar: _availableItems
@property (retain, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar


-(NSInteger)_barMetrics;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)itemInTabBarWithTouches:(id)arg0 withEvent:(id)arg1 ;
-(id)titleLabelFont;
-(void)adjustDragImageWithTouches:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIsBeingDismissed;
-(void)setTabBar:(id)arg0 currentItems:(id)arg1 availableItems:(id)arg2 ;
-(void)tabBarTouchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)tabBarTouchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)tabBarTouchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)tabBarTouchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)tintTabBarItemsForEdit:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateProxiesSelection;


@end


#endif