// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNSRESOLVERPROBE_H
#define DNSRESOLVERPROBE_H

@class NSMutableDictionary;
@protocol BonjourProbeDelegate, DNSResolverProbeErrorDelegate;


#import "TestProbe.h"

@interface DNSResolverProbe : TestProbe

@property (retain) NSObject<BonjourProbeDelegate> *bonjourDelegate; // ivar: _bonjourDelegate
@property (retain) NSObject<DNSResolverProbeErrorDelegate> *errorDelegate; // ivar: _errorDelegate
@property (nonatomic) *_DNSServiceRef_t getAddrInfoDNSRef; // ivar: _getAddrInfoDNSRef
@property (nonatomic) BOOL includeAWDL; // ivar: _includeAWDL
@property (nonatomic) *_DNSServiceRef_t resolveDNSRef; // ivar: _resolveDNSRef
@property (retain, nonatomic) NSMutableDictionary *serviceDict; // ivar: _serviceDict
@property (nonatomic) *_DNSServiceRef_t sharedDNSRef; // ivar: _sharedDNSRef


-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)startDNSResolveFor:(id)arg0 includeAWDL:(BOOL)arg1 ;
-(void)stopTest;


@end


#endif