// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISERIALIZINGRESULTLOGGER_H
#define TISERIALIZINGRESULTLOGGER_H

@class NSString, NSMutableArray, NSURL;
@protocol TIAutocorrectionResultLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TISerializingResultLogger : NSObject <TIAutocorrectionResultLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger flushThreshold; // ivar: _flushThreshold
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logSerializationQueue; // ivar: _logSerializationQueue
@property (readonly, nonatomic) NSMutableArray *partfileArchivePaths; // ivar: _partfileArchivePaths
@property (readonly, nonatomic) NSUInteger partfileCount; // ivar: _partfileCount
@property (readonly, nonatomic) NSURL *partfileURL; // ivar: _partfileURL
@property (readonly, nonatomic) NSMutableArray *resultsBuffer; // ivar: _resultsBuffer
@property (readonly) Class superclass;


-(BOOL)bufferEmpty;
-(BOOL)bufferFull;
-(id)allResults;
-(id)currentPartfileArchivePath;
-(id)initWithOutputURL:(id)arg0 flushThreshold:(id)arg1 ;
-(void)addResult:(id)arg0 ;
-(void)flushBufferWithCompletionHandler:(id)arg0 ;
-(void)serializeResultsArray:(id)arg0 ;


@end


#endif