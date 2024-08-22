// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUIBUTTON_H
#define VTUIBUTTON_H

@class UIButton;



@interface VTUIButton : UIButton



+(id)_vtuiButtonWithPrimaryStyle;
+(id)_vtuiButtonWithPrimaryStyleForNormalAndDisabledState;
+(id)_vtuiButtonWithSecondaryStyle;
+(id)_vtuiProximityBackgroundButtonImageWithColor:(id)arg0 ;
+(id)_vtuiProximityButtonWithPRXStyle;
+(id)_vtuiProximityButtonWithPrimaryStyle;
+(id)vtuiBackgroundButtonImageWithColor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif