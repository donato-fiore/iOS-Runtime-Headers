// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBCORENSURLSESSIONTASKTRANSACTIONMETRICS_H
#define WEBCORENSURLSESSIONTASKTRANSACTIONMETRICS_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {
    NetworkLoadMetrics _metrics;
}


@property (readonly) int _privacyStance;
@property (readonly, getter=isCellular) BOOL cellular;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, getter=isConstrained) BOOL constrained;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, getter=isMultipath) BOOL multipath;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, getter=isReusedConnection) BOOL reusedConnection;
@property (readonly, copy) NSDate *secureConnectionStartDate;


-(BOOL)cellular;
-(BOOL)constrained;
-(BOOL)expensive;
-(BOOL)multipath;
-(id)_initWithMetrics:(*void)arg0 ;
-(void)dealloc;


@end


#endif