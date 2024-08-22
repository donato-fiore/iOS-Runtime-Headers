// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFISETTLEMENTCONFIGURATION_H
#define WIFISETTLEMENTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface WiFiSettlementConfiguration : NSObject

@property (nonatomic) CGFloat highConfidenceSettlementTime; // ivar: _highConfidenceSettlementTime
@property (nonatomic) CGFloat lowConfidenceSettlementTime; // ivar: _lowConfidenceSettlementTime
@property (nonatomic) NSUInteger maxNetworksForSettlement; // ivar: _maxNetworksForSettlement
@property (nonatomic) NSUInteger maxScansWithoutMatchForUnsettlement; // ivar: _maxScansWithoutMatchForUnsettlement


-(id)description;
-(id)init;


@end


#endif