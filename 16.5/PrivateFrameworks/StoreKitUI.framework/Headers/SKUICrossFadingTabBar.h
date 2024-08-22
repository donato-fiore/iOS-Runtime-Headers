// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICROSSFADINGTABBAR_H
#define SKUICROSSFADINGTABBAR_H

@class UIView, NSArray;


#import "SKUIScrollingTabBarBackgroundView.h"

@interface SKUICrossFadingTabBar : UIView

@property (readonly, nonatomic) SKUIScrollingTabBarBackgroundView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) NSArray *tabBarButtons; // ivar: _tabBarButtons


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif