// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOLDALERTITEMWINDOW_H
#define SBOLDALERTITEMWINDOW_H



#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"
#import "SBAlertLayoutPresentationVerifier.h"

@interface SBOldAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier; // ivar: _alertLayoutPresentationVerifier


+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 role:(id)arg1 debugName:(id)arg2 alertLayoutPresentationVerifier:(id)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif