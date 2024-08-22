// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBCOREMEDIACAPTURESTATUSBARHANDLER_H
#define WEBCOREMEDIACAPTURESTATUSBARHANDLER_H

@class NSString;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreMediaCaptureStatusBarHandler : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>

 {
    WeakPtr<WebCore::MediaCaptureStatusBarManager, WTF::DefaultWeakPtrImpl> m_manager;
    RetainPtr<SBSStatusBarStyleOverridesAssertion> m_statusBarStyleOverride;
    RetainPtr<SBSStatusBarStyleOverridesCoordinator> m_coordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)statusBarCoordinator:(id)arg0 receivedTapWithContext:(id)arg1 completionBlock:(id)arg2 ;
-(id)initWithManager:(*void)arg0 ;
-(void)start;
-(void)statusBarCoordinator:(id)arg0 invalidatedRegistrationWithError:(id)arg1 ;
-(void)stop;
-(void)validateIsStopped;


@end


#endif