// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUBASICPROGRESS_H
#define TSUBASICPROGRESS_H



#import "TSUProgress.h"
#import "TSUBasicProgressStorage.h"

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *_storage;
}


@property (getter=isIndeterminate) BOOL indeterminate;
@property CGFloat value;


-(CGFloat)maxValue;
-(id)initForSubclass;
-(id)initWithMaxValue:(CGFloat)arg0 ;


@end


#endif