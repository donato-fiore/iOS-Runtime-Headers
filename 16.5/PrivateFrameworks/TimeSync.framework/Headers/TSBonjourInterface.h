// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSBONJOURINTERFACE_H
#define TSBONJOURINTERFACE_H

@class NSString, NSArray;
@protocol OS_dispatch_queue, TSBonjourInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "TSBonjourIPv4Address.h"
#import "TSBonjourIPv6Address.h"
#import "TSBonjourNode.h"

@interface TSBonjourInterface : NSObject {
    *_DNSServiceRef_t _resolveRef;
    *_DNSServiceRef_t _addressRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSString *_type;
    NSString *_domain;
    unsigned int _interfaceIndex;
    NSString *_hostTarget;
    unsigned short _port;
}


@property (nonatomic) NSObject<TSBonjourInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) TSBonjourIPv4Address *ipv4Address; // ivar: _ipv4Address
@property (copy, nonatomic) NSArray *ipv4Addresses; // ivar: _ipv4Addresses
@property (copy, nonatomic) TSBonjourIPv6Address *ipv6Address; // ivar: _ipv6Address
@property (copy, nonatomic) NSArray *ipv6Addresses; // ivar: _ipv6Addresses
@property (nonatomic) TSBonjourNode *node; // ivar: _node


-(BOOL)startAddressLookupWithError:(*id)arg0 ;
-(BOOL)startResolveWithError:(*id)arg0 ;
-(BOOL)stopAddressLookup;
-(BOOL)stopResolve;
-(id)init;
-(id)initWithServiceName:(id)arg0 type:(id)arg1 andDomain:(id)arg2 onInterfaceIndex:(unsigned int)arg3 andName:(id)arg4 ;
-(void)dealloc;
-(void)pokeIPv6Destination;
-(void)resolvedWithHostTarget:(char *)arg0 port:(unsigned short)arg1 ;


@end


#endif