// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTARTUPTRANSITIONCONTEXT_H
#define SBSTARTUPTRANSITIONCONTEXT_H

@class NSURL, NSString, BKSDisplayRenderOverlay;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBStartupTransitionContext : NSObject <BSDescriptionProviding>

 {
    BOOL _isLoginSession;
}


@property (copy, nonatomic) NSURL *applicationLaunchURL; // ivar: _applicationLaunchURL
@property (nonatomic, getter=isDark) BOOL dark; // ivar: _isDark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fromApplicationBundleID; // ivar: _fromApplicationBundleID
@property (nonatomic) BOOL fromLocked; // ivar: _fromLocked
@property (nonatomic) BOOL fromUserPowerDown; // ivar: _fromUserPowerDown
@property (nonatomic) BOOL hasUserSwitchOverlayMismatch; // ivar: _hasUserSwitchOverlayMismatch
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLogin) BOOL login; // ivar: _isLogin
@property (nonatomic, getter=isLogout) BOOL logout; // ivar: _isLogout
@property (retain, nonatomic) BKSDisplayRenderOverlay *overlay; // ivar: _overlay
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRebootContext:(id)arg0 ;
-(id)_initWithRepresentation:(id)arg0 loginSession:(BOOL)arg1 ;
-(id)_initWithRestartRequest:(id)arg0 fromLocked:(BOOL)arg1 fromApplication:(id)arg2 ;
-(id)_initWithShutdownContext:(id)arg0 ;
-(id)_representation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_parseOverlayInfo;
-(void)_reallyInitFromRepresentation:(id)arg0 ;


@end


#endif