// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRILEVELCHECKED_H
#define TRILEVELCHECKED_H

@class TRILevel;

#import <Foundation/Foundation.h>


@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}




+(id)wrapLevel:(id)arg0 ;
-(BOOL)booleanValue;
-(CGFloat)doubleValue;
-(NSInteger)longValue;
-(float)floatValue;
-(id)binaryValue;
-(id)description;
-(id)directoryValue;
-(id)fileValue;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithLevel:(id)arg0 ;
-(id)stringValue;
-(int)intValue;


@end


#endif