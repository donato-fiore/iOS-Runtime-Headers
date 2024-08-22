// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKPOSITIONINFO_H
#define VUIPLAYBACKPOSITIONINFO_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIPlaybackPositionInfo : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *bookmarkTime; // ivar: _bookmarkTime
@property (retain, nonatomic) NSNumber *hasBeenPlayed; // ivar: _hasBeenPlayed
@property (retain, nonatomic) NSNumber *playCount; // ivar: _playCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif