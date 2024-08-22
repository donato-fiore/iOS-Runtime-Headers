// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSENTEREVENT_H
#define SSMETRICSENTEREVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *enterType;
@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;


-(id)description;
-(id)init;


@end


#endif