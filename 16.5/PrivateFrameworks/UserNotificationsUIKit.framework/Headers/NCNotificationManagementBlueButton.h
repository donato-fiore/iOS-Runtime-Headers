// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONMANAGEMENTBLUEBUTTON_H
#define NCNOTIFICATIONMANAGEMENTBLUEBUTTON_H

@class UIButton, UIColor, NSString;
@protocol UIPointerInteractionDelegate;



@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate>

 {
    UIColor *_backgroundColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buttonWithTitle:(id)arg0 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif