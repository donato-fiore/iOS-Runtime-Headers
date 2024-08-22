// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACTIVITYINDICATORVIEW_H
#define VUIACTIVITYINDICATORVIEW_H

@class UIActivityIndicatorView;



@interface VUIActivityIndicatorView : UIActivityIndicatorView



+(id)vui_activityIndicatorViewWithActivityIndicatorStyle:(NSUInteger)arg0 ;
-(void)vui_startAnimating;
-(void)vui_startTimer:(CGFloat)arg0 ;
-(void)vui_stopAnimating;


@end


#endif