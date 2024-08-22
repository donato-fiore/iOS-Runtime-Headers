// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUNAVIGATIONBUTTON_H
#define SUNAVIGATIONBUTTON_H

@class UINavigationButton, UIView;



@interface SUNavigationButton : UINavigationButton

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) UIEdgeInsets accessoryViewInsets; // ivar: _accessoryViewInsets


-(struct CGRect )_accessoryViewRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif