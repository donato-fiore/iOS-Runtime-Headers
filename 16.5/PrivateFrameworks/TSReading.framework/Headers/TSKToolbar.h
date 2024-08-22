// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKTOOLBAR_H
#define TSKTOOLBAR_H

@class UINavigationBar, UINavigationItem, CALayer, NSString, UIColor;


#import "TSKToolbarTitleView.h"

@interface TSKToolbar : UINavigationBar {
    UINavigationItem *_navigationItem;
    CALayer *_shadowLayer;
}


@property (nonatomic) CGFloat leftToolbarItemsInset; // ivar: _leftToolbarItemsInset
@property (nonatomic) CGFloat leftToolbarItemsMaximumWidth; // ivar: _leftToolbarItemsMaximumWidth
@property (retain, nonatomic) TSKToolbarTitleView *navigationTitleView; // ivar: _navigationTitleView
@property (nonatomic) CGFloat rightToolbarItemsInset; // ivar: _rightToolbarItemsInset
@property (nonatomic) CGFloat rightToolbarItemsMaximumWidth; // ivar: _rightToolbarItemsMaximumWidth
@property (nonatomic) BOOL shadowEnabled; // ivar: _shadowEnabled
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)itemWithTag:(NSInteger)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 height:(CGFloat)arg2 isLeft:(BOOL)arg3 ;
-(void)setLeftItems:(id)arg0 title:(id)arg1 rightItems:(id)arg2 duration:(CGFloat)arg3 ;


@end


#endif