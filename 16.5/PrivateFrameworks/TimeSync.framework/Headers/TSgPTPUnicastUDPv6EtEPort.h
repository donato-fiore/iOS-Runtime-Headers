// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSGPTPUNICASTUDPV6ETEPORT_H
#define TSGPTPUNICASTUDPV6ETEPORT_H

@class NSData;


#import "TSgPTPFDEtEPort.h"
#import "TSXgPTPUnicastUDPv6EtEPort.h"

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort {
    TSXgPTPUnicastUDPv6EtEPort *_implXPC;
}


@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;


+(id)keyPathsForValuesAffectingDestinationIPv6Address;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif