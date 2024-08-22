// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIALERTCONTROLLERSHIMPRESENTER_H
#define _UIALERTCONTROLLERSHIMPRESENTER_H

@class NSString;
@protocol UIPopoverControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIPopoverController.h"
#import "UIViewController.h"
#import "UIAlertController.h"
#import "UIAlertView.h"
#import "_UIAlertControllerShimPresenterWindow.h"

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate>

 {
    UIPopoverController *_popoverController;
    id<UIPopoverControllerDelegate> *_popoverDelegate;
    UIViewController *_inPopoverViewController;
}


@property (weak, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIAlertView *legacyAlert; // ivar: _legacyAlert
@property (weak, nonatomic) NSObject<UIPopoverControllerDelegate> *popoverDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIAlertControllerShimPresenterWindow *window; // ivar: _window


+(BOOL)_shouldPresentActionSheetsFullscreen;
+(id)_currentFullScreenAlertPresenters;
+(void)_addPresenter:(id)arg0 ;
+(void)_cancelPendingTouchesIfAppropriateForWindow:(id)arg0 ;
+(void)_removePresenter:(id)arg0 ;
-(id)_popoverController;
-(void)_createWindowIfNecessaryWithScene:(id)arg0 ;
-(void)_dismissAlertControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_presentAlertControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_presentAlertControllerAnimated:(BOOL)arg0 hostingScene:(id)arg1 completion:(id)arg2 ;
-(void)_presentAlertControllerFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentAlertControllerFromRect:(struct CGRect )arg0 inView:(id)arg1 direction:(NSUInteger)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)_tearDownInPopoverViewController;
-(void)dealloc;


@end


#endif