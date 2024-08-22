// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSYCHANGEENUMERATOR_H
#define VCSYCHANGEENUMERATOR_H

@class NSEnumerator;



@interface VCSYChangeEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    NSUInteger _count;
    NSUInteger _index;
}




-(id)initWithLazyArray:(id)arg0 ;
-(id)nextObject;


@end


#endif