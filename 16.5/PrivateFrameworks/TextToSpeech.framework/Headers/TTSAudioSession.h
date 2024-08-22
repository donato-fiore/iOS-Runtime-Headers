// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSAUDIOSESSION_H
#define TTSAUDIOSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSAudioSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _audioSessionIsSetUp;
    ? _desiredState;
    ? _cachedState;
    BOOL _bluetoothAllowed;
    *__CFBag _activityBag;
    NSInteger _serverGeneration;
}




+(id)sharedInstance;
-(NSInteger)_nextActivityForActive:(BOOL)arg0 activity:(NSInteger)arg1 serverActivity:(NSInteger)arg2 ;
-(NSInteger)_safeServerGeneration;
-(id)init;
-(void)_audioSessionInterrupted:(id)arg0 ;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_safeSetActive:(BOOL)arg0 withActivity:(NSInteger)arg1 ;
-(void)_safeSetBluetoothInputAllowed:(BOOL)arg0 ;
-(void)_safeSetCategoryForActivity:(NSInteger)arg0 ;
-(void)_safeSetupAudioSession;
-(void)_setCategoryForActivity:(NSInteger)arg0 ;
-(void)_setupAudioSession;
-(void)dealloc;


@end


#endif