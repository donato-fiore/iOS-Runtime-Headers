// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWACTIVITYALGOSSCORE_H
#define NWACTIVITYALGOSSCORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NWActivityAlgosScore : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordedScores; // ivar: _recordedScores


+(id)sharedInstance;
+(void)processNWActivitySuperMetric:(id)arg0 ;
+(void)processingComplete;
-(id)_processNWActivityConnections:(id)arg0 ;
-(id)_scoreDictForBundleID:(id)arg0 effectiveBundleID:(id)arg1 ;
-(id)init;
-(void)_postSymptomFor:(id)arg0 withScore:(NSUInteger)arg1 ;
-(void)_processNWActivitySuperMetric:(id)arg0 ;
-(void)_processNWActivityTransactions:(id)arg0 scoreDict:(id)arg1 ;
-(void)_processingComplete;


@end


#endif