// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPTCPHANDLER_H
#define MPTCPHANDLER_H

@class NSString;
@protocol ConfigurableObjectProtocol, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NetworkAnalyticsStateRelay.h"
#import "CellOutrankHandler.h"

@interface MPTCPHandler : NSObject <ConfigurableObjectProtocol>

 {
    int _kernelWifiAdvice;
    int _kernelCellAdvice;
    NSInteger _rnfAdvice;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    CellOutrankHandler *_outrankRelay;
    id *relayReadyObserver;
    id *rnfWiFiObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int sockfd; // ivar: _sockfd
@property (retain) NSObject<OS_dispatch_source> *socksrc; // ivar: _socksrc
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_performUpdate;
-(void)_setMPTCPAdvisoryCell:(int)arg0 ;
-(void)_setMPTCPAdvisoryWiFi:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleSrcEvent;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)rnfWiFiEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)sendReply:(id)arg0 ;
-(void)setupSockFD;


@end


#endif