// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKMOVIEPLAYBACKREGISTRY_H
#define TSKMOVIEPLAYBACKREGISTRY_H

@class TSUMutablePointerSet, NSString;

#import <Foundation/Foundation.h>


@interface TSKMoviePlaybackRegistry : NSObject {
    TSUMutablePointerSet *_playingObjectPointerSet;
    NSString *_savedAudioCategory;
    NSString *_savedAudioMode;
    NSUInteger _savedAudioCategoryOptions;
}




+(id)sharedMoviePlaybackRegistry;
-(id)init;
-(void)objectDidEndMoviePlayback:(id)arg0 ;
-(void)objectWillBeginMoviePlayback:(id)arg0 ;


@end


#endif