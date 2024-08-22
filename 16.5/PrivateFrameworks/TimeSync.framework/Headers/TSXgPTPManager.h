// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPMANAGER_H
#define TSXGPTPMANAGER_H

@class NSString;
@protocol TSXgPTPManagerClientProtocol;


#import "TSXClient.h"
#import "TSgPTPManager.h"

@interface TSXgPTPManager : TSXClient <TSXgPTPManagerClientProtocol>

 {
    TSgPTPManager *_gPTPManager;
}


@property (readonly, nonatomic) NSUInteger airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) NSUInteger copresencePTPInstanceClockIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger systemDomainClockIdentifier;


+(id)clientProtocol;
+(id)serverProtocol;
+(id)serviceName;
+(void)_setIsAvailable;
+(void)_setIsUnavailable;
+(void)initialize;
-(BOOL)addAVBPTPInstanceIndex:(unsigned short)arg0 identifier:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addAirPlayPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addCopresencePTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addTimeOfDayPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)arg0 error:(*id)arg1 ;
-(BOOL)removeAirPlayPTPInstanceWithError:(*id)arg0 ;
-(BOOL)removeCopresencePTPInstanceWithError:(*id)arg0 ;
-(BOOL)removePTPInstanceWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)exportedObject;
-(id)initWithgPTPManager:(id)arg0 ;
-(void)interruptedConnection;


@end


#endif