// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPUNICASTUDPV4ETEPORT_H
#define TSXGPTPUNICASTUDPV4ETEPORT_H

@class NSNumber;


#import "TSXgPTPFDEtEPort.h"

@interface TSXgPTPUnicastUDPv4EtEPort : TSXgPTPFDEtEPort

@property (copy, nonatomic) NSNumber *destinationIPv4Address; // ivar: _destinationIPv4Address


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif