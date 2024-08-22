// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIACCUMULATINGCANDIDATEHANDLER_H
#define TIACCUMULATINGCANDIDATEHANDLER_H

@class TIAutocorrectionList;
@protocol TICandidateHandler;

#import <Foundation/Foundation.h>


@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler>

 {
    NSUInteger _status;
}


@property (readonly, nonatomic) BOOL asynchronous;
@property (readonly, copy, nonatomic) id *candidateHandler; // ivar: _candidateHandler
@property (retain, nonatomic) TIAutocorrectionList *candidates; // ivar: _candidates


-(id)initWithHandlerBlock:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)pushCandidates:(id)arg0 ;


@end


#endif