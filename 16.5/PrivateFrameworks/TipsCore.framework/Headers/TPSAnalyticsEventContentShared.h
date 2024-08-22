// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSANALYTICSEVENTCONTENTSHARED_H
#define TPSANALYTICSEVENTCONTENTSHARED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *shareMethod; // ivar: _shareMethod


+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 shareMethod:(id)arg2 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 shareMethod:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif