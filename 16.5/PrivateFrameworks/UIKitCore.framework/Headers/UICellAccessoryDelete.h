// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYDELETE_H
#define UICELLACCESSORYDELETE_H



#import "UICellAccessory.h"
#import "UIColor.h"

@interface UICellAccessoryDelete : UICellAccessory

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) UIColor *backgroundColor;


+(BOOL)supportsSecureCoding;
-(BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif