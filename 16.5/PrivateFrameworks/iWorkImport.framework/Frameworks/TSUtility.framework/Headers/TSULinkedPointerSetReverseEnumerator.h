// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSULINKEDPOINTERSETREVERSEENUMERATOR_H
#define TSULINKEDPOINTERSETREVERSEENUMERATOR_H

@class NSEnumerator;


#import "TSULinkedPointerSetEntry.h"

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry *mTail;
    TSULinkedPointerSetEntry *mLastUsed;
}




-(id)initWithLastEntry:(id)arg0 ;
-(id)nextObject;


@end


#endif