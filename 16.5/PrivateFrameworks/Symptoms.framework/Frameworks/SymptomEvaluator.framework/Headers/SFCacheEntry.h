// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCACHEENTRY_H
#define SFCACHEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface SFCacheEntry : NSObject

@property (retain, nonatomic) NSObject *item; // ivar: _item
@property (retain, nonatomic) NSDate *lastUsed; // ivar: _lastUsed


-(id)initWithCacheItem:(id)arg0 ;


@end


#endif