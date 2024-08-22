// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPPORT_H
#define TSXGPTPPORT_H

@class NSPointerArray, NSString;
@protocol TSXgPTPPortClientProtocol, OS_dispatch_queue;


#import "TSXAnonymousClient.h"

@interface TSXgPTPPort : TSXAnonymousClient <TSXgPTPPortClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
    NSPointerArray *_clients;
    os_unfair_lock_s _clientLock;
}


@property (nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short portNumber; // ivar: _portNumber
@property (nonatomic) int portRole; // ivar: _portRole
@property (nonatomic) int portType; // ivar: _portType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // ivar: _propertyUpdateQueue
@property (readonly) Class superclass;


+(id)clientProtocol;
+(id)frameworkClassNameForDaemonClassName:(id)arg0 ;
+(id)gPTPPortWithClockIdentifier:(NSUInteger)arg0 portNumber:(unsigned short)arg1 ;
+(id)serverProtocol;
+(id)xpcClassNameForDaemonClassName:(id)arg0 ;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
-(id)exportedObject;
-(id)initWithEndpoint:(id)arg0 ;
-(void)_updateFromProperties:(id)arg0 ;
-(void)addConnectionClient:(id)arg0 ;
-(void)interruptedConnection;
-(void)invalidatedConnection;
-(void)removeConnectionClient:(id)arg0 ;
-(void)serviceTerminated;
-(void)updateProperties;
-(void)updatedPortProperties:(id)arg0 ;


@end


#endif