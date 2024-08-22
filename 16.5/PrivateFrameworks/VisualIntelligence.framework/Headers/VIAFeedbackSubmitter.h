// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIAFEEDBACKSUBMITTER_H
#define VIAFEEDBACKSUBMITTER_H

@class PARSession;
@protocol VIAnalyticsTestingDelegate;

#import <Foundation/Foundation.h>


@interface VIAFeedbackSubmitter : NSObject

@property (readonly, nonatomic) PARSession *parSession; // ivar: _parSession
@property (weak, nonatomic) NSObject<VIAnalyticsTestingDelegate> *testingDelegate; // ivar: _testingDelegate


-(id)initWithPARSession:(id)arg0 ;
-(void)didHitCacheForQueryId:(NSUInteger)arg0 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;


@end


#endif