// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWSTATUSPRESENTER_H
#define WFWORKFLOWSTATUSPRESENTER_H

@class NSXPCConnection, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, WFDialogAlertPresenter, WFDialogAlertPresenterDelegate, OS_dispatch_queue, WFWorkflowStatusPresenterDelegate;

#import <Foundation/Foundation.h>


@interface WFWorkflowStatusPresenter : NSObject <NSXPCListenerDelegate, WFDialogAlertPresenter>



@property (retain, nonatomic) NSXPCConnection *activeConnection; // ivar: _activeConnection
@property (readonly, nonatomic) BOOL alertIsActive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDialogAlertPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLaunching) BOOL launching; // ivar: _launching
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<WFWorkflowStatusPresenterDelegate> *statusPresenterDelegate; // ivar: _statusPresenterDelegate
@property (readonly) Class superclass;


-(BOOL)alertIsLaunching;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg0 ;
-(void)deactivateAlert;


@end


#endif