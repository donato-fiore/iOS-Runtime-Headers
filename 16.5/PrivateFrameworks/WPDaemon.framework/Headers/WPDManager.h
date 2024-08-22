// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPDMANAGER_H
#define WPDMANAGER_H

@class NSIndexSet, NSSet, NSString;
@protocol CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate;

#import <Foundation/Foundation.h>

#import "WPDaemonServer.h"

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>



@property (readonly, nonatomic) NSIndexSet *advAllowlist;
@property (retain, nonatomic) NSSet *cbManagers; // ivar: _cbManagers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHomePod; // ivar: _isHomePod
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL restricted; // ivar: _restricted
@property (readonly, nonatomic) NSIndexSet *scanAllowlist;
@property (weak) WPDaemonServer *server; // ivar: _server
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL testMode; // ivar: _testMode


+(id)cbStateAsString:(NSInteger)arg0 ;
+(id)wpStateAsString:(NSInteger)arg0 ;
+(void)initialize;
+(void)initializeAdvDenylist:(id)arg0 AdvAllowlist:(id)arg1 ScanDenylist:(id)arg2 ScanAllowlist:(id)arg3 ;
-(BOOL)isAdvertisingAllowlistedForType:(unsigned char)arg0 ;
-(BOOL)isScanAllowlistedForType:(unsigned char)arg0 ;
-(id)generateStateDumpStrings;
-(id)initWithServer:(id)arg0 Name:(id)arg1 ;
-(void)cbManagerDidUpdateState:(id)arg0 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)generateStateDump;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg0 ;
-(void)update;
-(void)updateState:(NSInteger)arg0 Restricted:(BOOL)arg1 ;


@end


#endif