// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI15COUNTDOWNBUTTON_H
#define _TTC8VIDEOSUI15COUNTDOWNBUTTON_H



#import "VUIButton.h"

@interface _TtC8VideosUI15CountDownButton : VUIButton {
    ? title;
    ? image;
    ? duration;
    ? layout;
    ? progressWidth;
    ? didAutoPlay;
    ? $__lazy_storage_$_countDownIndicator;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(void)configureWithLayoutProperties;


@end


#endif