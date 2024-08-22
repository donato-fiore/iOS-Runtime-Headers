// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVOICEPREVIEWTASK_H
#define VSVOICEPREVIEWTASK_H

@class NSURL, NSString, AVAudioPlayer;
@protocol AVAudioPlayerDelegate, AFAudioPowerProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSVoicePreviewTask : NSObject <AVAudioPlayerDelegate, AFAudioPowerProviding>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSURL *currentPreviewURL; // ivar: _currentPreviewURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAudioPlayer *previewPlayer; // ivar: _previewPlayer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue; // ivar: _speakingQueue
@property (readonly) Class superclass;


+(id)audioPowerProvider;
+(id)previewAudioURLForLanguage:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 ;
+(id)sharedInstance;
// +(void)startVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 startedPlaying:(id)arg3 completion:(unk)arg4  ;
+(void)stopVoicePreview;
-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)didEndAccessPower;
// -(void)startVoicePreviewWithURL:(id)arg0 startedPlaying:(id)arg1 completion:(unk)arg2  ;
-(void)stopVoicePreview;
-(void)willBeginAccessPower;


@end


#endif