// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMETRICSDOMCHANGE_H
#define SKUIMETRICSDOMCHANGE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMetricsDOMChange : NSObject <NSCopying>



@property (nonatomic) CGFloat buildEndTime; // ivar: _buildEndTime
@property (nonatomic) CGFloat buildStartTime; // ivar: _buildStartTime
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isFromDeferredMessage) BOOL fromDeferredMessage; // ivar: _fromDeferredMessage
@property (nonatomic) CGFloat renderEndTime; // ivar: _renderEndTime
@property (nonatomic) CGFloat renderStartTime; // ivar: _renderStartTime


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithReportDomBuildTimesMessagePayload:(id)arg0 ;


@end


#endif