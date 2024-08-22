// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICANCELABLECKOPERATION_H
#define TRICANCELABLECKOPERATION_H

@class _PASLock;
@protocol TRIFetchOpCanceling;

#import <Foundation/Foundation.h>


@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling>

 {
    _PASLock *_lock;
}


@property (readonly, nonatomic) BOOL isCanceled;


-(id)initWithOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)cancel;


@end


#endif