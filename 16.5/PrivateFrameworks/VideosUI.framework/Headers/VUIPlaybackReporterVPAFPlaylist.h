// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKREPORTERVPAFPLAYLIST_H
#define VUIPLAYBACKREPORTERVPAFPLAYLIST_H

@class NSString, NSArray;
@protocol JEMediaPlaylist, TVPPlayback;

#import <Foundation/Foundation.h>


@interface VUIPlaybackReporterVPAFPlaylist : NSObject <JEMediaPlaylist>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLive; // ivar: _isLive
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) NSObject<TVPPlayback> *player; // ivar: _player
@property (readonly) Class superclass;


-(id)initWithPlayer:(id)arg0 ;
-(id)itemAtOverallPosition:(NSUInteger)arg0 rangeOptions:(NSInteger)arg1 ;
-(id)itemsBetweenStartOverallPosition:(NSUInteger)arg0 endOverallPosition:(NSUInteger)arg1 ;


@end


#endif