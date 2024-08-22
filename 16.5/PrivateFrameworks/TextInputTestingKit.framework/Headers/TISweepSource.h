// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISWEEPSOURCE_H
#define TISWEEPSOURCE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TISweepSource : NSObject {
    int stepCount;
}


@property (readonly, nonatomic) NSMutableDictionary *debugValues; // ivar: debugValues
@property (nonatomic) int stepCount;


+(id)sharedInstance;
-(BOOL)finished;
-(id)sweepStateHeader;
-(id)sweepStateValues;
-(void)addValue:(id)arg0 withMin:(float)arg1 withMax:(float)arg2 ;
-(void)addValue:(id)arg0 withValue:(float)arg1 ;
-(void)advanceSweep;


@end


#endif