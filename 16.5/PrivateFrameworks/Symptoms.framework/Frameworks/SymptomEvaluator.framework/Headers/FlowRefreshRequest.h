// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWREFRESHREQUEST_H
#define FLOWREFRESHREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FlowRefreshRequest : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSString *logAs; // ivar: _logAs
@property (nonatomic) CGFloat maxLate; // ivar: _maxLate
@property (nonatomic) CGFloat maxStale; // ivar: _maxStale
@property (nonatomic) int preference; // ivar: _preference
@property (nonatomic) CGFloat preferredExpiry; // ivar: _preferredExpiry
@property (nonatomic) NSInteger reference; // ivar: _reference
@property (nonatomic) CGFloat scheduledExpiry; // ivar: _scheduledExpiry


-(id)description;


@end


#endif