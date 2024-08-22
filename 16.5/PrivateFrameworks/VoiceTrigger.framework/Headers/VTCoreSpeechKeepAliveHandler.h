// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTCORESPEECHKEEPALIVEHANDLER_H
#define VTCORESPEECHKEEPALIVEHANDLER_H

@class NSString;
@protocol VTSiriEnabledMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate>

 {
    int _activeNotificationToken;
    int _inactiveNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _voiceTriggerEnabled;
    BOOL _speakerStateActivated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_coreSpeechDaemonKeepAlived;
-(id)init;
-(void)VTSiriEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)_disableCoreSpeechDaemonKeepAlive;
-(void)_enableCoreSpeechDaemonKeepAlive;
-(void)_handleSpeakerActivated;
-(void)_handleSpeakerInactivated;
-(void)_voiceTriggerPolicyDisabled;
-(void)_voiceTriggerPolicyEnabled;
-(void)dealloc;
-(void)start;
-(void)voiceTriggerPolicyDidChange:(BOOL)arg0 ;


@end


#endif