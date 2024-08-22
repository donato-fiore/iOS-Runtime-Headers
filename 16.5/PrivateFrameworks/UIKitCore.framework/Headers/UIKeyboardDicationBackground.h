// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDDICATIONBACKGROUND_H
#define UIKEYBOARDDICATIONBACKGROUND_H

@class NSArray;


#import "UIView.h"
#import "UIKeyboardDicationBackgroundGradientView.h"

@interface UIKeyboardDicationBackground : UIView {
    NSArray *_shadows;
}


@property (retain, nonatomic) UIKeyboardDicationBackgroundGradientView *gradient; // ivar: _gradient


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)shadows;
-(void)layoutSubviews;


@end


#endif