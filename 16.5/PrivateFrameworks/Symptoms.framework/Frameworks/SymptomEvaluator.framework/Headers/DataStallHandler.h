// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATASTALLHANDLER_H
#define DATASTALLHANDLER_H

@class NSMutableDictionary, NSSet, NSString, NSMutableSet;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface DataStallHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    NSMutableDictionary *_store;
    id *_triggerDisconnectObserver;
    id *_wifiEpochObserver;
    id *_primaryObserver;
    NSSet *awdDirectSymptoms;
    NSMutableDictionary *awdDirectHistory;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)uniqForegroundCountForInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 ;
+(NSUInteger)uniqStallCountForInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 foregroundOnly:(BOOL)arg2 since:(id)arg3 ;
+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_getAWDDirectDampeningStatus:(*int)arg0 posted:(*int)arg1 forProcess:(id)arg2 withTimeStamp:(CGFloat)arg3 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(NSUInteger)uniqStallCountForInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 foregroundOnly:(BOOL)arg2 since:(id)arg3 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_checkDampeningAndPostAWDDirectMetric:(id)arg0 symptomName:(id)arg1 foregroundState:(BOOL)arg2 timeStamp:(CGFloat)arg3 signature:(id)arg4 ;
-(void)_cleanupAwdDirectHistory;
-(void)_pruneStaleEndpointsFor:(id)arg0 onInterfaceType:(NSInteger)arg1 stallType:(NSUInteger)arg2 ;
-(void)_resetInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)processStall:(id)arg0 procName:(id)arg1 endpoint:(id)arg2 foreground:(BOOL)arg3 interfaceType:(NSInteger)arg4 stallType:(NSUInteger)arg5 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif