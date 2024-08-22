// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTAUDIOFILELOG_H
#define VTAUDIOFILELOG_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTAudioFileLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *OpaqueExtAudioFile _audioFile;
    AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}




+(id)sharedInstance;
-(id)init;
-(void)_closeAudioFile;
-(void)appendAudioData:(struct AudioBuffer )arg0 ;
-(void)dealloc;
-(void)startRecording;
-(void)stopRecording;


@end


#endif