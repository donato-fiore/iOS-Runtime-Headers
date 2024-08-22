// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMEASURERESULT_H
#define WFMEASURERESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface WFMeasureResult : NSObject

@property (nonatomic) BOOL backhaulResultsValid; // ivar: _backhaulResultsValid
@property (nonatomic) CGFloat backhaulThroughput; // ivar: _backhaulThroughput
@property (nonatomic) BOOL dnsResultsValid; // ivar: _dnsResultsValid
@property (nonatomic) BOOL dnsSuccess; // ivar: _dnsSuccess
@property (copy, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (nonatomic) NSInteger gatewayMaxRTT; // ivar: _gatewayMaxRTT
@property (nonatomic) NSInteger gatewayMinRTT; // ivar: _gatewayMinRTT
@property (nonatomic) NSInteger gatewayPacketLoss; // ivar: _gatewayPacketLoss
@property (nonatomic) BOOL gatewayResultsValid; // ivar: _gatewayResultsValid
@property (nonatomic) NSInteger localDNSMaxRTT; // ivar: _localDNSMaxRTT
@property (nonatomic) NSInteger localDNSMinRTT; // ivar: _localDNSMinRTT
@property (nonatomic) NSInteger localDNSPacketLoss; // ivar: _localDNSPacketLoss
@property (nonatomic) BOOL localResultsValid; // ivar: _localResultsValid
@property (nonatomic) NSInteger publicDNSMaxRTT; // ivar: _publicDNSMaxRTT
@property (nonatomic) NSInteger publicDNSMinRTT; // ivar: _publicDNSMinRTT
@property (nonatomic) NSInteger publicDNSPacketLoss; // ivar: _publicDNSPacketLoss
@property (nonatomic) BOOL publicResultsValid; // ivar: _publicResultsValid
@property (nonatomic) BOOL seenSpecificAcFailure; // ivar: _seenSpecificAcFailure
@property (nonatomic) NSUInteger type; // ivar: _type


+(void)initialize;
-(id)allPrimitiveProperties;
-(id)binnedProperty:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)statusForDNS;
-(id)statusForInternet;
-(id)statusForLocal;


@end


#endif