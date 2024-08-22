// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOADINGLABEL_H
#define LOADINGLABEL_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface LoadingLabel : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}




-(id)init;
-(id)text;
-(void)setHidden:(BOOL)arg0 ;
-(void)setText:(id)arg0 showingActivity:(BOOL)arg1 ;
-(void)sizeToFit;


@end


#endif