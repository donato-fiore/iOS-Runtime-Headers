// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTBATCHEVENTLOG_H
#define _LTBATCHEVENTLOG_H


#import <Foundation/Foundation.h>


@interface _LTBatchEventLog : NSObject



-(id)initWithRequest:(id)arg0 logID:(id)arg1 ;
-(id)makeContext;
-(void)cancelWithReason:(id)arg0 ;
-(void)endSuccessfully;
-(void)endWithError:(id)arg0 failedParagraphs:(NSUInteger)arg1 ;
-(void)sendWithContext:(id)arg0 ;
-(void)startWithParagraphCount:(NSUInteger)arg0 ;


@end


#endif