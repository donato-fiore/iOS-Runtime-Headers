// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKPICKERITEM_H
#define TKPICKERITEM_H


#import <Foundation/Foundation.h>


@interface TKPickerItem : NSObject

@property (nonatomic, setter=_setSection:) NSInteger section; // ivar: _section


-(id)description;
-(void)_appendDescriptionOfAttributeNamed:(id)arg0 withBoolValue:(BOOL)arg1 toString:(id)arg2 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg0 withIntegerValue:(NSInteger)arg1 toString:(id)arg2 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg0 withStringValue:(id)arg1 toString:(id)arg2 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif