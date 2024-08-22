// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSSEARCHEVENT_H
#define SSMETRICSSEARCHEVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (retain, nonatomic) id *actionDetails;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (retain, nonatomic) NSString *targetType;
@property (retain, nonatomic) NSString *targetURL;


-(id)init;
-(void)setLocationWithEventLocations:(id)arg0 ;


@end


#endif