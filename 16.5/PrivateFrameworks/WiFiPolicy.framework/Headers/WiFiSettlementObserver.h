// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFISETTLEMENTOBSERVER_H
#define WIFISETTLEMENTOBSERVER_H

@class NSMutableArray, NSDate;
@protocol WiFiScanProvider;

#import <Foundation/Foundation.h>

#import "WiFiSettlementConfiguration.h"
#import "WiFiSettlementContext.h"

@interface WiFiSettlementObserver : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks; // ivar: _callbacks
@property (nonatomic) NSUInteger confidence; // ivar: _confidence
@property (retain, nonatomic) WiFiSettlementConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSUInteger consecutiveScansWithoutMatch; // ivar: _consecutiveScansWithoutMatch
@property (retain, nonatomic) WiFiSettlementContext *currentContext; // ivar: _currentContext
@property (retain, nonatomic) NSObject<WiFiScanProvider> *scanProvider; // ivar: _scanProvider
@property (nonatomic) NSDate *settledDate; // ivar: _settledDate
@property (nonatomic) NSInteger status; // ivar: _status


-(id)initWithScanProvider:(id)arg0 configuration:(id)arg1 ;
-(void)_callSettlementCallbackWithStatus:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)_handleScanResults:(id)arg0 error:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateSettlementStatus:(NSInteger)arg0 confidence:(NSUInteger)arg1 ;
-(void)addSettlementCallback:(id)arg0 ;
-(void)removeSettlementCallback:(id)arg0 ;
-(void)resetSettlement;


@end


#endif