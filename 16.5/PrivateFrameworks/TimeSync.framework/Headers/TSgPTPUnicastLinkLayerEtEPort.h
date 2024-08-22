// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSGPTPUNICASTLINKLAYERETEPORT_H
#define TSGPTPUNICASTLINKLAYERETEPORT_H

@class NSData;


#import "TSgPTPFDEtEPort.h"
#import "TSXgPTPUnicastLinkLayerEtEPort.h"

@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort {
    TSXgPTPUnicastLinkLayerEtEPort *_implXPC;
}


@property (readonly, copy, nonatomic) NSData *destinationMACAddress;


+(id)keyPathsForValuesAffectingDestinationMACAddress;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif