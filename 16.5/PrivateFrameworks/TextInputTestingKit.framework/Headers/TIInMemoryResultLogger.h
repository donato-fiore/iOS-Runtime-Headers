// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIINMEMORYRESULTLOGGER_H
#define TIINMEMORYRESULTLOGGER_H

@class NSString, NSMutableArray;
@protocol TIAutocorrectionResultLogging;

#import <Foundation/Foundation.h>


@interface TIInMemoryResultLogger : NSObject <TIAutocorrectionResultLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results
@property (readonly) Class superclass;


-(id)allResults;
-(id)init;
-(void)addResult:(id)arg0 ;


@end


#endif