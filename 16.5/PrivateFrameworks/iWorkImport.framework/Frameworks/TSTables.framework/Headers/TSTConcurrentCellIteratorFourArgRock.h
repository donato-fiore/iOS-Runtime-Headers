// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCONCURRENTCELLITERATORFOURARGROCK_H
#define TSTCONCURRENTCELLITERATORFOURARGROCK_H


#import <Foundation/Foundation.h>


@interface TSTConcurrentCellIteratorFourArgRock : NSObject

@property (retain, nonatomic) id *first; // ivar: _first
@property (retain, nonatomic) id *fourth; // ivar: _fourth
@property (retain, nonatomic) id *second; // ivar: _second
@property (retain, nonatomic) id *third; // ivar: _third


+(id)rockWithFirst:(id)arg0 second:(id)arg1 third:(id)arg2 fourth:(id)arg3 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 third:(id)arg2 fourth:(id)arg3 ;


@end


#endif