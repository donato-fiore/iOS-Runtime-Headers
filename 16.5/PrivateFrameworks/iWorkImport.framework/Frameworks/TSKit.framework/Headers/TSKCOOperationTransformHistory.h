// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCOOPERATIONTRANSFORMHISTORY_H
#define TSKCOOPERATIONTRANSFORMHISTORY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSKCOOperationTransformHistory : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_history;
}




-(id)description;
-(id)init;
-(id)willTransformOperation:(struct shared_ptr<TSKCO::AbstractOperation> )arg0 withOperation:(struct shared_ptr<TSKCO::AbstractOperation> )arg1 ;
-(void)didTransformOperationWithResult:(struct shared_ptr<TSKCO::AbstractOperation> )arg0 token:(id)arg1 ;


@end


#endif