// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSTORAGECHILDENUMERATOR_H
#define TSWPSTORAGECHILDENUMERATOR_H

@class NSEnumerator, NSArray;


#import "TSWPStorage.h"

@interface TSWPStorageChildEnumerator : NSEnumerator {
    TSWPStorage *_storage;
    _NSRange _charRange;
    unsigned int _index;
    NSArray *_charOffsetArray;
}




-(id)initWithStorage:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif