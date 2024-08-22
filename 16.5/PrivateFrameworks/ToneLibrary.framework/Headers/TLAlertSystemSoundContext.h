// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLALERTSYSTEMSOUNDCONTEXT_H
#define TLALERTSYSTEMSOUNDCONTEXT_H

@class NSString;
@protocol TLAlertPlaybackObserver;

#import <Foundation/Foundation.h>

#import "TLAlertPlaybackCompletionContext.h"
#import "TLSystemSound.h"
#import "TLAlertStoppingOptions.h"

@interface TLAlertSystemSoundContext : NSObject

@property (nonatomic, getter=isBeingDeemphasized) BOOL beingDeemphasized; // ivar: _beingDeemphasized
@property (nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted; // ivar: _beingInterrupted
@property (nonatomic, getter=isDeemphasized) BOOL deemphasized; // ivar: _deemphasized
@property (nonatomic) BOOL hasDeemphasizedPlaybackStarted; // ivar: _hasDeemphasizedPlaybackStarted
@property (nonatomic) BOOL hasPlaybackStarted; // ivar: _hasPlaybackStarted
@property (nonatomic, getter=isLoadingSound) BOOL loadingSound; // ivar: _loadingSound
@property (retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext; // ivar: _playbackCompletionContext
@property (weak, nonatomic) NSObject<TLAlertPlaybackObserver> *playbackObserver; // ivar: _playbackObserver
@property (nonatomic, getter=isRequiringBacklightObservation) BOOL requiringBacklightObservation; // ivar: _requiringBacklightObservation
@property (nonatomic) BOOL shouldBeInterruptedAfterDeemphasizedPlaybackStarts; // ivar: _shouldBeInterruptedAfterDeemphasizedPlaybackStarts
@property (retain, nonatomic) TLSystemSound *sound; // ivar: _sound
@property (copy, nonatomic) TLAlertStoppingOptions *stoppingOptionsForDeferredInterruption; // ivar: _stoppingOptionsForDeferredInterruption
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert; // ivar: _toneIdentifierForDeemphasizingAlert


-(id)description;


@end


#endif