// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMPPINGPROBE_H
#define ICMPPINGPROBE_H

@class NSData, NSString, NSMutableArray;
@protocol OS_dispatch_source, ICMPPingProbeDelegate, OS_dispatch_semaphore;


#import "TestProbe.h"

@interface ICMPPingProbe : TestProbe {
    BOOL stopTestOnFirstSuccess;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSObject<OS_dispatch_source> *pingTimer;
    NSObject<OS_dispatch_source> *burstTimer;
    NSData *_hostAddressData;
    *__CFHost _host;
    *__CFSocket _socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
}


@property (nonatomic) NSUInteger burstCount; // ivar: _burstCount
@property (nonatomic) NSUInteger currentBurst; // ivar: _currentBurst
@property (retain, nonatomic) NSObject<ICMPPingProbeDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger failedCount; // ivar: _failedCount
@property (nonatomic) BOOL hostAddressIsIPv6; // ivar: _hostAddressIsIPv6
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (nonatomic) CGFloat interBurstInterval; // ivar: _interBurstInterval
@property (nonatomic) CGFloat interPingInterval; // ivar: _interPingInterval
@property (nonatomic) unsigned int interfaceIndex; // ivar: _interfaceIndex
@property (retain, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (nonatomic) NSUInteger payloadSize; // ivar: _payloadSize
@property (nonatomic) float percentComplete; // ivar: _percentComplete
@property (nonatomic) NSUInteger pingCount; // ivar: _pingCount
@property (nonatomic) *__CFRunLoop pingRunLoop; // ivar: _pingRunLoop
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pingRunLoopReady; // ivar: _pingRunLoopReady
@property (nonatomic) *_opaque_pthread_t pingThread; // ivar: _pingThread
@property (retain, nonatomic) NSMutableArray *pings; // ivar: _pings
@property (nonatomic) *__CFRunLoopSource rls; // ivar: _rls
@property (nonatomic) NSUInteger successCount; // ivar: _successCount


+(BOOL)loadStringUtils;
+(BOOL)stringAddrToSockaddr:(id)arg0 to:(struct sockaddr *)arg1 ;
+(NSUInteger)icmpIPv4OffsetInPacket:(id)arg0 ;
+(void)initialize;
-(BOOL)isValidIPv4PingResponsePacket:(id)arg0 isForMe:(*BOOL)arg1 sequence:(*unsigned short)arg2 isBadPacket:(*BOOL)arg3 ;
-(BOOL)isValidIPv6PingResponsePacket:(id)arg0 isForMe:(*BOOL)arg1 sequence:(*unsigned short)arg2 isBadPacket:(*BOOL)arg3 ;
-(BOOL)startRunLoop;
-(id)_shortErrorFromError:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 ;
-(void)pingDidFailToSendToAddress:(id)arg0 packet:(id)arg1 sequence:(unsigned int)arg2 error:(id)arg3 ;
-(void)pingDidReceivePingResponseFromAddress:(id)arg0 packet:(id)arg1 sequence:(unsigned int)arg2 ;
-(void)pingDidReceiveUnexpectedPingResponseFromAddress:(id)arg0 packet:(id)arg1 sequence:(unsigned int)arg2 ;
-(void)pingDidSendToAddress:(id)arg0 packet:(id)arg1 sequence:(unsigned int)arg2 ;
-(void)readData;
-(void)sendPing;
-(void)sendPingWithData:(id)arg0 ;
-(void)startICMPPingTestTo:(id)arg0 hostName:(id)arg1 interface:(unsigned int)arg2 pingCount:(NSInteger)arg3 interPingInterval:(CGFloat)arg4 burstCount:(NSInteger)arg5 interBurstInterval:(CGFloat)arg6 timeout:(CGFloat)arg7 stopTestOnFirstSuccess:(BOOL)arg8 ;
-(void)startThePinging;
-(void)stopDataTransfer;
-(void)stopRunLoop;
-(void)stopTest;


@end


#endif