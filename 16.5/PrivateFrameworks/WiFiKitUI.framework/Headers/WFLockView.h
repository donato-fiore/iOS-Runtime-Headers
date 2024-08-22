// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLOCKVIEW_H
#define WFLOCKVIEW_H

@class UIView, UILabel, UIImageView, UINavigationController;



@interface WFLockView : UIView {
    UILabel *titleLabel;
    UIImageView *lockImage;
}


@property (retain, nonatomic) UINavigationController *belongedNavigationController; // ivar: _belongedNavigationController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 viewToCover:(id)arg1 ;
-(void)didMoveToSuperview;


@end


#endif