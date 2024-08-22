// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBHUDMODEL_H
#define _SBHUDMODEL_H

@class NSTimer, UIViewController<SBHUDViewControlling>, NSString;
@protocol _SBHUDHostViewControllerDelegate, SBHUDControlling;

#import <Foundation/Foundation.h>

#import "SBHUDController.h"

@interface _SBHUDModel : NSObject <_SBHUDHostViewControllerDelegate, SBHUDControlling>

 {
    NSTimer *_dismissalTimer;
}


@property (readonly, nonatomic) SBHUDController *HUDController; // ivar: _HUDController
@property (readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController; // ivar: _HUDViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat dismissalInterval; // ivar: _dismissalInterval
@property (readonly, nonatomic, getter=isDismissalScheduled) BOOL dismissalScheduled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, setter=setDismissed:) BOOL isDismissed; // ivar: _dismissed
@property (nonatomic, setter=setDismissing:) BOOL isDismissing; // ivar: _dismissing
@property (nonatomic, setter=setPresented:) BOOL isPresented; // ivar: _presented
@property (nonatomic, setter=setPresenting:) BOOL isPresenting; // ivar: _presenting
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) Class superclass;


+(id)HUDModelForController:(id)arg0 viewController:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)hudViewController:(id)arg0 didDismissHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 didPresentHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 willDismissHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 willPresentHUD:(id)arg1 ;
-(void)invalidateDismissalTimer;
-(void)presentWithDismissalInterval:(CGFloat)arg0 ;
-(void)presentWithDismissalInterval:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)rescheduleDismissalTimer;
-(void)scheduleDismissalTimer;


@end


#endif