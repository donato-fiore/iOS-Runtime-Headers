// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROTOTYPECONTROLLER_H
#define SBPROTOTYPECONTROLLER_H

@class NSXPCConnection, SBSStatusBarStyleOverridesAssertion, NSString;
@protocol PTUIClient;

#import <Foundation/Foundation.h>

#import "SBPrototypeDumpingGround.h"
#import "SBRootSettings.h"
#import "SBRestartManager.h"
#import "SBWindowScene.h"

@interface SBPrototypeController : NSObject <PTUIClient>

 {
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBRestartManager *restartManager; // ivar: _restartManager
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)sharedInstance;
-(BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_handlePrototypingEvent:(NSInteger)arg0 ;
-(BOOL)_shouldSendEvent:(NSInteger)arg0 ;
-(BOOL)handleKeyHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)handleRingerSwitchEvent;
-(BOOL)handleVolumeDecreaseEvent;
-(BOOL)handleVolumeIncreaseEvent;
-(id)init;
-(id)rootSettings;
-(void)_acquireRemotePrototypingAssertion;
-(void)_createConnection;
-(void)_invalidateRemotePrototypingAssertion;
-(void)_sendEvent:(NSInteger)arg0 ;
-(void)_updateKeyHIDEventRouters;
-(void)_updateRemoteEditingState;
-(void)killSpringBoard;
-(void)restartSpringBoard;


@end


#endif