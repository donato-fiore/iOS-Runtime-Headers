// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIAPPLICATIONMODALPROGRESSCONTROLLER_H
#define _UIAPPLICATIONMODALPROGRESSCONTROLLER_H

@class NSTimer, NSString, NSProgress;

#import <Foundation/Foundation.h>

#import "_UIProgressView.h"
#import "UIWindowScene.h"
#import "UIAlertController.h"
#import "UIWindow.h"

@interface _UIApplicationModalProgressController : NSObject {
    BOOL _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
}


@property (retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // ivar: _alertController
@property (copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) id *dismissalHandler; // ivar: _dismissalHandler
@property (nonatomic) CGFloat displayDelaySeconds; // ivar: _displayDelaySeconds
@property (nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) CGFloat displayStartTime; // ivar: _displayStartTime
@property (retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // ivar: _hideTimer
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) id *preDisplayTestBlock; // ivar: _preDisplayTestBlock
@property (retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // ivar: _showTimer
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSProgress *urlProgress; // ivar: _urlProgress
@property (retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // ivar: _window


+(id)instanceForScene:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)arg0 ;
-(void)_dismissButtonAction:(id)arg0 ;
-(void)_hideImmediatelyWasDismissedByUser:(BOOL)arg0 ;
-(void)_hideTimerAction:(id)arg0 ;
-(void)_reset;
-(void)_showTimerAction:(id)arg0 ;
-(void)displayForCopyingFileAtURL:(id)arg0 toURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)displayForDownloadingURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)displayForDownloadingURL:(id)arg0 copyToURL:(id)arg1 completionHandler:(id)arg2 ;
// -(void)displayWithTitle:(id)arg0 message:(id)arg1 progress:(id)arg2 buttonTitle:(id)arg3 preDisplayTestBlock:(id)arg4 dismissalHandler:(unk)arg5  ;
-(void)hideAfterDelay:(CGFloat)arg0 forceCompletion:(BOOL)arg1 replacementDismissalHandler:(id)arg2 ;
-(void)hideAfterMinimumUptimeWithDismissalHandler:(id)arg0 ;
-(void)reconfigureWithTitle:(id)arg0 message:(id)arg1 progress:(id)arg2 buttonTitle:(id)arg3 dismissalHandler:(id)arg4 ;


@end


#endif