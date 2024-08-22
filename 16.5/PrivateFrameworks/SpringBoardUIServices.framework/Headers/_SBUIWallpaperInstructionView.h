// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUIWALLPAPERINSTRUCTIONVIEW_H
#define _SBUIWALLPAPERINSTRUCTIONVIEW_H

@class UIView, UIImageView, UILabel;



@interface _SBUIWallpaperInstructionView : UIView {
    UIImageView *_imageView;
    UILabel *_textLabel;
}




-(id)initWithImage:(id)arg0 text:(id)arg1 font:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;


@end


#endif