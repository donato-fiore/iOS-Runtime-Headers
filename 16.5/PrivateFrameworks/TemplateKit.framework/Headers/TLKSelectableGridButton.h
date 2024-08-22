// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKSELECTABLEGRIDBUTTON_H
#define TLKSELECTABLEGRIDBUTTON_H

@class UIButton;


#import "TLKLabel.h"
#import "TLKStackView.h"

@interface TLKSelectableGridButton : UIButton {
    BOOL _customHighlight;
}


@property (retain, nonatomic) TLKLabel *bottomLabel; // ivar: _bottomLabel
@property (nonatomic) BOOL customHighlight;
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) TLKLabel *topLabel; // ivar: _topLabel


+(id)selectableGridButton;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif