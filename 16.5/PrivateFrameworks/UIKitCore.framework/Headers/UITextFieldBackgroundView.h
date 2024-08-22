// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTFIELDBACKGROUNDVIEW_H
#define UITEXTFIELDBACKGROUNDVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface UITextFieldBackgroundView : UIView {
    BOOL _active;
    BOOL _enabled;
    float _progress;
}


@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor


-(id)initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 ;
-(void)_updateImages;
-(void)setActive:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setProgress:(float)arg0 ;


@end


#endif