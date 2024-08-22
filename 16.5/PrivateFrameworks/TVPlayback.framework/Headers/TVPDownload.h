// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPDOWNLOAD_H
#define TVPDOWNLOAD_H

@class NSString, NSPointerArray, AVAssetDownloadTask, NSError, NSNumber, NSArray, NSData, NSDictionary;
@protocol AVAssetDownloadDelegatePrivate, TVPMediaItem;

#import <Foundation/Foundation.h>

#import "TVPDownloadSession.h"
#import "TVPMediaItemLoader.h"
#import "TVPReportingSession.h"
#import "TVPStateMachine.h"

@interface TVPDownload : NSObject <AVAssetDownloadDelegatePrivate>



@property (nonatomic) BOOL addedMediaItemLoaderStateObserver; // ivar: _addedMediaItemLoaderStateObserver
@property (nonatomic) BOOL addedProgressObserver; // ivar: _addedProgressObserver
@property (nonatomic) BOOL allowCellularUsage; // ivar: _allowCellularUsage
@property (nonatomic) BOOL allowHDR; // ivar: _allowHDR
@property (nonatomic) BOOL allowMultichannelAudio; // ivar: _allowMultichannelAudio
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPointerArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger downloadInitiationBackgroundTask; // ivar: _downloadInitiationBackgroundTask
@property (weak, nonatomic) TVPDownloadSession *downloadSession; // ivar: _downloadSession
@property (retain, nonatomic) AVAssetDownloadTask *downloadTask; // ivar: _downloadTask
@property (nonatomic) NSUInteger downloadTerminationBackgroundTask; // ivar: _downloadTerminationBackgroundTask
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeDefaultAudioOption; // ivar: _includeDefaultAudioOption
@property (nonatomic) BOOL includeDeviceLanguageAudio; // ivar: _includeDeviceLanguageAudio
@property (nonatomic) BOOL includeOriginalAudio; // ivar: _includeOriginalAudio
@property (nonatomic) BOOL includesAllSubtitles; // ivar: _includesAllSubtitles
@property (nonatomic) CGFloat lastDownloadProgressFractionCompleted; // ivar: _lastDownloadProgressFractionCompleted
@property (nonatomic) BOOL limitMultichannelAudioToSingleLanguage; // ivar: _limitMultichannelAudioToSingleLanguage
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForAVC; // ivar: _maximumAverageBitrateForAVC
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForHDR; // ivar: _maximumAverageBitrateForHDR
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForSDRHEVC; // ivar: _maximumAverageBitrateForSDRHEVC
@property (retain, nonatomic) NSNumber *maximumIBitrate; // ivar: _maximumIBitrate
@property (retain, nonatomic) NSNumber *maximumIWidth; // ivar: _maximumIWidth
@property (retain, nonatomic) NSNumber *maximumMBitrate; // ivar: _maximumMBitrate
@property (retain, nonatomic) NSNumber *maximumMWidth; // ivar: _maximumMWidth
@property (retain, nonatomic) NSNumber *maximumPresentationWidth; // ivar: _maximumPresentationWidth
@property (retain, nonatomic) NSNumber *maximumSBitrate; // ivar: _maximumSBitrate
@property (retain, nonatomic) NSNumber *maximumSWidth; // ivar: _maximumSWidth
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader; // ivar: _mediaItemLoader
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForHEVC; // ivar: _minimumRequiredMediaBitrateForHEVC
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForMostCompatibleFormat; // ivar: _minimumRequiredMediaBitrateForMostCompatibleFormat
@property (nonatomic) CGSize minimumRequiredPresentationSize; // ivar: _minimumRequiredPresentationSize
@property (nonatomic) BOOL performKeyFetchOnly; // ivar: _performKeyFetchOnly
@property (nonatomic) BOOL preferEnhancedDownload; // ivar: _preferEnhancedDownload
@property (nonatomic) BOOL preferMostCompatibleRendition; // ivar: _preferMostCompatibleRendition
@property (retain, nonatomic) NSArray *preferredAudioLanguageCodes; // ivar: _preferredAudioLanguageCodes
@property (retain, nonatomic) NSArray *preferredSubtitleLanguageCodes; // ivar: _preferredSubtitleLanguageCodes
@property (readonly, nonatomic) CGFloat progress;
@property (retain, nonatomic) TVPReportingSession *reportingSession; // ivar: _reportingSession
@property (retain, nonatomic) NSError *startError; // ivar: _startError
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NSData *storageSettingsImageData; // ivar: _storageSettingsImageData
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(void)initialize;
-(id)_variantQualifiersForCurrentSettingsAndAudioOption:(id)arg0 useMultichannelAudio:(BOOL)arg1 ;
-(id)descriptionForState:(NSInteger)arg0 ;
-(id)initWithMediaItem:(id)arg0 downloadSession:(id)arg1 existingDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_addMediaSelectionOptionsIfNotAlreadyAdded:(id)arg0 toMediaSelections:(id)arg1 forMediaSelectionGroup:(id)arg2 baseMediaSelection:(id)arg3 ;
-(void)_downloadProgressDidChange;
-(void)_mediaItemLoaderStateDidChangeTo:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)addDelegate:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)removeDelegate:(id)arg0 ;
-(void)start;


@end


#endif