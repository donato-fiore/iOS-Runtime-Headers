// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREMOTEVIEWCONTROLLERCONNECTIONREQUEST_H
#define _UIREMOTEVIEWCONTROLLERCONNECTIONREQUEST_H

@class NSString, NSUUID, NSArray, NSError;
@protocol _UIViewServiceDeputyXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIRemoteViewService.h"
#import "UITraitCollection.h"
#import "_UIAsyncInvocation.h"
#import "_UIRemoteViewControllerConnectionInfo.h"

@interface _UIRemoteViewControllerConnectionRequest : NSObject {
    _UIRemoteViewService *_service;
    id *_handler;
    NSString *_viewServiceBundleIdentifier;
    NSString *_viewControllerClassName;
    NSUUID *_contextToken;
    NSArray *_serializedAppearanceCustomizations;
    UITraitCollection *_traits;
    id *_exportedHostingObject;
    Class _remoteViewControllerClass;
    id<_UIViewServiceDeputyXPCInterface> *_serviceViewControllerDeputyInterface;
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelledOrComplete;
    NSError *_error;
    _UIAsyncInvocation *_requestCancellationInvocation;
}




+(id)__requestRemoteViewController:(id)arg0 service:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 traitCollection:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id)arg7 ;
+(id)requestViewController:(id)arg0 fromServiceWithBundleIdentifier:(id)arg1 serializedAppearanceCustomizations:(id)arg2 traitCollection:(id)arg3 exportedHostingObject:(id)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(id)arg6 ;
+(id)requestViewControllerWithService:(id)arg0 serializedAppearanceCustomizations:(id)arg1 traitCollection:(id)arg2 exportedHostingObject:(id)arg3 remoteViewControllerClass:(Class)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(id)arg6 ;
-(id)_cancelWithError:(id)arg0 ;
-(void)_cancelUnconditionallyThen:(id)arg0 ;
-(void)_connectToDeputyWithInterface:(id)arg0 fromExportedHostingObject:(id)arg1 successHandler:(id)arg2 ;
-(void)_connectToPlugInKitService;
-(void)_connectToServiceViewController;
-(void)_connectToTextEffectsOperator;
-(void)_connectToViewControllerControlMessageDeputy;
-(void)_connectToViewControllerOperator;
-(void)_connectToViewService;
-(void)_didFinishEstablishingConnection;
-(void)_sendServiceTextEffectsRequest;
-(void)_sendServiceViewControllerRequest;
-(void)dealloc;


@end


#endif