// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSTRONGREFERENCEHOLDER_H
#define TSUSTRONGREFERENCEHOLDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSUCustomCallBackDictionary.h"

@interface TSUStrongReferenceHolder : NSObject {
    _opaque_pthread_rwlock_t _rwLock;
}


@property (readonly, nonatomic) TSUCustomCallBackDictionary *objectUniquingDictionary; // ivar: _objectUniquingDictionary
@property (readonly, nonatomic) NSMutableArray *strongReferences; // ivar: _strongReferences


+(id)strongReferenceHolder;
-(id)init;
-(id)uniqueReferenceForObject:(id)arg0 ;


@end


#endif