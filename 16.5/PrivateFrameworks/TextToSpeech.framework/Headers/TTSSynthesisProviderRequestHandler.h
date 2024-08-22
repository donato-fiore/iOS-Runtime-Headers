// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSYNTHESISPROVIDERREQUESTHANDLER_H
#define TTSSYNTHESISPROVIDERREQUESTHANDLER_H

@class AVSpeechSynthesisProviderRequest, NSMutableArray;
@protocol TTSSynthesisProviderHandlerDelegate;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderRequestHandler : NSObject {
    os_unfair_lock_s _bufferLock;
}


@property (nonatomic) NSUInteger bytesPerFrame; // ivar: _bytesPerFrame
@property (nonatomic) unsigned int currentAudioBufferFrameCount; // ivar: _currentAudioBufferFrameCount
@property (weak, nonatomic) NSObject<TTSSynthesisProviderHandlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isFinishedReceivingBuffers; // ivar: _isFinishedReceivingBuffers
@property (retain, nonatomic) AVSpeechSynthesisProviderRequest *managingSpeechRequest; // ivar: _managingSpeechRequest
@property (retain, nonatomic) NSMutableArray *queuedMarkers; // ivar: _queuedMarkers


-(id)dequeueMarkersUpToFrame:(NSInteger)arg0 ;
-(id)initWithRequest:(id)arg0 bytesPerFrame:(NSUInteger)arg1 ;
-(void)addBuffers:(id)arg0 ;
-(void)addMarkers:(id)arg0 ;
-(void)completedRequestRendering;


@end


#endif