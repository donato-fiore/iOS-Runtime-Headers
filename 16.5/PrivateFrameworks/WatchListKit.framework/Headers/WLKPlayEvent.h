// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKPLAYEVENT_H
#define WLKPLAYEVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WLKPlayEvent : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, copy, nonatomic) NSString *externalPlayableID; // ivar: _externalPlayableID
@property (readonly, copy, nonatomic) NSDate *occurrenceDate; // ivar: _occurrenceDate
@property (readonly, nonatomic, getter=isPlayed) BOOL played; // ivar: _played
@property (readonly, copy, nonatomic) NSString *showID; // ivar: _showID


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif