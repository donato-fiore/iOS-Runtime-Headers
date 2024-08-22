// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DVALUEAXISLABELKIND_H
#define TSCH3DVALUEAXISLABELKIND_H



#import "TSCH3DAxisLabelKind.h"

@interface TSCH3DValueAxisLabelKind : TSCH3DAxisLabelKind



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)kind;
-(CGFloat)unitSpaceValueForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(NSUInteger)count:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)labelForAxis:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif