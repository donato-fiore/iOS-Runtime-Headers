// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBTREELOCALIZEDKEYLISTENUMERATOR_H
#define UIKBTREELOCALIZEDKEYLISTENUMERATOR_H

@class NSEnumerator, NSDictionary;



@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}




-(id)initWithKeyplaneCache:(id)arg0 ;
-(id)nextObject;


@end


#endif