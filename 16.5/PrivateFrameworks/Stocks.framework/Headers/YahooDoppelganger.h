// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef YAHOODOPPELGANGER_H
#define YAHOODOPPELGANGER_H

@class NSURLSession, NSURLSessionDataTask, NSString, NSData;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface YahooDoppelganger : NSObject {
    NSUInteger _responseOffset;
    BOOL _cancelled;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
}


@property (weak, nonatomic) NSObject<NSURLSessionDataDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *expectedRequestPattern; // ivar: _expectedRequestPattern
@property (retain, nonatomic) NSData *response; // ivar: _response
@property (nonatomic) NSUInteger responseChunkDelay; // ivar: _responseChunkDelay
@property (nonatomic) NSUInteger responseChunkInitialDelay; // ivar: _responseChunkInitialDelay
@property (nonatomic) NSUInteger responseChunkSize; // ivar: _responseChunkSize


+(BOOL)canHandleRequest:(id)arg0 ;
+(BOOL)waitForAllDoppelgangersUpToTimeout:(CGFloat)arg0 ;
+(id)newDoppelgangerMatchingRequestPattern:(id)arg0 ;
+(id)prepDoppelgangerForChartResponseWithSymbol:(id)arg0 numberOfDataPoints:(NSInteger)arg1 ;
+(id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg0 numberOfNewsItems:(NSInteger)arg1 ;
+(id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg0 includeMetdata:(BOOL)arg1 ;
+(id)prepDoppelgangerWithRequestPattern:(id)arg0 response:(id)arg1 ;
+(void)_doppelgangerFinished:(id)arg0 ;
+(void)_spewDoppelgangerArray:(id)arg0 named:(id)arg1 ;
+(void)clearDoppelgangerData;
+(void)hookIntoYQLRequestIfNeeded;
+(void)setTestHarness:(id)arg0 ;
+(void)spewDoppelgangerData;
-(BOOL)matchesRequest:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_relayDataChunk;
-(void)cancel;
-(void)resume;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg0 forMode:(id)arg1 ;


@end


#endif