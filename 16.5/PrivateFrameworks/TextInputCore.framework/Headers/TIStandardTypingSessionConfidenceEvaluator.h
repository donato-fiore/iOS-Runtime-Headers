// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISTANDARDTYPINGSESSIONCONFIDENCEEVALUATOR_H
#define TISTANDARDTYPINGSESSIONCONFIDENCEEVALUATOR_H


#import <Foundation/Foundation.h>


@interface TIStandardTypingSessionConfidenceEvaluator : NSObject



+(CGFloat)calculateAlignedTypingSessionConfidence:(id)arg0 ;
+(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;


@end


#endif