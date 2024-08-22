// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICELLSPACINGACCESSORY_H
#define _UICELLSPACINGACCESSORY_H



#import "UICellAccessory.h"

@interface _UICellSpacingAccessory : UICellAccessory

@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)accessoryWithIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)view;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif