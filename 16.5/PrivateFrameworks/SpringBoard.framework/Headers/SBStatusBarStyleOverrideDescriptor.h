// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARSTYLEOVERRIDEDESCRIPTOR_H
#define SBSTATUSBARSTYLEOVERRIDEDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface SBStatusBarStyleOverrideDescriptor : NSObject

@property (readonly, nonatomic) NSUInteger overrides; // ivar: _overrides
@property (readonly, nonatomic) int pid; // ivar: _pid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithOverrides:(NSUInteger)arg0 pid:(int)arg1 ;


@end


#endif