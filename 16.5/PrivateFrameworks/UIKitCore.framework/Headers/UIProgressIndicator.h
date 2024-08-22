// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPROGRESSINDICATOR_H
#define UIPROGRESSINDICATOR_H



#import "UIActivityIndicatorView.h"

@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;


+(struct CGSize )size;
-(void)setAnimating:(BOOL)arg0 ;
-(void)setStyle:(int)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif