// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTMUSICPLAYERCONTROLLER_H
#define SUSCRIPTMUSICPLAYERCONTROLLER_H

@class NSString, NSNumber;


#import "SUScriptObject.h"
#import "SUScriptMediaItem.h"

@interface SUScriptMusicPlayerController : SUScriptObject {
    NSString *_playerType;
}


@property (readonly) CGFloat currentPlaybackTime;
@property (readonly) SUScriptMediaItem *nowPlayingItem;
@property (readonly) NSString *playbackState;
@property (readonly) NSString *playbackStateInterrupted;
@property (readonly) NSString *playbackStatePaused;
@property (readonly) NSString *playbackStatePlaying;
@property (readonly) NSString *playbackStateSeekingBackward;
@property (readonly) NSString *playbackStateSeekingForward;
@property (readonly) NSString *playbackStateStopped;
@property (readonly) NSString *playerType;
@property (copy) NSString *repeatMode;
@property (readonly) NSString *repeatModeAll;
@property (readonly) NSString *repeatModeDefault;
@property (readonly) NSString *repeatModeNone;
@property (readonly) NSString *repeatModeOne;
@property (copy) NSString *shuffleMode;
@property (readonly) NSString *shuffleModeAlbums;
@property (readonly) NSString *shuffleModeDefault;
@property (readonly) NSString *shuffleModeOff;
@property (readonly) NSString *shuffleModeSongs;
@property (retain) NSNumber *volume;


+(id)scriptPlaybackStateForNativePlaybackState:(NSInteger)arg0 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithPlayerType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(void)dealloc;
-(void)endSeeking;
-(void)pause;
-(void)play;
-(void)setQueueWithItemCollection:(id)arg0 ;
-(void)setQueueWithQuery:(id)arg0 ;
-(void)skipToBeginning;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)stop;


@end


#endif