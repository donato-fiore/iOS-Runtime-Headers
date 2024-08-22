// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSHOW_H
#define KNSHOW_H

@class TSPObject, TSSStylesheet;


#import "KNSlideTree.h"
#import "KNRecording.h"
#import "KNSoundtrack.h"
#import "KNTheme.h"
#import "KNUIState.h"

@interface KNShow : TSPObject {
    KNSlideTree *_slideTree;
    KNRecording *_recording;
    CGFloat _autoplayTransitionDelay;
    CGFloat _autoplayBuildDelay;
    CGFloat _idleTimerDelay;
    NSInteger _mode;
    BOOL _loopPresentation;
    BOOL _idleTimerActive;
    BOOL _automaticallyPlaysUponOpen;
    KNSoundtrack *_soundtrack;
}


@property (nonatomic) BOOL automaticallyPlaysUponOpen;
@property (nonatomic) CGFloat autoplayBuildDelay;
@property (nonatomic) CGFloat autoplayTransitionDelay;
@property (readonly, nonatomic) BOOL hasInSyncRecording;
@property (nonatomic) BOOL idleTimerActive;
@property (nonatomic) CGFloat idleTimerDelay;
@property (nonatomic) BOOL localizeDocument; // ivar: _localizeDocument
@property (nonatomic) BOOL loopPresentation;
@property (nonatomic) NSInteger mode;
@property (readonly, nonatomic) BOOL needsToUpdateThumbnails; // ivar: _needsToUpdateThumbnails
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (retain, nonatomic) KNRecording *recording;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) BOOL slideNumbersVisible;
@property (retain, nonatomic) KNSlideTree *slideTree;
@property (retain, nonatomic) KNSoundtrack *soundtrack;
@property (readonly, nonatomic) TSSStylesheet *stylesheet; // ivar: _stylesheet
@property (retain, nonatomic) KNTheme *theme; // ivar: _theme
@property (retain, nonatomic) KNUIState *uiState; // ivar: _uiState
@property (readonly, nonatomic) BOOL wasImportedAsPreUFF; // ivar: _wasImportedAsPreUFF


+(NSUInteger)maximumHeight;
+(NSUInteger)maximumHeightForExport;
+(NSUInteger)maximumWidth;
+(NSUInteger)maximumWidthForExport;
+(NSUInteger)minimumHeight;
+(NSUInteger)minimumWidth;
+(id)showWithSize:(struct CGSize )arg0 context:(id)arg1 ;
-(NSUInteger)indexOfSlideNode:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 context:(id)arg1 ;
-(id)slideNodeAtIndex:(NSUInteger)arg0 ;
-(id)slideNodesAtIndexes:(id)arg0 ;
-(struct CGPoint )center;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willModify;


@end


#endif