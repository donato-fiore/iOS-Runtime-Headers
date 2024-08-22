// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSGPTPFDPTPPORT_H
#define TSGPTPFDPTPPORT_H



#import "TSgPTPNetworkPort.h"
#import "TSXgPTPFDPtPPort.h"
#import "TSgPTPPortStatistics.h"

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    TSXgPTPFDPtPPort *_implXPC;
}


@property (readonly, nonatomic) char localPDelayLogMeanInterval;
@property (readonly, nonatomic) BOOL measuringPDelay;
@property (readonly, nonatomic) BOOL multipleRemotes;
@property (readonly, nonatomic) char remotePDelayLogMeanInterval;
@property (retain, nonatomic) TSgPTPPortStatistics *statistics; // ivar: _statistics


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+(id)keyPathsForValuesAffectingMeasuringPDelay;
+(id)keyPathsForValuesAffectingMultipleRemotes;
+(id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;
-(id)initWithImplXPC:(id)arg0 ;
-(void)updateWithXPCStatistics:(id)arg0 ;


@end


#endif