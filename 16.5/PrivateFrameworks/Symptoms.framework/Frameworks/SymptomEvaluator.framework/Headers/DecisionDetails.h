// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DECISIONDETAILS_H
#define DECISIONDETAILS_H

@class NSMutableDictionary, NSMutableArray, NSDate;

#import <Foundation/Foundation.h>


@interface DecisionDetails : NSObject

@property (retain, nonatomic) NSMutableDictionary *additionalInfo; // ivar: _additionalInfo
@property (retain, nonatomic) NSMutableArray *evaluations; // ivar: _evaluations
@property (nonatomic) char * reason; // ivar: _reason
@property (nonatomic) NSUInteger reasonCode; // ivar: _reasonCode
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithReason:(char *)arg0 code:(NSUInteger)arg1 evaluations:(id)arg2 ;
-(void)dealloc;


@end


#endif