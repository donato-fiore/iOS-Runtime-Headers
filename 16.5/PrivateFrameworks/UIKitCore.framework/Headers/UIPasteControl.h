// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPASTECONTROL_H
#define UIPASTECONTROL_H

@protocol _UISecureControl, UIPasteConfigurationSupporting;


#import "UIControl.h"
#import "_UISecureController.h"
#import "UIPasteControlConfiguration.h"

@interface UIPasteControl : UIControl <_UISecureControl>

 {
    _UISecureController *_secureController;
    BOOL _pasteboardObserved;
    BOOL _internallyEnabled;
}


@property (readonly, nonatomic) UIPasteControlConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<UIPasteConfigurationSupporting> *target; // ivar: _target


-(BOOL)isInternallyEnabled;
-(BOOL)shouldTrack;
-(id)_encodableSubviews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)synchronousSecureControlService;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(unsigned int)_secureName;
-(void)_updateEnabledWithNotification:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif