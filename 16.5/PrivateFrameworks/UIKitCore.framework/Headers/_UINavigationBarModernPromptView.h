// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARMODERNPROMPTVIEW_H
#define _UINAVIGATIONBARMODERNPROMPTVIEW_H

@class NSString;
@protocol _UINavigationBarLayoutParticipating;


#import "UIView.h"
#import "UILabel.h"
#import "UIColor.h"

@interface _UINavigationBarModernPromptView : UIView <_UINavigationBarLayoutParticipating>

 {
    UILabel *_promptLabel;
}


@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatePromptLabel;
-(void)updateLayoutData:(id)arg0 layoutWidth:(CGFloat)arg1 ;


@end


#endif