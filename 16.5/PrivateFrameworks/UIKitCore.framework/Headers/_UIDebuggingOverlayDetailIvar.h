// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEBUGGINGOVERLAYDETAILIVAR_H
#define _UIDEBUGGINGOVERLAYDETAILIVAR_H

@class UIDebuggingOverlayViewControllerDetail;


#import "UIDebuggingIvarViewController.h"

@interface _UIDebuggingOverlayDetailIvar : UIDebuggingOverlayViewControllerDetail {
    UIDebuggingIvarViewController *_vc;
}




-(id)viewController;
-(void)_createVCIfNecessary;
-(void)_updateForInspectedView:(id)arg0 ;
-(void)_updateForInspectedViewController:(id)arg0 ;


@end


#endif