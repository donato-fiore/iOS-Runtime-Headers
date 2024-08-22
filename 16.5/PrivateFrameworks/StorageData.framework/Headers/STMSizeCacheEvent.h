// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMSIZECACHEEVENT_H
#define STMSIZECACHEEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STMSizeCacheEvent : NSObject

@property NSUInteger evtID; // ivar: _evtID
@property unsigned int flags; // ivar: _flags
@property (retain) NSString *path; // ivar: _path


+(id)eventWithPath:(id)arg0 flags:(unsigned int)arg1 event:(NSUInteger)arg2 ;
-(NSInteger)eventIDCompare:(id)arg0 ;


@end


#endif