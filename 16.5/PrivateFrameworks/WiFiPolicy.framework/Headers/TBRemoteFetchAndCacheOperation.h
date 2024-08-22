// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBREMOTEFETCHANDCACHEOPERATION_H
#define TBREMOTEFETCHANDCACHEOPERATION_H

@class NSOperation, NSDate;
@protocol TBFetchRequest, TBFetchResponse;


#import "TBRemoteFetchAndCacheDataSource.h"

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}


@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<TBFetchRequest> *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSObject<TBFetchResponse> *response; // ivar: _response


-(BOOL)isFinished;
-(BOOL)isReady;
-(id)initWithFetchRequest:(id)arg0 dataSource:(id)arg1 ;
-(id)name;
-(void)finish;
-(void)start;


@end


#endif