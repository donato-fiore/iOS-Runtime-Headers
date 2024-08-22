// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISCROLLINGTABBARPALETTE_H
#define SKUISCROLLINGTABBARPALETTE_H

@class UIView;
@protocol SKUIScrollingTabBarPaletteDelegate;


#import "SKUIScrollingTabBarBackgroundView.h"

@interface SKUIScrollingTabBarPalette : UIView

@property (nonatomic, getter=isAttached, setter=_setAttached:) BOOL attached; // ivar: _attached
@property (readonly, nonatomic, getter=_backgroundView) SKUIScrollingTabBarBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<SKUIScrollingTabBarPaletteDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat paletteHeight; // ivar: _paletteHeight
@property (nonatomic) BOOL tabBarBackgroundExtendsBehindPalette; // ivar: _tabBarBackgroundExtendsBehindPalette


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif