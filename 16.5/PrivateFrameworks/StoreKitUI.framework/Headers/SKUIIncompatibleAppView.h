// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIINCOMPATIBLEAPPVIEW_H
#define SKUIINCOMPATIBLEAPPVIEW_H

@class UIView, NSMutableArray, UIImageView, UILabel, UIImage, NSString;



@interface SKUIIncompatibleAppView : UIView {
    NSMutableArray *_buttons;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(id)addButtonWithTitle:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeButtonTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif