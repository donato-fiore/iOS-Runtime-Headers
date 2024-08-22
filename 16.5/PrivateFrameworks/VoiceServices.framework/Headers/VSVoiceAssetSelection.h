// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVOICEASSETSELECTION_H
#define VSVOICEASSETSELECTION_H

@class MAAsset, NSString;

#import <Foundation/Foundation.h>

#import "VSTrialVoice.h"
#import "VSVoiceAsset.h"

@interface VSVoiceAssetSelection : NSObject

@property (retain) MAAsset *asset; // ivar: _asset
@property (retain) NSString *builtInVoicePath; // ivar: _builtInVoicePath
@property (retain) VSTrialVoice *trialVoice; // ivar: _trialVoice
@property (retain) VSVoiceAsset *voiceData; // ivar: _voiceData
@property (retain, nonatomic) NSString *voicePath; // ivar: _voicePath
@property (nonatomic) _opaque_pthread_mutex_t voicePathLock; // ivar: _voicePathLock


-(BOOL)isDownloading;
-(BOOL)isInstalled;
-(CGFloat)preferenceScore;
-(NSUInteger)size;
-(id)descriptiveKey;
-(id)init;
-(id)initWithTrialVoice:(id)arg0 ;
-(id)key;
-(void)dealloc;


@end


#endif