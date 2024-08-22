// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SULOADINGVIEW_H
#define SULOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, UIColor;



@interface SULoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    NSUInteger _style;
}


@property (retain, nonatomic) UIColor *activityIndicatorColor; // ivar: _activityIndicatorColor
@property (nonatomic) NSInteger activityIndicatorStyle; // ivar: _activityIndicatorStyle
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIColor *textShadowColor; // ivar: _textShadowColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newProgressIndicator;
-(id)newTextLabel;
-(void)_setupSubviews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(NSUInteger)arg0 ;
-(void)sizeToFit;


@end


#endif