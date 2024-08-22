// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKCONTINUEWATCHINGRESPONSE_H
#define WLKCONTINUEWATCHINGRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WLKContinueWatchingCollection.h"

@interface WLKContinueWatchingResponse : NSObject

@property (readonly, copy, nonatomic) WLKContinueWatchingCollection *featured; // ivar: _featured
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif