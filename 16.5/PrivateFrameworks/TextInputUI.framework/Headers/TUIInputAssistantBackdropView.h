// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIINPUTASSISTANTBACKDROPVIEW_H
#define TUIINPUTASSISTANTBACKDROPVIEW_H

@class UIView, UIVisualEffectView;



@interface TUIInputAssistantBackdropView : UIView {
    UIVisualEffectView *_contentView;
}


@property CGFloat contentCornerRadius;


-(id)effectsFor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateVisualStyle:(id)arg0 ;


@end


#endif