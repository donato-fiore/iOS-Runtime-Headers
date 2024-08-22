// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSULRUCACHEELEMENT_H
#define TSULRUCACHEELEMENT_H


#import <Foundation/Foundation.h>


@interface TSULRUCacheElement : NSObject {
    atomic<unsigned long> _counter;
}


@property (readonly, nonatomic) NSUInteger counterValue; // ivar: _counterValue
@property (readonly, nonatomic) id *object; // ivar: _object


-(id)initWithObject:(id)arg0 counter:(NSUInteger)arg1 ;
-(void)p_updateCounter:(NSUInteger)arg0 ;


@end


#endif