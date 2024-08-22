// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAINFOFETCHCONTROLLER_H
#define VUIMEDIAINFOFETCHCONTROLLER_H

@class NSMutableArray, NSOperationQueue, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSMutableArray *imageOperations; // ivar: _imageOperations
@property (retain, nonatomic) NSOperationQueue *imageQueue; // ivar: _imageQueue
@property (nonatomic) NSUInteger index; // ivar: _index
@property (copy, nonatomic) NSArray *mediaInfos; // ivar: _mediaInfos
@property (nonatomic) NSUInteger playerPreloadOffset; // ivar: _playerPreloadOffset
@property (nonatomic, getter=isPreloadPlaybackEnabled) BOOL preloadPlaybackEnabled; // ivar: _preloadPlaybackEnabled
@property (retain, nonatomic) NSMutableDictionary *prewarmedPlayers; // ivar: _prewarmedPlayers


+(void)initialize;
-(NSInteger)queuePriorityForIndex:(NSInteger)arg0 itemCount:(NSInteger)arg1 selectedIndex:(NSInteger)arg2 ;
-(id)_createPlayerWithPlaylist:(id)arg0 isForPrewarming:(BOOL)arg1 ;
-(id)_identifierForPlaylist:(id)arg0 isForPrewarming:(BOOL)arg1 ;
-(id)_prewarmIndices;
-(id)init;
-(id)initWithMediaInfos:(id)arg0 ;
-(id)loadPlayerAtIndex:(NSUInteger)arg0 ;
-(void)_populateQueueWithMediaInfos:(id)arg0 ;
-(void)_removePrewarmedPlayerForIdentifier:(id)arg0 ;
-(void)_updateImageOperationPriorities;
-(void)_updatePrewarmedPlayers;
-(void)appendMediaInfos:(id)arg0 ;
-(void)clearPreloadedPlayback;
-(void)dealloc;
-(void)loadImageAtIndex:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)preloadPlayback;
-(void)removeMediaInfoAtIndex:(NSUInteger)arg0 ;
-(void)setMediaInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif