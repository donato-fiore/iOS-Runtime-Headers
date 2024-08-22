// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLBLOCKREACTIVEVALUE_H
#define TMLBLOCKREACTIVEVALUE_H



#import "TMLReactiveValue.h"

@interface TMLBlockReactiveValue : TMLReactiveValue {
    id *_block;
}




// -(id)initWithBlock:(id)arg0 bindings:(unk)arg1 valueType:(id)arg2  ;
-(id)value;


@end


#endif