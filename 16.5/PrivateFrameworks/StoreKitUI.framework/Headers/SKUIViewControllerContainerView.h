// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIVIEWCONTROLLERCONTAINERVIEW_H
#define SKUIVIEWCONTROLLERCONTAINERVIEW_H

@class UIView, UIViewController;



@interface SKUIViewControllerContainerView : UIView

@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLayoutOfViewControllerView;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif